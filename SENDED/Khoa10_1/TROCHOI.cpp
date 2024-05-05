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
ll n,ans=1e18,a[maxn+1],b[maxn+1];
ll binsearch(ll k){
    if(k<=b[1]) return b[1];
    if(k>=b[n]) return b[n];
    ll l=1,r=n;
    while(l<=r){
        ll mid = (l+r)/2;
        if(b[mid]<k){
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    // cout<<l<<" "<<r<<"\n";
    if(b[r]==k||b[l]==k) return k;
    if(abs(b[r]-k)<abs(b[l]-k)) return b[r];
    return b[l];
}
int main(){
    freopen("TROCHOI.INP", "r", stdin);
    freopen("TROCHOI.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=n;i++) cin>>b[i];
    sort(b+1,b+1+n);
    for(ll i=1;i<=n;i++){
        ans = min(ans,abs(a[i]+binsearch(-a[i])));
    }
    print(ans)
}