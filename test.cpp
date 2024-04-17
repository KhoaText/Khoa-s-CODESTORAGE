#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;

ll dequy(ll a){
    print(a)
    return (a!=1?a+dequy(a-1):1);
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    print(dequy(MOD));
}