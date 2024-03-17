#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll a[50];
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n,k,cnt=0;cin>>n>>k;
    k-=1;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(i>=k&&a[i]<a[k]){
            print(i)
            return 0;
        }
        if(a[i]==0){
            print(i)
            return 0;
        }
    }
    print(n);
}