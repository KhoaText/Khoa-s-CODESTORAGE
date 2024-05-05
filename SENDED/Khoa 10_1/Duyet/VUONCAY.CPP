#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<" ";
typedef long long ll;
typedef long double ld;
ll a[101][101];
int main(){
    freopen("VUONCAY.INP", "r", stdin);
    freopen("VUONCAY.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll m,n;cin>>m>>n;
    ll s=((n+1)*m)+(n*(m+1));
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=n;j++){
            ll st;cin>>st;
            ll cnt=0;
            if(a[i][j-1]==st) cnt++;
            if(a[i-1][j]==st) cnt++;
            a[i][j]=st;
            s-=cnt;
        }
    }
    print(s)
}
