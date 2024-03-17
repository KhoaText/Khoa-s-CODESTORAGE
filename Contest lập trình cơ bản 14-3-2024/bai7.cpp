#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<" ";
typedef long long ll;
typedef long double ld;
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n,a,b;cin>>n>>a>>b;
    ll sa=0,sb=0;
    while(n--){
        ll st;cin>>st;
        if(st==1) {
            sa++;continue;
        }
        sb++;
    }
    if (!sa) {
        print(max(1ll*0,-a+max(1ll*0,sb-b))) //luc dau quen return fuck
        return 0;//luc dau quen return fuck
    }//luc dau quen return fuck
    if (!sb){//luc dau quen return fuck
        print(max(1ll*0,sa-a))//luc dau quen return fuck
        return 0;//luc dau quen return fuck
    }
    else print(max(1ll*0,sa-a+max(1ll*0,sb-b)))
}
