#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll d[500001];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    for(ll i =1;i<=n;i++){
        ll a;cin>>a;d[i] = a+d[i-1];
    }
    ll q;cin>>q;
    while(q--){
        ll l,r;cin>>r>>l;l--;r--;
        cout<<setprecision(6)<<fixed<<(ld)(d[r]-d[l])/(r-l)<<"\n";
    }
}