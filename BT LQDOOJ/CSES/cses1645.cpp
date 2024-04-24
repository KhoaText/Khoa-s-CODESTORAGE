#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll n,d[(ll)2e5+10];
stack<ll> NSV;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    NSV.push(0);
    for(ll i =1;i<=n;i++){
        cin>>d[i];
        while(d[NSV.top()]>=d[i]){
            NSV.pop();
        }
        cout<<NSV.top()<<" ";
        NSV.push(i);
    }
}