#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,m,lienthong;
vector<ll> canhke[100001];
bool used[100001];
void dfs(ll u){
    used[u] = 1;
    for(ll v : canhke[u]){
        if(!used[v]) dfs(v);
    }
}
void inp(){
    cin>>n>>m;
    for(ll i = 1;i<=m;i++){
        ll u,v;cin>>u>>v;
        canhke[u].pb(v);
        canhke[v].pb(u);
    }
}
void process(){
    for(ll i =1;i<=n;i++){
        if(!used[i]){
            lienthong++;
            dfs(i);
        }
    }
    print(lienthong)
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    inp();
    process();
}   