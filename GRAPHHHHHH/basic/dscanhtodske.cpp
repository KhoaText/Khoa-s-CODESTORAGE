#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll n,m;
vector<ll> dske[1001];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(ll i=1;i<=m;i++){
        ll a,b;cin>>a>>b;
        dske[a].pb(b);
        dske[b].pb(a);
    }
    for(ll i=1;i<=n;i++){
        cout<<i<<" : ";
        for(ll x:dske[i]) cout<<x<<" ";
        cout<<"\n";
    }
}