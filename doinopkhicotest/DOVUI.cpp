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

const ll maxn = 1e7+10;
ll n,dp[maxn];
ll binpow(ll a,ll b){
    ll res = 1;
    while(b>0){
        if(b&1)res*=a;
        a*=a;
        b/=2;
    }
    return res;
}
ll merge_so(ll a,ll b){
    vector<ll> t;
    t.pb(b);
    while(a!=0){
        t.pb(a%10);
        a/=10;
    }
    ll res = 0;
    ll len = t.size();
    for(ll x:t){
        res+=x*binpow(10,len-1);
        len--;
    }
    return res;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(dp,0x3f3f3f3f,sizeof(dp));
    cin>>n;
    for(ll i=1;i<=9;i++){
        dp[i] = i;
    }
    for(ll i=1;i<=n;i++){
        for(ll j=2;j<=9;j++){
            dp[i*j] = min(dp[i*j],merge_so(dp[i],j));
        }
    }
    print((1<=dp[n]&&dp[n]<=1e17?dp[n]:-1))
}