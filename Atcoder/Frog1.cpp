#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll n,a[100001],f[100001];
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>a[i];
    a[0]=a[1];
    for(ll i=2;i<=n;i++){
        f[i]=min(f[i-1]+abs(a[i]-a[i-1]),f[i-2]+abs(a[i]-a[i-2]));
    }
    print(f[n])
}