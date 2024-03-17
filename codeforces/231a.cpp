#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n,s=0;cin>>n;
    while(n--){
        ll a[2]={0,0};
        for(ll i=0;i<3;i++){
            ll b;cin>>b;
            a[b]++;
        }
        if (a[1]>=2) s++;
    }
    print(s)
}
