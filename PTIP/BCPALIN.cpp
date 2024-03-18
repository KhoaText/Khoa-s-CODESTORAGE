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
    ll n;cin>>n;
    while(n--){
        char s[100];cin>>s;
        string ans = "YES";
        ll l = 0,r = strlen(s)-1;
        while(l<=r){
            if(s[l++]!=s[r--]){
                ans = "NO";
            }
        }
        print(ans)
    }
}