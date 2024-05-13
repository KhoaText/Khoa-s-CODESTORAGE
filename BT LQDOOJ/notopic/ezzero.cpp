#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define FOR_NGUOC(i,r,l) for(ll i=(r),_l=(l);i>=_l;i--)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i))&1LL)
#define all(v) (v).begin(),(v).end()


ll sokhong=1,a,x,ans;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>a>>x;
    if(x==0){
        print((ll)0);
        return 0;
    }
    if(a==0){
        if(x<=1) print(0)
        else print((ll)pow(10,x))
        return 0;
    }
    sokhong = (ll)pow(10,x);
    if(a%sokhong==0){
        print(0)
        return 0;
    }
    ll t = (ll)sokhong;
    while(t<=a){
        t+=(ll)sokhong;
    }
    print((ll)t-(ll)a)
}