#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
const ll maxn = 5001;
ll n,m,q;
vector<ll> adj[maxn];
bool used[maxn];

bool dfs(ll u, ll end, ll step){
    if(u == end){
        if(step & 1) return 0;
        return 1;
    }
    used[u] = 1;
    for(ll v: adj[u]){
        if(!used[v]){
            if(dfs(v,end,step-1)) return 1;
        }
    }
    return 0;
}

void inp(){
    cin>>n>>m>>q;
    for(ll i = 1;i <= m;i++){
        ll u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
}
void process(){
    while(q--){
        memset(used,0,sizeof(used));
        ll u,v,d;cin>>u>>v>>d;
        print(dfs(u,v,d)?1:0)
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    inp();
    process();
}
