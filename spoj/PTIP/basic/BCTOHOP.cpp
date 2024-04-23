#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll n,k;
ll d[100];
void sinhtohop(ll a){
    if (a==k){
        for(ll i=1;i<=k;i++){
            cout<<d[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(ll i=d[a]+1;i<=n;i++){
        d[a+1] = i;
        sinhtohop(a+1);
    }
}
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    sinhtohop(0);
}