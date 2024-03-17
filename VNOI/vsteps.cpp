#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(14062008)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll bacthang[100001+10];
bool thung[100001+10];
ll n,k,pre=-1;
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    bacthang[1]=1;
    cin>>n>>k;
    for(ll i=0;i<k;i++){
        ll b;cin>>b;
        thung[b] = 1;
        if(pre+1==b||b==n){
            print(0)
            return 0;
        }
        pre=b;
    }
    for(ll i=2;i<=n;i++){
        if (!thung[i-1]){
            bacthang[i]+=bacthang[i-1];
        }
        if (!thung[i-2]){
            bacthang[i]+=bacthang[i-2];
        }
        bacthang[i]%=MOD;
    }
    print(bacthang[n])
}