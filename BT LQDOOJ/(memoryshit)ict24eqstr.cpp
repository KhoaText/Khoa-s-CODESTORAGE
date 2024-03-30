#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
unordered_map<string,ll> mp;
string a,b;
ll ans;
void dequy1(string t, ll idx){
    mp[(t!=""?t:".")]++;
    for(ll i=idx;i<0ll+a.length();i++){
        dequy1(t+a.substr(i,1),i+1);
    }
}
void dequy2(string t, ll idx){
    ans += mp[t];
    for(ll i=idx;i<b.length();i++){
        dequy2(t+b.substr(i,1),i+1);
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>a>>b;
    if (a.length()<b.length()) swap(a,b);
    dequy1("",0);// for a
    dequy2("",0);// for b
    print(ans-mp[""])
}