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
string s;
ll ng,ph,ans;
int main(){
    freopen("CAU4.INP", "r", stdin);
    freopen("CAU4.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>s;
    for(char x: s){
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
            ng++;
            ans+=ph;
        }else{
            ph++;
            ans+=ng;
        }
    }
    cout<<ans;
}