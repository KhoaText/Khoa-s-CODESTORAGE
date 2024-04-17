#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll n,q,k,ans=1;
unordered_map<ll,ll> Map;
ll binpow(ll a,ll b){
    ll res =1 ;
    while(b){
        if(b&1) res*=a;
        a*=a;
        b/=2;
    }
    return res;
}
void process(ll a){
    for(ll i=2;i*i<=a;i++){
        ll t = 0;
        while(!(a%i)){
            t++;a/=i;
        }
        if(t) Map[i]=max(Map[i],t);
    }
    if(a!=1) Map[a]=max(Map[a],1);
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q>>k;
    process(n);process(q);process(k);
    for(auto [x,y]: Map){
        if(y&1) ans *= binpow(x,(y+1)/2);
        else ans *= binpow(x,y/2);
    }
    print(ans);
}