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
        string s;cin>>s;
        if(s.length()>10){
            s = s[0]+to_string(s.length()-2)+s[s.length()-1];
        }
        print(s)
    }
}