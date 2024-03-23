#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;

ll n,k=0,q,sum,opt,d[500001];
void xuli(){
    switch(opt){
        case 1:{
            ll i,x;cin>>i>>x;
            ll a=k+i<=0 ? k+i+n:k+i;
            sum-=d[a];
            d[a]=x;
            sum+=x;
            print(sum)
            break;
        }
        case 2:{
            ll b;cin>>b;
            k-=b;k%=n;
            break;
        }
    }
}
int main(){
    #ifdef ONLINE_JUDGE
    freopen("DODEP.INP", "r", stdin);
    freopen("DODEP.OUT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    for(ll i=1;i<=n;i++){
        cin>>d[i];
        sum+=d[i];
    }
    while(q--){
        cin>>opt;
        xuli();
    }
}