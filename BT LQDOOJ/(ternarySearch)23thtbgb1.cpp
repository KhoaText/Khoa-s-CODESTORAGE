#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll a,b;
ll lo,hi,m1,m2;
ll tritd(ll k){
    return (k<0?-k:k);
}
ll cal_gap(ll k){
    return tritd(k*a-k*b);
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>a>>b;
    if(a<0&&b>0){
        print(0);
        return 0;
    }
    lo=a+1;hi=b-1;
    while(lo <= hi){
        m1=lo + tritd(tritd(lo) - tritd(hi))/3;
        m2=hi - tritd(tritd(lo) - tritd(hi))/3;
        if(cal_gap(m1)<cal_gap(m2)){
            hi = m2-1;
        }else{
            lo = m1+1;
        }
    }
    print(m1)
}