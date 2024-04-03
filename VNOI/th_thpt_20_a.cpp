#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;


int main(){
    freopen("CAU1.INP", "r", stdin);
    freopen("CAU1.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll x,y;cin>>x>>y;
    ll n = gcd(x,y);
    ll ans = 1;
    for(ll i=2;i*i<=n;i++){
        ll cnt = 0;
        while(!(n%i)){
            cnt++;n/=i;
        }
        if(cnt) ans*=(cnt+1);
    }
    if(n!=1){
        ans*=2;
    }
    print(ans)
}