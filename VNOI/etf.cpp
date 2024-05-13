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


ll q,n;
ll binpow(ll a,ll b){
    ll res = 1;
    while(b>0){
        if(b&1)res*=a;
        a*=a;
        b/=2;
    }
    return res;
}
ll phi(ll k){
    ll res = 1;
    for(ll i=2;i*i<=k;i++){
        ll cnt = 0;
        while(k%i==0){cnt++;k/=i;}
        if(cnt) res *= (i-1)*binpow(i,cnt-1);
    }
    if(k!=1) res*=k-1;
    return res;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>q;
    while(q--){
        cin>>n;
        print(phi(n))
    }
}