#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<" ";
typedef long long ll;
typedef long double ld;

ll dp[(ll)5e5+1];
vector<vector<ll>> d;
ll n,k;
bool ss(vector<ll> a, vector<ll> b){
    return a[0]<b[0];
}
ll min(ll a,ll b){
    if (a>b) return b;
    return a;
}
void laydoan(){
    for(ll i=0;i<k;i++){
        ll a,b;cin>>a>>b;
        vector<ll> t={a,b};
        d.pb(t);
    }
    sort(d.begin(),d.end(),ss);
    for(ll i=0;i<d.size()-1;i++){
        vector<ll> a=d[i];
        vector<ll> b=d[i+1];
        if(a[1]<b[0]) continue;
        d[i][1]=max(a[1],b[1]);
        d.erase(d.begin()+1+i);
        i--;
    }
}
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    dp[1]=1;
    cin>>n>>k;
    laydoan();
    for(ll i=1;i<n;i++){
        if(dp[i]==0) continue;
        for(vector<ll> t: d){
            ll a=t[0],b=t[1];
            // cout<<a<<' '<<b<<"\n";
            if (i+a<=n){
                for(ll j=a;j<=min(b,n-i);j++){
                    dp[i+j]+=dp[i];
                    dp[i+j]%=MOD;
                }
            }
        }
        // print(dp[i])
    }
    // for(ll i=1;i<=n;i++){
    //     print(dp[i])
    // }
    print(dp[n]%MOD)
}
