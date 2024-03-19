#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
int main(){
    freopen("GIAIMA.INP", "r", stdin);
    freopen("GIAIMA.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k;cin>>k;
    string a;
    cin.ignore();
    getline(cin,a);
    for(char x: a){
        if (x == ' '){
            cout<<x;
            continue;
        }
        if ((x-'A'-k)<0){
            cout<<char(x-k+26);
            continue;
        }
        cout<<char(x-k);
    }
}