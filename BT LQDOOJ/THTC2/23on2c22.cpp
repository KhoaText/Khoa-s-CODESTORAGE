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
const ll Mlimit = 1e6;

ll n,m,ans,minPrime[Mlimit+1];
unordered_set<ll> prime;
bool p[Mlimit+1];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(p,1,sizeof(p));
    cin>>n>>m;
    for(ll i=2;i<=Mlimit;i++){
        if(minPrime[i]==0){
            minPrime[i]=i;
            for(ll j=i*i;j<=Mlimit;j+=i){
                if(minPrime[j]==0)minPrime[j]=i;
            }
        }
    }
    ans = m;
    while(n--){
        ll a;cin>>a;
        while(a!=1){
            prime.insert(minPrime[a]);
            a/=minPrime[a];
        }
    }
    for(ll x: prime){
        for(ll i=x;i<=m;i+=x)if(p[i]){ans--;p[i]=0;}
    }
    print(ans)
    for(ll i=1;i<=m;i++){
        if(p[i]) print(i);
    }
}
