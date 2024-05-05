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
const ll maxprime = 1e6;
ll n,h,cnt;
bool prime[maxprime+1];
ll docao(ll k){
    ll res=0;
    while(k!=0){
        res += k%10;
        k/=10;
    }
    return res;
}
int main(){
    freopen("DOCAO.INP", "r", stdin);
    freopen("DOCAO.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(prime,1,sizeof(prime));
    prime[0]=prime[1]=0;
    for(ll i=2;i*i<=maxprime;i++){
        if(prime[i]){
            for(ll j=i+i;j<=maxprime;j+=i){
                prime[j]=0;
            }
        }
    }
    cin>>n>>h;
    for(ll i=1;i<=n;i++){
        if(prime[i]&&docao(i)==h){
            print(i)
            cnt++;
        }
    }
    print(cnt)
}