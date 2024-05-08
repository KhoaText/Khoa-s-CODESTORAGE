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

ll n,W,f[101][100100];
ll w[101],v[101];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>W;
    for(ll i=1;i<=n;i++){
        cin>>w[i]>>v[i];
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=W;j++){
            //if(wi>j) f[i][j] = f[i][j-1]
            //else f[i][j] = max(f[i-1][j],f[i-1][j-w])
            if(w[i]<=j){
                f[i][j] = max(v[i]+f[i-1][j-w[i]],f[i-1][j]);
            }else{
                f[i][j] = f[i-1][j];
            }
        }
    }
    print(f[n][W])
}