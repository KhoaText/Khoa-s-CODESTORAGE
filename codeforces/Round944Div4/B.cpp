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

ll n;
string s;
vector<char> suf;
bool d[100];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    while(n--){
        memset(d,0,sizeof(d));
        suf.resize(0);
        cin>>s;
        ll diffren = 0;
        if(s.length()==1){
            print("NO")
            continue;
        }
        for(char x: s){
            if(!d[x-'a']) {d[x-'a']=1;diffren++;suf.insert(suf.begin(),x);}
            else suf.pb(x);
        }
        if(diffren == 1){print("NO")continue;};
        print("YES")
        for(char x: suf) cout<<x;
        cout<<'\n';
    }
}