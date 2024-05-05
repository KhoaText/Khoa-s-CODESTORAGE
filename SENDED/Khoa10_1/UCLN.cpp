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

ll ucln(ll a,ll b){
    return (a%b==0?b:ucln(b,a%b));
}
ll a,b;
int main(){
    freopen("UCLN.INP", "r", stdin);
    freopen("UCLN.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>a>>b;
    print(ucln(a,b))
}