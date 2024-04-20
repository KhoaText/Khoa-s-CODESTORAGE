#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll n,a[30001],b[30001],ans;
ll bin(ll k){
    ll res = 0;
    ll l=0,r=ans;
    while(l<=r){
        ll mid = (l+r)/2;
        if(a[k]>b[mid]){
            l = mid+1;
            res = mid;
        }else{
            r = mid - 1;
        }
    }
    return res;
}
void solve(){
    for(ll i=1;i<=n;i++){
        ll t = bin(i)+1;
        b[t] = a[i];
        ans = max(ans,t);
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i =1;i<=n;i++) cin>>a[i];
    solve();
    print(ans);
}