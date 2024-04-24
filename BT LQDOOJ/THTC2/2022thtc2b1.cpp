#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ld a;
int main(){
    freopen("THAPPHAN.INP", "r", stdin);
    freopen("THAPPHAN.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>a;
    ld s = 0.5+(ll)a;
    if(a<=s) cout<<(ll)(s-0.5);
    else cout<<(ll)(s+0.5);
}