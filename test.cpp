#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
const ll mxn = 1e6;
ll ans;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(ll i=1;i<=mxn;i++){
        ans += mxn/i;
    }
    print(ans)
}