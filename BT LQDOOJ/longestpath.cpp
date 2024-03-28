#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

vector<ll> edge[100001];
bool visited[100001];
ll n,m,ans;
void dfs(ll u,ll path){
    visited[u]=1;
    for(ll v:edge[u]){
        if (!visited[v]){
            dfs(v,path+1);
            ans = max(ans,path+1);
        }
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(ll i=1;i<=m;i++){
        ll u,v;cin>>u>>v;
        edge[u].pb(v);
    }
    for(ll i = 1;i<=n;i++){
        memset(visited,0,sizeof(visited));
        dfs(i,0);
    }
    print(ans)
}