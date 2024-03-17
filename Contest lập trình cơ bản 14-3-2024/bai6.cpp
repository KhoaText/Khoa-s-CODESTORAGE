#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll gt[50];

int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    gt[0]=gt[1]=1;
    for(ll i=2;i<=20;i++){gt[i]=gt[i-1]*i;}
    ll n,m;cin>>m>>n;
    ld s = (ld)(gt[n])/(ld)(gt[m]*gt[n-m]);
    cout<<setprecision(1)<< fixed<<s;
}