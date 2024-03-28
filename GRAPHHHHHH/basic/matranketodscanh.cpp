#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll n;
ll ds[1001][1001];

int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            cin>>ds[i][j];
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if(ds[i][j]&& i<j){
                cout<<i<<" "<<j<<"\n";
            }
        }
    }
}