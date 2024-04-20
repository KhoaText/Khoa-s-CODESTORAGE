#include <iostream>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll d[1000001];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(ll i=1;i<=1000000;i++){
        for(ll j=i;j<=1000000;j+=i) d[j]++;
        d[i] += d[i-1];
    }
    ll q;cin>>q;
    while(q--){
        ll a,b;cin>>a>>b;
        print(d[b]-d[a-1])
    }
}