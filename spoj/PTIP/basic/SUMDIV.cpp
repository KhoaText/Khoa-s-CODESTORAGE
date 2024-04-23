#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
void sumdiv(){
    ll a;cin>>a;
    ll sum=0,can = sqrt(a+0.5);
    for(ll i=1;i<=can;i++){
        if(a%i==0){
            sum+=i;
            if(i*i!=a) sum+=a/i;
        }
    }
    print(sum)
}
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    while(n--) sumdiv();
}