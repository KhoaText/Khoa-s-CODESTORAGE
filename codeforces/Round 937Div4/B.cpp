#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define FOR_NGUOC(i,r,l) for(ll i=(r),_l=(l);i>=_l;i--)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i-1LL))&1LL)
#define all(v) (v).begin(),(v).end()


ll q;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>q;
    while(q--){
        ll n;cin>>n;
        for(ll i=1;i<=n;i++){
            if(i&1){
                // # truoc
                FOR(_,1,2){
                for(ll j=1;j<=n;j++){
                    cout<<(j&1?"##":"..");
                }cout<<"\n";}
            }else{// . truoc
                FOR(_,1,2){
                for(ll j=1;j<=n;j++){
                    cout<<(j&1?"..":"##");
                }cout<<"\n";}
            }
        }
    }
}