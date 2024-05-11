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
#define BIT(x,i) (((x)>>(i-1LL))&1LL)
#define all(v) (v).begin(),(v).end()

const string NAME = "COLOA";
// Số test kiểm tra

// Viết lại hàm random để sử dụng cho thuận tiện. Hàm random này sinh ngẫu nhiên số trong phạm vi long long, số sinh ra >= l và <= h.
long long randInt(long long l, long long h) {
    long long res = 0;
    for(long long i=1;i<=4;i++) res = (res<<15)^(rand()&((1<<15)-1));
    return l + res%(h-l+1);
}

int main(){
    srand(time(NULL));
    ofstream inp((NAME+".inp").c_str());
    ll n = randInt(1,500);
    inp<<n<<'\n';
    for(ll i=1;i<=n;i++){
        inp<<char('a'+randInt(0,25));
    }
    inp.close();
}