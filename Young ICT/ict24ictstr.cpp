#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;

int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    string s; cin>>s;
    ll ans = 0,cnt=0;
    for(ll i=0;i<n;i++){
        char curr = s[i];
        if (curr == 'i' ||curr == 'c'||curr == 't' ){
            cnt ++;
            ans = max(ans,cnt);
        }
        else{
            cnt = 0;
        }
    }
    print(ans)
}