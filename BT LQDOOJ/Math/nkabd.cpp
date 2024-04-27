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
const ll maxn = 1e6;
ll dp[maxn+1],l,r,ans;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>l>>r;

    for(ll i=2;i<=r/2;i++){
        for(ll j=i<<1;j<=r;j+=i) dp[j]+=i;
    }
    FOR(i,l,r) {
        if(dp[i]+1>i) ans++;
    }
    print(ans)
}