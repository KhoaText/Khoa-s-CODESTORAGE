#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

string s;
ll ans=-100000;
int main(){
    // freopen("CHOOSSTR.INP", "r", stdin);
    // freopen("CHOOSSTR.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>s;
    for(ll i=0;i<(ll)s.length()-2;i++){
        if((0<=(s[i]-'0')&&(s[i]-'0')<=9)
        && (0<=(s[i+1]-'0')&&(s[i+1]-'0')<=9)
        && (0<=(s[i+2]-'0')&&(s[i+2]-'0')<=9)
        ){
            ans = max(ans,stoll(s.substr(i,3)));
        }

    }
    print(ans)
}