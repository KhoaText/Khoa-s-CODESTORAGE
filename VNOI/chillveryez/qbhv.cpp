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
bool used[100];
char a[100];
string s;
set<string> st;
void backtrack(ll id){
    if(id == s.length()-1){
        string t = "";
        for(ll i=1;i<s.length();i++){
            t += a[i];
        }
        st.insert(t);
        return;
    }
    for(ll i=1;i<s.length();i++){
        if(!used[i]){
            used[i] = 1;
            a[id+1] = s[i];
            backtrack(id+1);
            used[i] = 0;
        }
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>s;
    s = ' '+s;
    backtrack(0);
    print(st.size())
    for(string x:st){
        print(x)
    }
}