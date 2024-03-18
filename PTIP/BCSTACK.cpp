#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
stack<ll> st;
string s;
void xuli(){
    if (s == "init"){
        while(!st.empty()){
            st.pop();
        }
    }
    else if (s == "push"){
        ll a;cin>>a;
        st.push(a);
    }
    else if (s == "pop"){
        if(!st.empty()) st.pop();
    }
    else if (s == "top"){
        print((st.empty() ? -1 : st.top()))
    }
    else if (s == "size"){
        print(st.size())
    }
    else if (s == "empty"){
        print(st.empty())
    }
}
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>s;
    while(s!="end"){
        xuli();
        cin>>s;
    }
}