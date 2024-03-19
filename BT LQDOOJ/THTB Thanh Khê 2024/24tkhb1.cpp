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
    string s;cin>>s;
    ll cnt = 0;
    for(char a: s){
        int b=a-'0';
        if(0<=b&&b<=9) cnt++;
    }
    print(cnt)
}