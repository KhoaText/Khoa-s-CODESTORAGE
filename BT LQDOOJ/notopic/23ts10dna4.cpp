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

const ll maxn = 1e5;
ll n,x,d[maxn+100],a[maxn*2+1000];
int main(){
    // freopen("TRE.INP", "r", stdin);
    // freopen("TRE.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>x;
    FOR(i,1,n)cin>>d[i];
    sort(d+1,d+1+n);
    FOR(i,1,n){
        if(d[i]>x) continue;
        if(d[i]==x) a[x] ++;
        vector<pair<ll,ll>> tmp;
        // update a_1,a_2,...,a_(x-d[i])
        // or  a_d[i] -> a_x + a_[j - d[i]]
        FOR(j,d[i],x){
            tmp.pb({j,a[j-d[i]]});
        }
        for(auto [x,y]: tmp){
            a[x] += y;
            a[x] %= MOD;
        }
        a[d[i]]++;a[d[i]]%=MOD;
    }
    print(a[x]%MOD)
}
