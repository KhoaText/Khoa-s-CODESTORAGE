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

ll d[1000010],n,globalkeo;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n-1;i++){
        cin>>d[i];
        d[i]+=globalkeo;

        globalkeo+=(ll)d[i]/(ll)(n-i);
        d[i]%=n-i;
        cout<<d[i]<<" ";
    }
    cin>>d[n];
    d[n]+=globalkeo;
    cout<<d[n];
}