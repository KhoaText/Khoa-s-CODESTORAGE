#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll n,ans;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=5;i<=n;i++){
        ll cnt=0,tmp = 5;
        while(tmp <=n){
            ll sl = i/tmp;
            cnt += sl;
            tmp*=5;
        }
        ans += cnt;
    }
    print(ans)
}