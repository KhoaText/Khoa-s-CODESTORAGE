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
const ll maxn = 1e6+10;
ll n,k,ans,d[maxn];
int main(){
    freopen("CHIAK.INP", "r", stdin);
    freopen("CHIAK.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    cin>>d[1];
    d[1]%=k;
    for(ll i=2;i<=n;i++){
        cin>>d[i];
        d[i]%=k;d[i]+=d[i-1];
        for(ll j=0;j<i;j++){
            if((d[i]-d[j])%k==0) ans++;
        }
    }
    print(ans)
}