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
#define BIT(x,i) (((x)>>(i))&1LL)
#define all(v) (v).begin(),(v).end()

ll n,d[100100];
void init(){
    cin>>n;
    FOR(i,1,n)cin>>d[i];
}
void process(){
    ll max_val = 1;
    sort(d+1,d+1+n);
    for(ll i=2;i<=n;i++){
        if(d[i]>max_val){
            cout<<"NO\n";
            return;
        }
        max_val+=d[i];
    }
    cout<<"YES\n";
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll q;cin>>q;
    while(q--){
        init();
        process();
    }
}