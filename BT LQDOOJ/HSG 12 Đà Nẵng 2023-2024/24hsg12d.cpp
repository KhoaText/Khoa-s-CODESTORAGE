#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
struct guard{
    ll end,start,cost;
};
bool comp(guard l1,guard l2){
    return l1.start <= l2.start && l1.end < l2.end;
}
ll dp[100001];
int main(){
    #ifdef ONLINE_JUDGE
    freopen("HBAOXUAN.INP", "r", stdin);
    freopen("HBAOXUAN.OUT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);
    //////
    ll n,m;cin>>n>>m;
    vector<guard> d{1,{0,0,0}};
    for(ll i=1;i<=m;i++){
        guard lcl;
        cin>>lcl.start>>lcl.end>>lcl.cost;
        d.pb(lcl);
    }
    sort(d.begin(),d.end(),comp);
    // for(guard a: d){
    //     cout<<a.start<< " " <<a.end<< " " << a.cost << "\n";
    // }
    //////////
    ll ans = 1000000000000000;
    for(ll i=1;i<=m;i++){
        if (d[i].start == 0){ 
            dp[i]=d[i].cost;
            continue;
        }
        ll mn =  1000000000000000;
        bool check = 0;
        for(ll j=1;j<i;j++){
            if (d[j].start <= d[i].start && d[i].start <=d[j].end && d[j].end < d[i].end&&dp[j]!=0){
                mn = min(mn,dp[j]);
                check =1;
            }
        }
        dp[i] = (check?mn+d[i].cost:0);
        // cout<<i<<" :"<<dp[i]<<"\n";
        if (d[i].end == n){
            ans = min(ans,dp[i]);
        }
    }
    print(ans)
}