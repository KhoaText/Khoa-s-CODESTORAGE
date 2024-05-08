#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll a,b,k,ans=1;
ll f(ll t,ll p){
    ll res=0;
    while(t%p==0) {res++;t/=p;}
    return res;
}
ll mu(ll t,ll p){
    ll res = 1;
    while(p>0){
        if(p&1) res *=t;
        t*=t;p/=2;
    }
    return res;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>a>>b>>k;
    ll uoc_2 = f(a,2)+f(b,2);
    ll uoc_5 = f(a,5)+f(b,5);
    if(uoc_2<k) ans *= mu(2,k-uoc_2);
    if(uoc_5<k) ans *= mu(5,k-uoc_5);
    print(ans)
}