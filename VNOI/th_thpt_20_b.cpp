#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,ans=1,d[1000001];
int main(){
    freopen("CAU2.INP", "r", stdin);
    freopen("CAU2.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i =1;i<=n;i++)cin>>d[i];
    sort(d+1,d+n+1);
    ll prv = d[1],cnt=1;
    for(ll i=2;i<=n;i++){
        if(d[i]== prv){
            cnt++;
            ans = max(ans,cnt);
            continue;
        }
        prv=d[i];
        cnt = 1;
    }
    print(ans);
}