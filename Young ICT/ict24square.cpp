#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;

ll d[500001];
vector<pair<ll,ll>> dp[500001];

vector<pair<ll,ll>> factorprocess(ll n){
    vector<pair<ll,ll>> a;
    if (n==1){
        a.pb(make_pair(1,1));
        return a;
    }
    for(ll i=2;i<=sqrt(n+0.5);i++){
        ll cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt>0) a.pb(make_pair(i,cnt));
    }
    if (n!=1) a.pb(make_pair(n,1));
    return a;
}
vector<pair<ll,ll>> merge(vector<pair<ll,ll>> a,vector<pair<ll,ll>> b){
    vector<pair<ll,ll>> c;
    for(auto x:a) c.pb(x);
    for(auto x:b) c.pb(x);
    sort(c.begin(),c.end());
    for(ll i=0;i<c.size()-1;i++){
        if (c[i].fi == c[i+1].fi){
            c[i].se += c[i+1].se;
            c.erase(c.begin()+1+i);
            i--;
        }
    }
    if(c[0].fi == 1) c.erase(c.begin());
    return c;
}
bool check(vector<pair<ll,ll>> a,vector<pair<ll,ll>> b){
    // cnt++;
    if (a.size() == 0){
        return 1;
    }
    map<ll,ll> fact;
    for(auto x:b) fact[x.fi] = x.se;
    for(auto x:a){
        if((x.se-fact[x.fi])%2){
            return 0;
        }
    }
    return 1;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    dp[0].pb(make_pair(1,1));
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    if(n>1000){
        ll ans = 0;
        d[0]=1;
        for(ll i=1;i<=n;i++){
            cin>>d[i];
            d[i]*=d[i-1];
        }
        for(ll i=1;i<=n;i++){
            for(ll j=0;j<i;j++){
                ll p =d[i]/d[j];
                // print(p)
                ll can=sqrt(p+0.5);
                if(can*can==p) ans++;
            }
        }
        print(ans)
        return 0;
    }
    for(ll i=1;i<=n;i++){
        cin>>d[i];
        dp[i]=merge(factorprocess(d[i]),dp[i-1]);
    }
    ll ans = 0;
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<i;j++){
            if(check(dp[i],dp[j])){
                ans++;
            }
        }
    }
    print(ans);
}