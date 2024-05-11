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
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i-1LL))&1LL)
#define all(v) (v).begin(),(v).end()


ll n,a[100100],ans=-1000;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    FOR(i,1,n)cin>>a[i];
    ll mn_ind = 1;
    ll mn_ind_ans = 1;
    ll mx_ind = 1;
    FOR(i,2,n){
        if(a[i]<a[mn_ind]){
            mn_ind = i;
        }
        if(a[i]-a[mn_ind]>ans){
            ans = a[i]-a[mn_ind];
            mn_ind_ans = mn_ind;
            mx_ind = i;
        }
    }
    cout<<mn_ind_ans<<" "<<mx_ind<<'\n';
    cout<<ans;
}