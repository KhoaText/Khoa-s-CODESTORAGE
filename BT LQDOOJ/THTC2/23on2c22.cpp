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
const ll Mlimit = 1e6;

ll n,m,ans;
unordered_set<ll> prime;
bool p[Mlimit+1];
int main(){
    //freopen(".INP", "r", stdin);
    //freope(n".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(p,1,sizeof(p));
    ans = m;
    while(n--){
        ll a;cin>>a;
        for(ll i=2;i*i<=a;i++){
            if(a%i==0) prime.insert(i);
            while(a%i==0)a/=i;
        }
        if(a!=1) prime.insert(a);
    }
    for(ll x: prime){//=a;j<=m;j+=a){
        for(ll i=x;i<=m;i+=x)if(p[i]){ans--;p[i]=0;}
    }
    print(ans)
    for(ll i=1;i<=m;i++){
        if(p[i]) print(i);
    }
}
