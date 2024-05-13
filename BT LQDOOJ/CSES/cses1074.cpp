#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define FOR_NGUOC(i,r,l) for(ll i=(r),_l=(l);i>=_l;i--)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i))&1LL)
#define all(v) (v).begin(),(v).end()


ll n,d[200100],dp[200100],ans=1e18;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    FOR(i,1,n)cin>>d[i];
    sort(d+1,d+1+n);
    FOR(i,1,n)dp[i]=d[i]+dp[i-1];
    FOR(i,1,n){
        ll up = upper_bound(d,d+1+n,d[i])-d-1;
        ll low = lower_bound(d,d+1+n,d[i])-d;
        ans = min(ans,abs(dp[n]-dp[up]-(d[i]*(n-up)))+abs(dp[low]-d[i]*low));
    }
    print(ans)
}