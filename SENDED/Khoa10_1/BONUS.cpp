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
const ll maxn = 1e6+100;
ll n,d[maxn],ans;
void trau(){
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n-i+1;j++){
            ll mn = 1e9,mx = 0;
            for(ll z=0;z<i;z++){
                mn = min(mn,d[j+z]);
                mx = max(mx,d[j+z]);
                // cout<<d[j+z]<<' ';
            }
            ans += mx-mn;
            // cout<<'\n';
        }
    }
}
int main(){
    freopen("BONUS.INP", "r", stdin);
    freopen("BONUS.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>d[i];
    trau();
    print(ans)
}