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
const ll mxprime = 1e7;
ll n,ans=1,minPrime[mxprime+1];
unordered_map<ll,ll> prime;
ll binpow(ll a,ll b){
    ll res = 1;
    while(b>0){
        if(b&1) res=(res*a)%MOD;
        a = (a*a)%MOD;
        b/=2LL;
    }
    return res%MOD;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(ll i=2;i<=mxprime;i++){
        if(minPrime[i]==0){
            minPrime[i] = i;
            for(ll j=i*i;j<=mxprime;j+=i){
                if(minPrime[j] == 0)minPrime[j] = i;
            }
        }
    }
    cin>>n;
    for(ll i=1;i<=n;i++){
        ll a;cin>>a;
        if(a<=1) continue;
        while(a!=1){
            ll sl=0,p = minPrime[a];
            while(a%p==0){
                a/=p;sl++;
            }
            prime[p] = max(prime[p],sl);
        }
    }
    for(auto [i,sl]:prime){
        if(sl){
            ans = ((ans%MOD)*(binpow(i,sl+(sl&1?1:0))%MOD))%MOD;
        }
    }
    cout<<ans;
}   