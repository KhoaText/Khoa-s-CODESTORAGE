#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll a[26];
int main(){
    freopen("MATDO.INP", "r", stdin);
    freopen("MATDO.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll result=1;
    string s;cin>>s;
    for (ll i=0;i<s.length();i++){
        a[s[i]-'a']++;
        result = max(result,a[s[i]-'a']*2-1);
    }
    print(result)
}