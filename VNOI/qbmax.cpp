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

ll n,m,ans=-1e18,d[101][101];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(d,0xcfcfcfcf,sizeof d);
    cin>>n>>m;
    FOR(i,1,n)FOR(j,1,m) cin>>d[i][j];
    FOR(j,2,m){
        FOR(i,1,n-1){
            d[i][j] += max({d[i-1][j-1],d[i][j-1],d[i+1][j-1]});
        }
        d[n][j] += max(d[n-1][j-1],d[n][j-1]);
    }
    FOR(i,1,n) ans =max(ans,d[i][m]);
    print(ans)
}