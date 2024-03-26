#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;

vector<pair<ll,ll>> factorprocess(ll n){
    vector<pair<ll,ll>> a;
    for(ll i=2;i<=sqrt(n+0.5);i++){
        ll cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt>0) a.pb(make_pair(i,cnt));
    }
    if (n!=1) a.pb(make_pair(n,1));
    return a;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n,m;cin>>n>>m;
    ll ans = (ll)1e18;
    vector<pair<ll,ll>> fac =factorprocess(m);
    for(auto x: fac){
        // print(x.fi)
        // print(x.se)
        ll a = x.fi,b=0;
        while(a<=n){
            b+=n/a;
            a*=x.fi;
        }
        ans=min(b/x.se,ans);
    }
    print((ans==0?-1:ans))
}
