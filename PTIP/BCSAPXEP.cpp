#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll a[1001];
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    for(ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    for(ll i=1;i<=n;i++) print(a[i])
}