#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll gcd(ll a,ll b){
    if (a<b) swap(a,b);
    if (a%b==0) return 1ll*b;
    if (b) return gcd(a%b,b);
    return a;
}
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll a,b;cin>>a>>b;
    while(a!=0||b!=0){
        ll g = gcd(a,b);
        cout<<g<<" "<<a*b/g<<'\n';
        cin>>a>>b;
    }
}