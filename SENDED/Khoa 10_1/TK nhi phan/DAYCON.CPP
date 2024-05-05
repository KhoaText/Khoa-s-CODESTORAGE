#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll a[1000001];
int main(){
    freopen("DAYCON.INP", "r", stdin);
    freopen("DAYCON.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n,m;cin>>n>>m;
    ll s=0;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        if (a[i]<=m) s++;
        a[i]+=a[i-1];
        ll cnt=1;
        while(cnt++!=i && a[i]-a[cnt]<=m){
            s++;
        }
    }
    print(s)
}