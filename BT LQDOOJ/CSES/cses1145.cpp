#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

// ll d[(ll)2e5+1];
ll dp[(ll)2e5+1];
ll n,ans=1;
ll binsrch(ll k){
    ll res = 0;
    ll lo=1,hi=ans;
    while(lo <= hi){
        ll mid = (lo + hi)/2;
        if(dp[mid] < k){
            res = mid;
            lo = mid+1;
        }else{
            hi = mid-1;
        }
    }
    return res+1;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    cin>>dp[1];
    for(ll i =2;i<=n;i++){
        ll a;cin>>a;
        ll m = binsrch(a);
        dp[m] = a;
        ans = max(ans,m);
    }
    print(ans)
}