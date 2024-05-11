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
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i-1LL))&1LL)
#define all(v) (v).begin(),(v).end()


ll n,m,a,b,ans;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    cin>>a>>b;
    n-=m;
    if(n<=0){
        print(0)
        return 0;
    }
    ll lo=1,hi=1e9;
    while(lo<=hi){
        ll mid = (lo+hi)/2;
        ll sum = mid*(a+b);
        if(sum>=n){
            ans = mid;
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
    print(ans)
}