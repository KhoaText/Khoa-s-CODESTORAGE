#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll a[4];
ll ans= 10000, mx=10000;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>a[1]>>a[2]>>a[3];
    ll bcbn = lcm(a[1],lcm(a[2],a[3]));
    sort(a+1,a+4);
    for(ll i = 1;i<=3;i++){
        for(ll j=i+1;j<=3;j++){
            ll t = a[i]*(bcbn/a[j]);
            if(t<=mx){
                ans = a[i]/gcd(a[i],a[j])+a[j]/gcd(a[i],a[j]);
                mx = t; 
            }
        }
    }
    print(ans)
}