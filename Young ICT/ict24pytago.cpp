#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;

ll seq[1001];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    for(ll i=1;i<=n;i++){
        ll s;cin>>s;
        seq[s]++;
    }
    ll ans = 0;
    for(ll i = 1;i<=998;i++){
        ll j = i+1;
        ll p = i*i+j*j;
        ll can = sqrt(p+0.5);
        while(p<=1000000ll){
            if(can*can == p){
                ans +=seq[i]*seq[j]*seq[can];
            }
            j++;
            p = i*i+j*j;
            can = sqrt(p+0.5);
        }
    }
    print(ans)
}