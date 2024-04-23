#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll n,a[100];
string ans;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i =1;i<=n;i++){
        ll t;cin>>t;a[t]++;
    }
    for(ll i = 9;i>=1;i--){
        while(a[i]--) ans += to_string(i);
        for(ll j=9;j>=0;j--){
            while(a[i*10+j]--) ans += to_string(i*10+j);
        }
    }
    while(a[0]--) ans += to_string(0);
    print(ans)
}