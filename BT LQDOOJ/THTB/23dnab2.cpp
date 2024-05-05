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
const ll maxn = 1e6+50;
ll n,prefixsum[maxn],clonesum[maxn];
ll avg_in_k(ll k){
    ll res = -1e10;
    for(ll i=k;i<=n;i++){
        res = max(res,(prefixsum[i]-prefixsum[i-k])/k);
    }
    return res;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>prefixsum[i];
        prefixsum[i]+=prefixsum[i-1];
    }
    ll ans=-1e10;
    for(ll i=1;i<=n;i++){
        ans = max(ans,avg_in_k(i));
    }
    print(ans)
}