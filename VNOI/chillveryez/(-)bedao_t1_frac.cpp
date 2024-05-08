#include <iostream>
using namespace std;
#define MOD (ll)(1e18)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
const ll maxa = 1e7+1;
ll n,d[1000],g[maxa],f[maxa],ans;
ll mud(ll a,ll b){
    ll res = 0;
    while(b>0){
        if(b&1) {res += a;}
        a += a;
        a*=a;
        b/=2;
    }
    return res;
}
ll gcd(ll a,ll b){
    return (a%b==0?b:gcd(b,a%b));
}
ll lcm(ll a,ll b){
    return mud(a,b)/gcd(a,b);
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);

    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>d[i];
        if(d[i]==0) {
            print("impossible")
            return 0;
        }
        g[d[i]]++;
        f[d[i]]=1;

    }
    for()
    print(ans)
}