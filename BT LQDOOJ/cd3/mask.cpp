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


ll n,q;
vector<ll> d;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;FOR(i,1,n){ll a;cin>>a;d.pb(a);}
    sort(all(d));
    cin>>q;
    while(q--){
        ll m;cin>>m;
        if(m<=d[0])print(0)
        else print(lower_bound(all(d),m)-d.begin())
    }
}