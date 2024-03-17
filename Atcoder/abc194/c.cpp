#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll n,s,a[300001];
ll prefixsum[300001],prefixsumsq[300001];
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    cin>>a[1];
    prefixsum[1]=a[1];
    prefixsumsq[1]=a[1]*a[1];
    for(ll i=2;i<=n;i++){
        cin>>a[i];
        s+=((i-1)*a[i]*a[i])+prefixsumsq[i-1];
        s-=(2)*a[i]*prefixsum[i-1];
        prefixsum[i]=prefixsum[i-1]+a[i];
        prefixsumsq[i]=prefixsumsq[i-1]+(a[i]*a[i]);
    }
    print(s)
}