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

ll n,a,b,ans=1e18;
bool finded = 0;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>a>>b;
    ll uc = gcd(a,b);
    if(n%uc!=0){print(-1);return 0;}
    if(a<b) swap(a,b);
    if(n%a==0){print(n/a);return 0;}
    ll t = 0;
    while((n-t)%a!=0){
        t+=b;
    }
    print(t/b+(n-t)/a)
}