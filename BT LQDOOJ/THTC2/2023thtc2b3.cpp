#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
const ll maxn = 2e5+1;
ll n,k;
ld d[maxn],sum[maxn];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    FOR(i,1,n){cin>>d[i];}
    ld l=-1e9,h=1e9;
    while(l<=h){
        ld mid = (l+h)/2;
        if(fabs(l-mid)<=0.000000001&&fabs(h-mid)<=0.000000001) break;
        FOR(i,1,n){
            sum[i] = sum[i-1]+d[i]-mid;
        }
        ld mini=0;
        bool finded=0;
        FOR(i,k,n){
            mini = min(mini,sum[i-k]);
            if(sum[i]-mini>=0){
                l = mid;
                finded=1;
            }
        }
        if(!finded) h=mid;
    }
    cout<<setprecision(3)<<fixed<<l;
}