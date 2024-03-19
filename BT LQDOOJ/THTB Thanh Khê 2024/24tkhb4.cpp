#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
int main(){
    #ifndef KHOAPC
    freopen("GANMM.INP", "r", stdin);
    freopen("GANMM.OUT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n,cnt=0;cin>>n;
    while(n--){
        ll a;cin>>a;
        if (a%2==0||a%5==0) cnt++;
    }
    print(cnt)
}