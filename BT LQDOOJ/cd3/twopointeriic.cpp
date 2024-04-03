#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,x,ans,d[100001];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>x;
    for(ll i =1;i<=n;i++){
        ll a;cin>>a;
        d[i] = a+d[i-1];
    }
    for(ll i = 1;i<=n;i++){
        if(d[i]>x) continue;
        ll *fn = lower_bound(d+1,d+n+1,x,[i](const ll &a,const ll &b)->bool{
            return a-d[i-1]<=b;
        });
        //len=fn-d-i;
        ans = max(ans,fn-d-i);
    }
    print(ans)
}