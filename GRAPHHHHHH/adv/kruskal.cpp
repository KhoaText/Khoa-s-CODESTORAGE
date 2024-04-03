#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
struct edge{
    ll u,v,w;
};
ll n,m;
ll sz[10001],par[10001];
vector<edge> ds;
void build(){
    for(ll i = 1;i<=n;i++){
        par[i]=i;
        sz[i]=1;
    }
}
ll find(ll v){
    return (v==par[v]?v:par[v]=find(par[v]));
}
bool Union(ll u,ll v){
    u = find(u);
    v = find(v);
    if(u == v) return 0;
    if(sz[u] < sz[v]){swap(u,v);}
    par[v] = u;
    sz[u] += sz[v];
    return 1;
}
bool cmp(edge &a,edge &b){
    return a.w<b.w;
}
void kruskal(){
    vector<edge> MST;
    ll d = 0;
    sort(ds.begin(),ds.end(),cmp);
    for(ll i = 0;i<m;i++){
        if(MST.size()==n-1) break;
        edge e = ds[i];
        if(Union(e.u,e.v)){
            MST.pb(e);
            d+= e.w;
        }
    }
    print(d)
}
void inp(){
    cin>>n>>m;
    for(ll i = 1;i<=m;i++){
        ll u,v,w;cin>>u>>v>>w;
        ds.pb({u,v,w});
    }
    build();

}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    inp();
    kruskal();
}