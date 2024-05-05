#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<" ";
typedef long long ll;
typedef long double ld;
ll max_s(ll r){
    return (ll)4*(ll)sqrt(r*r-(r-1)*(r-1))*(r-1);
}
int main(){
    freopen("DIENTICH.INP", "r", stdin);
    freopen("DIENTICH.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll r;cin>>r;
    print(max_s(r))
}