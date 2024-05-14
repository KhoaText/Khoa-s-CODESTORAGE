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


ll n,uoc=1;
queue<pair<ll,ll>> b;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=2;i*i<=n;i++){
        ll cnt = 0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt){
            b.push({i,cnt});
            uoc*=cnt+1;
        }
    }
    if(n>1){uoc*=2;b.push({n,1});}
    while(!b.empty()){
        ll p = b.front().fi,sl=b.front().se;
        b.pop();
        if(b.empty()==1){
            for(ll i=1;i<=sl-1;i++)cout<<p<<"*";
            cout<<p;break;
        }else{
            for(ll i=1;i<=sl;i++)cout<<p<<"*";
        }
    }
    cout<<"\n"<<uoc;
}