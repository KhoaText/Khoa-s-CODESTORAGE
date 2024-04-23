#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll n;
ll a[1000];
bool check[1000];
void back(ll i){
    if (i==n){
        for(ll i=1;i<=n;i++){
            cout<<a[i];
        }
        cout<<"\n";
        return;
    }
    for(ll b=1;b<=n;b++){
        if(!check[b]){
            check[b]=1;
            a[i+1]=b; 
            back(i+1);
            check[b]=0;
        }
    }
}
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    back(0);
}