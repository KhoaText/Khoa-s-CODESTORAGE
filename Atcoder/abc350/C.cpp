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


ll n,cnt,d[200100];
string ans;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>d[i];
    for(ll i=1;i<=n;i++){
        ll min_val_index = i;
        for(ll j=i+1;j<=n;j++){
            if(d[j]<d[min_val_index]){
                min_val_index = j;
            }
        }
        if(i!=min_val_index){
            cnt++;
            ans=ans+to_string(i)+" "+to_string(min_val_index)+"\n";
            swap(d[i],d[min_val_index]);
        }
    }
    print(cnt)
    print(ans)
}