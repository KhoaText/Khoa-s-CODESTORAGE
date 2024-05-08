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
const ll maxn =1e5+10;
ll n,q;
bool readed[maxn];
stack<ll> st;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    for(ll i = n;i>=1;i--){
        st.push(i);
    }
    for(ll i=1;i<=q;i++){
        ll a;cin>>a;
        st.push(a);
    }
    while(!st.empty()){
        if(!readed[st.top()]){
            readed[st.top()]=1;
            print(st.top())
        }
        st.pop();
    }
}