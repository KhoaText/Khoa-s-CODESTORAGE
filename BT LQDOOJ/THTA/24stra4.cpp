#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;


#define LOG 59
ll binpow(ll a,ll b){
    ll res = 1;
    while(b>0){
        if(b&1) res*=a;
        a*=a;
        b/=2ll;
    }
    return res;
}
ll l,r,ans;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>l>>r;
    l--;
    FOR(i,1,LOG) {ll t=binpow(2,i);ans+=(r/t)-(l/t);}
    print(ans)
}