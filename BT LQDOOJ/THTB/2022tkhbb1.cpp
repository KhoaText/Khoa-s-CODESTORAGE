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

ll n,ans_x;
ll dientich(ll x){
    ll y=n-x;
    return x/2*y/2;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    if(n&1) {print(-1);return 0;}
    n/=2;
    ll l=1,h=n-1;
    while(l<=h){
        ll t1 = l+(h-l)/3;
        ll t2 = h-(h-l)/3;
        ll s1 = dientich(t1),s2 = dientich(t2);
        if(s1<s2){
            l = t1+1;
            ans_x = t2;
        }else{
            h = t2-1;
            ans_x = t1;
        }
    }
    cout<<ans_x<<' '<<n-ans_x;
}