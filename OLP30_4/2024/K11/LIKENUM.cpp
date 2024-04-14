#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a);
typedef long long ll;
typedef long double ld;
ll k,n,ans = 0;
ll l=0,r=1e18;
int main(){
    // freopen("LIKENUM.INP", "r", stdin);
    // freopen("LIKENUM.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>k>>n;
    ll len = to_string(k).length();
    r /= (ll)pow(10ll,len);
    while(l<=r){
        ll mid = (l+r)/2;
        ll t = mid*pow(10,len)+k;
        if(t<=n){
            l = mid + 1;
            ans = mid;
        }
        else r = mid - 1;
    }
    print(ans)
}