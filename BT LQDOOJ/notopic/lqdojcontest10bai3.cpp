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
const ll maxn =1e6+100;
ll d[maxn],n,ans;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    cin>>d[1];
    for(ll i=2;i<=n;i++){
        cin>>d[i];
        if(d[i-1]>d[i]){
            ans+=d[i-1]-d[i];
            d[i] = d[i-1];
        }
    }
    print(ans)
}