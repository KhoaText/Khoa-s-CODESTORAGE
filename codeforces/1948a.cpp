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
    ll q;cin>>q;
    while(q--){
        ll n; cin>>n;
        if(n<=1){
            print("NO")
            continue;
        }
        print("YES")
        for(ll i=1;i<=n;i++){
            cout<<"AAB";
        }
        print("")
    }
}