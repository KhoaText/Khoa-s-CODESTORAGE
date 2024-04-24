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
bool prime[5000001];
ll n,k;
ll chuso(ll k){
    ll res = 0;
    while(k!=0){
        res+=k%10;
        k/=10;
    }
    return res;
}
int main(){
    freopen("DOCAONT.INP", "r", stdin);
    freopen("DOCAONT.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(prime,1,sizeof(prime));
    prime[0]=prime[1]=0;
    for(ll i = 2;i*i<=5000001;i++){
        if(prime[i]){
            for(ll j=i*2;j<=5000001;j+=i){
                prime[j] = 0;
            }
        }
    }
    cin>>n>>k;
    ll ans = 0;
    FOR(i,1,n){
        if(prime[i]&&chuso(i)==k){
            print(i)
            ans++;
        }
    }
    print(ans)
}