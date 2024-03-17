#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll mex(set<ll> a){
    ll s=0;
    while(a.size()&&s==(*a.begin())){
        s++;
        a.erase(a.begin());
    }
    return s;
}
ll max(ll a,ll b){
    if (a>b)return a;
    return b;
}
ll n,m,result;
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    vector<set<ll>> save(1500000,set<ll>{});
    for(ll i=1;i<=n;i++){
        ll a;cin>>a;
        for(ll j=i-1;j>=max(0,i-m);j--)
            save[j].insert(a);
    }
    result=mex(save[0]);
    for(ll i=1;i<(n+1)-m;i++){
        result=min(result,mex(save[i]));
    }
    print(result)
}