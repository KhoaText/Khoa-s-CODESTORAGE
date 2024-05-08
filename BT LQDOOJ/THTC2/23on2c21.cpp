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

const ll maxn = 1e5+50;
ll n,m,x[maxn],y[maxn],f[maxn],s[maxn];
pair<ll,ll>t[maxn];

int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(ll i=1;i<=n;i++) cin>>t[i].fi>>t[i].se;
    sort(t+1,t+1+n);
    for(ll i=1;i<=n;i++){
        f[i]=t[i].fi;
        s[i]=t[i].se+s[i-1];
    }
    for(ll i=1;i<=m;i++) cin>>x[i];
    for(ll i=1;i<=m;i++) cin>>y[i];
    for(ll i=1;i<=m;i++){
        print(s[upper_bound(f,f+1+n,x[i])-f-1]+s[upper_bound(f,f+1+n,y[i])-f-1])
    }
}