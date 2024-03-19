#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
int main(){
    // freopen(".INP", "r", stdin);
    // freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n,ans=0;cin>>n;n--;
    ll a,b;cin>>a;
    while(n--){
        cin>>b;
        ans = max(ans,a+b);
        a=b;
    }
    print(ans)
}