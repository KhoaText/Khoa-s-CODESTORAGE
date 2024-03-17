#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;

ll d(int a,int b){
    if (a>b) swap(a,b);
    return min(abs(a-b),a+10-b);
}
ll solve(string a,string b){
    ll s=0,len=a.length();
    for(ll i=0;i<len;i++){
        string sa=a[i];
        print(sa)
        string sb=b[i];
        print(sb)
        // s+= d(stoi(sa),stoi(sb));
    }
    return s;
}
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    string x,y;cin>>x>>y;
    print(solve(x,y))
}