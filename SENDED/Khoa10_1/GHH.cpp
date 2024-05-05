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
const ll maxnum = 1e6;
ll n,tonguoc[maxnum+1];
int main(){
    freopen("GHH.INP", "r", stdin);
    freopen("GHH.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=maxnum;i++){
        for(ll j=i;j<=maxnum;j+=i) tonguoc[j]+=i;
    }
    for(ll i=1;i<=n;i++){
        ll a;cin>>a;
        cout<<(2*a<=tonguoc[a]?1:0)<<"\n";
        // ll t = 0;
        // for(ll j=1;j*j<=a;j++){
        //     if(a%j==0) t+=j+(j*j!=a?a/j:0);
        // }
        // print(t)
        // cout<<(2*a<=t?1:0)<<"\n";
    }
}