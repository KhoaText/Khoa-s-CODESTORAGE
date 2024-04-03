#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,k,ans,l=0,r=(ll)1e18;
vector<ll> tme;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    while(n--){
        ll t;cin>>t;
        tme.pb(t);
    }
    while(l<=r){
        ll m = (r+l)/2;
        ll prod = 0;
        for(ll x: tme){
            prod += m/x;
            if(prod>=k) break;
        }
        if(prod>=k){
            ans = m;
            r = m-1;
        }
        else l = m+1;
    }
    print(ans);
}