#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<" ";
typedef long long ll;
typedef long double ld;
ll a[251][251];
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n,m;cin>>n>>m;
    ll cnt=0;
    for(ll i=1;i<=n;i++){
        string st;cin>>st;st = " "+st;
        for(ll j=1;j<=m;j++){
            if(st[j] == '.'){
                a[i][j]=0;continue;
            }
            ll b=(a[i-1][j-1]==a[i-1][j])&&!(a[i][j-1]);
            if(b){
                cnt++;
                a[i][j]=cnt;continue;
            }
            a[i][j]=max(a[i-1][j],a[i][j-1]);
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            print(a[i][j])
        }
        cout<<"\n";
    }
    print(cnt)
}
