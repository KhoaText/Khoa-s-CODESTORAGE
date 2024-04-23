#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a;
typedef long long ll;
typedef long double ld;
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll a;cin>>a;
    if (a<=1) {
        print("NO")
        return 0;
    }
    for(ll i=2;i<=1ll*sqrt(a+0.5);i++){
        if (a%i==0){
            print("NO")
            return 0;
        }
    }
    print("YES")
        
}