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
const ll maxp = 1e7;
ll q,minPrime[maxp+1];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    minPrime[0]=0;minPrime[1]=1;
    for(ll i=2;i<=maxp;i++){
        if(minPrime[i]==0){
            minPrime[i] = i;
            for(ll j=i*i;j<=maxp;j+=i){
                if(minPrime[j]==0)minPrime[j] = i;
            }
        }
    }
    cin>>q;
    while(q--){
        ll n;cin>>n;
        while(minPrime[n] != n){
            cout<<minPrime[n]<<"*";
            n/=minPrime[n];
        }
        cout<<n<<"\n";
    }
}