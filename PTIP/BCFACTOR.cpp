#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a,b) cout<<a<<" "<<b<<"\n";
typedef long long ll;
typedef long double ld;
ll n;
void xuli(){
    for(ll i=2;i<=sqrt(n+0.5);i++){
        ll cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt>0) print(i,cnt)
    }
    if (n!=1) print(n,1)//// oh my i dont see it
}
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    xuli();
}