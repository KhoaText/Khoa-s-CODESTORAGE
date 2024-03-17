#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll a,b;cin>>a>>b;
    if(a+b>=15&&b>=8){
        print(1)
    }else if(a+b>=10&&b>=3){
        print(2)
    }else if(a+b>=3){
        print(3)
    }else{
        print(4)
    }
}