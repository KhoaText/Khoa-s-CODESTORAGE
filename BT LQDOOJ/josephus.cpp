#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll a[30];
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    a[0]=1;
    for(ll i=1;i<=29;i++) a[i]=a[i-1]+pow(2,i);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll q;cin>>q;
    while(q--){
        ll b,k=0;cin>>b;
        if(b==1){
            print(1)
            continue;
        }
        for(ll i=0;i<=30;i++){
            if (b<=a[i]){
                k=i;break;
            }
        }
        b-=a[--k];
        print(2*b-1)
    }
}