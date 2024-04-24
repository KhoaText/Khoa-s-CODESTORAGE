#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,ans;
ll nhan(ll a,ll b){
    ll res = 0;
    a%=MOD;
    b%=MOD;
    while(b>0){
        if(b&1){
            res += a;
            res %= MOD;
        }
        a+=a;a%=MOD;
        b/=2ll;
    }
    return res;
}
ll binpow(ll a,ll b){
    ll res =1;
    while(b>0){
        if(b&1){
            res = res*a%MOD;
        }
        a = a*a%MOD;
        b/=2ll; 
    }
    return res;
}
ll tonginrange(ll l,ll r){
    return ((nhan(r-l+1,r+l)%MOD)*(binpow(2,MOD-2)%MOD))%MOD;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    ll k=1;
    while(k<=n){
        ll sl = n/k;
        ll last = n/sl;
        ans += nhan(tonginrange(k,last),sl);
        ans%=MOD;
        k = last+1;
    }
    print(ans)
}