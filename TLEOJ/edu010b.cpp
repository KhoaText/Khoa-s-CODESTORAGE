#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
bool prime[5000001];
ll n,h,ans;
int main(){
    freopen("DOCAONT.inp", "r", stdin);
    freopen("DOCAONT.out", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(prime,1,sizeof(prime));
    prime[0]=prime[1]=0;
    for(ll i=2;i*i<=5000000;i++){
        if(prime[i]){
            for(ll j=(i<<1);j<=5000000;j+=i) prime[j] = 0;
        }
    }
    cin>>n>>h;
    for(ll i=1;i<=n;i++){
        if(prime[i]){
            ll t = 0;
            for(char x: to_string(i)){
                t+=x-'0';
            }
            if(t==h){
                print(i)
                ans++;
            }
        }
    }
    print(ans)
}