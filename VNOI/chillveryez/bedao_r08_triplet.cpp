#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<_r;i++)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,k,r[10000],ans;
ll p,t;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    p = (ll)n/(ll)k;
    t = n%k;
    for(ll i=0;i<k;i++) r[i] = p;
    for(ll i=1;i<=t;i++) r[i]++;
    // for(ll i=0;i<k;i++) cout<<r[i]<<" ";
    FOR(i,0,k){
        FOR(j,0,k){
            FOR(z,0,k){
                if((i+j)%k==0&&(j+z)%k==0&&(i+z)%k==0){
                    ans += r[i]*r[j]*r[z];
                }
            }
        }
    }
    print(ans)
}