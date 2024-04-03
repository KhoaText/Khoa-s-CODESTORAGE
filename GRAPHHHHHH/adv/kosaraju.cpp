#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,e,scc;
vector<ll> g[1001],revg[1001];
stack<ll> st;
bool used[1001];
void inp(){
    cin>>n>>e;
    for(ll i = 1;i<=e;i++){
        ll u,v; cin>>u>>v;
        g[u].pb(v);
        revg[v].pb(u);
    }
}
void dfs1(ll u){
    used[u] = 1;
    for(ll v: g[u]){
        if(!used[v]){
            dfs1(v);
        }
    }
    st.push(u);
}
void dfs2(ll u){
    used[u] = 1;
    cout<<u<<" ";
    for(ll v: revg[u]){
        if(!used[v]){
            dfs2(v);
        }
    }
}
void kosaraju(){
    for(ll i = 1;i<=n;i++){
        if (!used[i]){
            dfs1(i);
        }
    }
    memset(used,0,sizeof(used));
    while(!st.empty()){
        ll u = st.top();st.pop();
        if(!used[u]){
            scc++;
            cout<<"Thanh phan lien thong manh "<<scc<<" la :\n";
            dfs2(u);
            cout<<"\n";
        }
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    inp();
    kosaraju();
}