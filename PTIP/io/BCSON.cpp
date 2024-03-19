#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll d[1002][1002];
ll m,n,sum;
void solve(){
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=n;j++){
            ll a = d[i][j];
            sum+=max(0ll,a-d[i][j-1]);
            sum+=max(0ll,a-d[i][j+1]);
            sum+=max(0ll,a-d[i-1][j]);
            sum+=max(0ll,a-d[i+1][j]);
        }
    }
}
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>m>>n;
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=n;j++){
            cin>>d[i][j];
        }
    }
    sum+=m*n;
    solve();
    print(sum);
}