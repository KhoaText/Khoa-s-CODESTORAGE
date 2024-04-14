#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

const ll maxn = 100001;

struct edge{
    ll v,w;
    bool operator<(const edge& other) const {
        return w > other.w;
    }
};


ll n,m,start,k;
ll ans = 0,score = 0;
vector<edge> adj[maxn];
ll sc[maxn];
bool earned[maxn];
bool used[maxn];


void inp(){
    cin>>n>>m>>start>>k;
    for(ll i = 1;i<=n;i++) cin>>sc[i];
    for(ll i = 1;i<=m;i++){
        ll u,v,w;cin>>u>>v>>w;
        adj[u].pb({v,w});
        adj[v].pb({u,w});
    }
}

void bfs(ll u){
    priority_queue<edge, vector<edge>> qu;
    earned[u] = 1;
    score += sc[u];
    for(edge x: adj[u]){
        qu.push(x);
    }
    while(!qu.empty()&&qu.top().w<=score){
        edge t = qu.top();qu.pop();
        used[t.v] = 1;
        if(!earned[t.v]){
            score += sc[t.v];
            earned[t.v] = 1;
        }
        for(edge x: adj[t.v]){
            if(!used[x.v])qu.push(x);
        }
    }
}
void process(){
    bfs(start);
    for(ll i = 1;i<=n;i++){
        if(earned[i]) ans++;
    }
}
int main(){
    // freopen("ROBOT.INP", "r", stdin);
    // freopen("ROBOT.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    inp();
    process();
    print(ans)
}