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


ll q;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>q;
    while(q--){
        ll n;cin>>n;
        ll lo = 1,hi = 1e7;
        ll sum = 0;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            ll t=mid*(mid+1)/2;
            if(t<=n){
                sum = t;
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        if(sum == n) print(0)
        else print(1)
    }
}