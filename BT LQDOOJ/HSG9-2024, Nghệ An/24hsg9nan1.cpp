#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;


int main(){
    #ifdef ONLINE_JUDGE
    freopen("B1.INP", "r", stdin);
    freopen("B1.OUT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll a,ans=1;cin>>a;
    vector<pair<ll ,ll>> fac;
    for(ll i=2;i<=sqrt(a+0.5);i++){
        ll cnt = 0; 
        while(a%i==0){
            cnt++;
            a/=i;
        }
        if(cnt && cnt%2) ans *= i;
    }
    if(a!=1) ans *= a;
    print(ans)
}