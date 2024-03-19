#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
ll opt;
queue<ll> q;
void xuli(){
    switch (opt){
        case 1:
            print(q.size())
            break;
        case 2:
            print((q.empty() ? "YES":"NO"))
            break;
        case 3:
            ll a;cin>>a;
            q.push(a);
            break;
        case 4:
            if (!q.empty()){
                q.pop();
            }
            break;
        case 5:
            print((!q.empty()?q.front():-1))
            break;
        case 6:
            print((!q.empty()?q.back():-1))
            break;
    }
}
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    while(n--){
        cin>>opt;
        xuli();
    }
}