#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;

pair<ll,ll> d[100001];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    for(ll i=1;i<=n;i++){
        ll a;cin>>a;
        d[i] = make_pair(a,i);
    }
    sort(d+1,d+n+1);
    ll smlest = d[1].fi;
    print(smlest)
    ll i=1;
    while(d[i].fi==smlest&&i<=n){
        cout<<d[i].se<<" ";
        i++;
    }
}