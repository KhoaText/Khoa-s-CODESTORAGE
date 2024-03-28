#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

vector<ll> ds[1001];
bool visited[1001];
ll n,m;
void bfs(ll u){
    queue<ll> qe;
    qe.push(u);visited[u]=1;
    while(!qe.empty()){
        ll v = qe.front();
        qe.pop();cout<<v<<" ";
        for(ll x: ds[v]){
            if(!visited[x]){
                qe.push(x);
                visited[x]=1;
            }
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
        ds[u].pb(v);
        ds[v].pb(u);// xoa dong nay for do thi co huong
    }
    bfs(1);
}