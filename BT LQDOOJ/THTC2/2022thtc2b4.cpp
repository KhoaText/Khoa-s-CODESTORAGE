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
ll n,k,ans;
ll d[150001],dp[150001];
ll tong(ll l,ll r){
    return (r-l+1)*(r+l)/2;
}
int main(){
    freopen("DOVUIVE.INP", "r", stdin);
    freopen("DOVUIVE.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    for(ll i=1;i<=n;i++) cin>>d[i];
    sort(d+1,d+1+n,greater<ll>());
    // FOR(i,1,n)cout<<d[i]<<" ";
    // cout<<'\n';
    for(ll i=2;i<=n+1;i++){
        dp[i] = (d[i-1]-d[i])*(i-1); 
        if(!dp[i]) continue;
        if(k-dp[i]<0){
            ll t = k/(i-1);
            ans+=tong(d[i-1]-t+1,d[i-1])*(i-1);
            k%=i-1;
            ans+=(d[i-1]-t)*k;
            break;
        }
        ans+=tong(d[i]+1,d[i-1])*(i-1);
        k-=dp[i];
    }
    print(ans)
}