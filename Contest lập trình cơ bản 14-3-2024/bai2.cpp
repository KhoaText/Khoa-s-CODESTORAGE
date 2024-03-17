#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<" ";
typedef long long ll;
typedef long double ld;
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    ll mx=0;
    if(n<10){
        print(n) return 0;
    }
    while(n!=0){
        mx=max(mx,n%10);
        n/=10;
    }
    print(mx)
}