#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
const int maxn = 100001;
vector<int> size_node[maxn];
vector<int> adj[maxn];
set<int> t;
int n,m,k,ans;
/*DSU
int par[maxn];
int sz[maxn];
void build(){
    for(ll i=1;i<=n;i++){
        par[i] = i;
        sz[i] = 1;
    }
}
void find(ll u){
    return (u == par[u]?u:par[u] = find(par[u]));
}
bool Union(ll a,ll b){
    ll u = find(a);
    ll v = find(b);
    if(u == v) return 0;
    if(sz[u]<sz[v]) swap(u,v);
    par[v] = u;
    sz[u]+=sz[v];
    return 1;
}
*/ 
void inp(){
    for(ll i = 1;i <= m;i++){
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(v);
    }
}
bool check(int u, int v){
    if(u==v) return 0;
    unordered_map<int,bool> Map;
    for(int x: adj[u]) Map[x]=1;
    if(Map[v]) return 0;
    for(int x: adj[v]) if(Map[x]) return 0;
    return 1;
}
int min(int a,int b){
    if(a<b)return a;
    return b;
}
int max(int a,int b){
    if(a>b)return a;
    return b;
}
void process(){
    if(k == 1){
        for(ll i = 1;i<=n;i++){
            ans = max(ans,adj[i].size()+1);
        }
        return;
    }
    for(ll i = 1;i<=n;i++){
        size_node[adj[i].size()].pb(i);
        t.insert(adj[i].size());
    }
    for(int x: t){ // x: canh truc tiep.//chon ra <=k dinh sao cho khoong chung canh.
        int tmp = 0;
        vector<int> dinh = size_node[x];
        if(dinh.size()==k){
            unordered_map<int,bool> touched;
            for(int u: dinh){
                if(!touched[u]){
                    touched[u] = 1;
                    tmp++;
                }
                for(int v: adj[u]){
                    if(!touched[v]){
                        touched[v]=1;
                        tmp++;
                    }
                }
            }
        }else{
            tmp = min(dinh.size(),k) * (x+1);
        }
        ans = max(ans,tmp);
    }
}
int main(){
    // freopen("DUONGONG.INP", "r", stdin);
    // freopen("DUONGONG.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m>>k;
    inp();
    process();
    print(ans)
}