#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll d[100001],n,q;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    d[0] = -999999999999;
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    for(ll i=1;i<=n;i++) cin>>d[i];
    while(q--){
        ll target;cin>>target;
        ll *ps = lower_bound(d,d+1+n,target, [](const ll &p, const ll &a)->bool{return p<=a;});
        print(ps-d-1)
    }
}
