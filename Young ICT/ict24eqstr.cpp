#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
string a,b;
map<string,ll> d;
ll ans =0;
void back_a(ll i,string prv){
    if (i == a.length()-1) return;
    for(ll x=i;x<a.length();x++){
        string c = prv + a.substr(x,1);
        print(c);
        d[c]++;
        back_a(x,c);
    }
}
void back_b(ll i,string prv){
    if (i == b.length()-1) return;
    for(ll x=i;x<b.length();x++){
        string c = prv + b.substr(x,1);
        ans += d[c];
        back_b(i+1,c);
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>a>>b;
    if(a.length()<b.length()) swap(a,b);
    back_a(0,"");
    print(ans)
}