#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,ans;
ll binpow(ll a,ll b){
    ll res = 1;
    while(b>0){
        if(b&1) res *=a;
        a*=a;
        b>>=1;
    }
    return res;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    ll tmp = 5;
    while(tmp <=n){
        ll sl = n/tmp;
        ans += sl*(sl+1)/2;
        tmp*=5;
    }
    print(ans)
}