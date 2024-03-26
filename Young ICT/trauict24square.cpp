#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;

ll d[500001];
ll n,ans;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    d[0]=1;
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>d[i];
        d[i]*=d[i-1];
    }
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<i;j++){
            ll p =d[i]/d[j];
            // print(p)
            ll can=sqrt(p+0.5);
            if(can*can==p) ans++;
        }
    }
    print(ans)
}