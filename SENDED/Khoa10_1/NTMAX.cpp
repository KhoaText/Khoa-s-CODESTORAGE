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
const ll maxprime = 5e6;
string s,t;
ll ans,len;
bool prime[maxprime+1];
bool isNumber(char x){
    return (0<=(x-'0')&&(x-'0')<=9);
}
int main(){
    freopen("NTMAX.INP", "r", stdin);
    freopen("NTMAX.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(prime,1,sizeof(prime));
    prime[0]=prime[1]=0;
    for(ll i=2;i*i<=maxprime;i++){
        if(prime[i]){
            for(ll j=i+i;j<=maxprime;j+=i){
                prime[j]=0;
            }
        }
    }
    cin>>s;
    s+=" ";
    for(char x: s){
        int num = x - '0';
        if(0<=num&&num<=9){
            len++;
            t+=x;
        }else if(t!=""){
            if(prime[stoll(t)]) ans = max(ans,stoll(t));
            t = "";
        }
    }
    
    print(len)
    print(ans)
}