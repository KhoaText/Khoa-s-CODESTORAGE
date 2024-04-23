#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll binpow(ll a,ll b,ll m){
    ll res = 1;
    while(b>0){
        if(b&1){
            res *= a;
            res %= m;
        }
        a *= a;a%=m;
        b/=2ll;
    }
    return res;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll q;cin>>q;
    while(q--){
        ll a,b;cin>>a>>b;
        print(binpow(a,b,10))
    }
}