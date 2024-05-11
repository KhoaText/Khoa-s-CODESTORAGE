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
#define BIT(x,i) (((x)>>(i-1LL))&1LL)
#define all(v) (v).begin(),(v).end()
const ll maxn = 1e5+100;
ll n,s,ans,d[maxn],dp[maxn];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>s;
    for(ll i =1;i<=n;i++)cin>>d[i];
    sort(d+1,d+1+n);
    for(ll i=1;i<=n;i++)dp[i] = d[i]+dp[i-1];
    ll lo=0,hi=d[n]+100000;
    while(lo<=hi){
        ll mid=(lo+hi)/2;
        ll t = (upper_bound(d,d+1+n,mid)-d)-1;
        ll chenhlech = (dp[n] - dp[t])-mid*(n-t) - s;
        if(chenhlech>=0){
            ans = mid;
            lo = mid + 1;
        }else{  
            hi = mid - 1;
        }
    }
    print(ans)
}



