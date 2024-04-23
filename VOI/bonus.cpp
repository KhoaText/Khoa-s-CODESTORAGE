#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll ans,d[1001][1001],n,k;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    for(ll i = 1;i<=n;i++){
        for(ll j = 1;j<=n;j++){
            cin>>d[i][j];
            d[i][j]+= d[i-1][j]+d[i][j-1]-d[i-1][j-1];
        }
    }
    for(ll i=k;i<=n;i++){
        for(ll j=k;j<=n;j++){
            ans = max(ans,d[i][j]-d[i-k][j]-d[i][j-k]+d[i-k][j-k]);
        }
    }
    print(ans)
}