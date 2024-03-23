#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;

ll d[100001];
int main(){
    #ifdef ONLINE_JUDGE
    freopen("SHIPPER.INP", "r", stdin);
    freopen("SHIPPER.OUT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n,m;cin>>n>>m;
    for(ll i=1;i<=n;i++){
        cin>>d[i];
    }
    sort(d+1,d+n+1);
    ll ans = 0,cnt=1, prv = d[1];
    ll i = 2;
    while(i<=n){
        // cout<<prv<<" "<<d[i]<<" "<<cnt<<" "<<ans<<"\n";
        if(d[i]!=prv){
            if(cnt<=m) ans = max(ans,cnt);
            cnt = 1;
            prv = d[i];
            i++;
            continue;
        }
        cnt++;
        i++;
    }
    if (cnt <= m) ans = max(ans,cnt);
    print(ans)
}