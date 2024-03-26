#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;

ll a[501][501];
int main(){
    freopen("chiadat.inp", "r", stdin);
    freopen("chiadat.out", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            ll st;cin>>st;
            a[i][j] += a[i][j-1]+a[i-1][j]-a[i-1][j-1];
            if(st) a[i][j]++;
        }
    }
    ll ans = a[n][n];
    // for(ll i=1;i<=n;i++){
    //     for(ll j=1;j<=n;j++){
    //         cout<<a[i][j]<<" ";
    //     }cout<<"\n";
    // }
    for(ll i=1;i<n;i++){
        for(ll j=1;j<n;j++){
            ll manh1=a[i][j];
            ll manh2=a[i][n]-manh1;
            ll manh3=a[n][j]-manh1;
            ll manh4=a[n][n]-a[n][j]-a[i][n]+a[i][j];
            // cout<<manh1<<" "<<manh2<<" "<<manh3<<" "<<manh4<<"\n";
            ans=min(ans,max(manh1,max(manh2,max(manh3,manh4)))-min(manh1,min(manh2,min(manh3,manh4))));
        }
    }
    print(ans)
}