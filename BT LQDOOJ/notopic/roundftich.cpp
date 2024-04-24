#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    while(n--){
        ll a;cin>>a;
        ll b[10];
        ll i=0,len=0;
        while(a!=0){
            b[i] = a%10;
            if(b[i]!=0)len++;
            i++;
            a/=10;
        }
        print(len)
        for(ll t=i-1;t>=0;t--){
            if(b[t]!=0) cout<<(b[t]*pow(10,t))<<" ";
        }
        cout<<"\n";
    }
}