#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
const ll maxn = 1e5+1;
ll ans=1e10,n,a[maxn],b[maxn];
ll bsearh(ll x){
    if(b[1]>x) return b[1];
    if(b[n]<x) return b[n];
    ll l=1,r=n;
    while(l<=r){
        ll mid = (l+r)/2;
        if(b[mid]<x){
            l=mid+1;
        }else{
            r = mid-1;
        }
    }
    if(b[l]==x||b[r]==x) return x;
    if(abs(b[l]-x)<abs(b[r]-x)) return b[l];
    return b[r];
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i = 1;i<=n;i++) cin>>a[i];
    for(ll i = 1;i<=n;i++) cin>>b[i];
    sort(b+1,b+1+n);
    for(ll i = 1;i<=n;i++){
        ll x = bsearh(-a[i]);
        ll t = abs(a[i]+x);
        if(t==0){print(0);return 0;}
        else{ans = min(ans,t);}
    }
    print(ans);
}