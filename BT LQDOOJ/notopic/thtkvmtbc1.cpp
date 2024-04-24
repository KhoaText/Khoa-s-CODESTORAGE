#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll d[501][501];
ll n,m,ans;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(ll i = 1; i <= n;i++){
        for(ll j=1;j<=m;j++){
            cin>>d[i][j];
            d[i][j] += d[i-1][j] + d[i][j-1] - d[i-1][j-1];
            for(ll u=0;u<i;u++){
                for(ll v=0;v<j;v++){
                    if((d[i][j]-d[i][v]-d[u][j]+d[u][v])%9==0) ans++;
                }
            }
        }
    }
    print(ans)
}