#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll n,q,a[100001];
string s;
void process(){
    ll b;cin>>b;
    if (s == "FIND"){
        print(a[b])
        return;
    }
    for(ll i=1;i<=n;i++){
        a[i]^=b;
    }
    sort(a+1,a+n+1,[](ll a,ll b)->bool{
        return a>b;
    });
}
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    for(ll i=1;i<=n;i++){ cin>>a[i];}
    sort(a+1,a+n+1,[](ll a,ll b)->bool{
        return a>b;
    });
    while(q--){
        cin>>s;
        process();
    }
}