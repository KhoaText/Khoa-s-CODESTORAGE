#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,ans,ans_l,ans_r,d[30002],a[30002],b[30002];
stack<ll> sta,stb;
void clear_st(){
    while(!sta.empty())sta.pop();
    while(!stb.empty())stb.pop();
}
void build_a(){
    for(ll i=1;i<=n;i++){
        while(d[sta.top()]>=d[i]) sta.pop();
        a[i] = sta.top();
        sta.push(i);
    }
}
void build_b(){
    for(ll i=n;i>=1;i--){
        while(d[stb.top()]>=d[i]) stb.pop();
        b[i] = stb.top();
        stb.push(i);
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll q;cin>>q;
    while(q--){
        ans = 0;
        ans_l = 0;
        ans_r = 0;
        memset(d,0,sizeof(d));
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        clear_st();
        cin>>n;
        for(ll i =1;i<=n;i++) cin>>d[i];
        sta.push(0);stb.push(n+1);
        build_a();
        build_b();
        for(ll i=1;i<=n;i++){
            ll t = d[i]*(b[i]-a[i]-1);
            if(t>ans){
                ans = t;
                ans_l = a[i]+1;
                ans_r = b[i]-1;
            }
            else if(t == ans){
                if(a[i]+1<ans_l){
                    ans_l = a[i]+1;
                    ans_r = b[i]-1;
                }
            }
        }
        cout<<ans<<" "<<ans_l<<" "<<ans_r<<"\n";
    }
}