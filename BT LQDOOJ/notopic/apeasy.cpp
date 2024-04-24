#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
string s;
ll a=0,b=0;
bool pt = 1;
int main(){
    freopen("APEASY.INP", "r", stdin);
    freopen("APEASY.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);   
    cin>>s;
    string t = "";
    for(char x: s){
        if(x == '-'){
            if(!a){
                a = stoll(t);
                t = "";
            }
            pt = !pt;
        }else if(x == '+'){
            if(!a){
                a = stoll(t);
                t = "";
            }
        }
        else{
            t+=x;
        }
    }
    b=stoll(t);
    print(pt?a+b:a-b)
}