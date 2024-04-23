#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,k,a[200001];
ld ans=(ld)-1e9,d[200001];
int main(){
    freopen("BOCBONG.inp", "r", stdin);
    freopen("BOCBONG.out", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(d,(ld)-1e9,sizeof(d));
    cin>>n>>k;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for(ll i=k;i<=n;i++){
        for(ll j=i;j<=n;j++){
            d[i] = max(d[i],(ld)a[j]-a[j-i]);
        }
        ans = max(ans,(ld)d[i]/(ld)i);
        // cout<<setprecision(3)<<fixed<<d[i]/i<<" ";
    }
    cout<<setprecision(3)<<fixed<<ans;
}