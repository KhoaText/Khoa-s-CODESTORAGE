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

ll n,f[100100][4];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>f[i][1]>>f[i][2]>>f[i][3];
        f[i][1]+=max(f[i-1][2],f[i-1][3]);
        f[i][2]+=max(f[i-1][1],f[i-1][3]);
        f[i][3]+=max(f[i-1][1],f[i-1][2]);
    }
    print(max({f[n][1],f[n][2],f[n][3]}))
}