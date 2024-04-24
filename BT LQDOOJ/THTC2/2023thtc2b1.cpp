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
string a;
string ans;
int main(){
    freopen("MATKHAU.INP", "r", stdin);
    freopen("MATKHAU.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    getline(cin,a);
    ans = to_string(a.length());
    ll n = 0;
    for(char x:a){
        n += (0<=x-'0'&&x-'0'<=9&&(x-'0')%2==0?x-'0':0);
    }
    ans = to_string(n)+ans;
    print(ans)
}