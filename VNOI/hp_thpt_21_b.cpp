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
const ll maxprime = 1e7;
const ll maxn = 1e5+100;
ll snt[maxn],n;
bool prime[maxprime+1];
void sieve(){
    prime[0]=prime[1]=0;
    for(ll i=2;i*i<=maxprime;i++){
        if(prime[i]){
            for(ll j=i*2;j<=maxprime;j+=i){
                prime[j]=0;
            }
        }
    }
}
bool checknt(ll k){
    if(k>maxprime){   
        for(ll i=1;i*i<=k;i++){
            if(k%i==0) return 0;
        }
        return 1;
    }else{
        return prime[k];
    }
}
bool check_snt(ll k){
    ll t=k*10;
    if(!checknt(k)) return 0;
    if(!(checknt(t+1)||checknt(t+3)||checknt(t+7)||checknt(t+9)))return 0;
    k/=10;
    while(k!=0){
        if(!checknt(k)) return 0;
        k/=10;
    }
    return 1;
}
void process(){
    cin>>n;
    FOR(i,1,n){
        ll a;cin>>a;
        if(check_snt(a))snt[i]++;
        snt[i] += snt[i-1];
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(prime,1,sizeof(prime));
    sieve();
    process();
    ll q;cin>>q;
    while(q--){
        ll a,b;cin>>a>>b;
        print(snt[b]-snt[a-1])
    }
}