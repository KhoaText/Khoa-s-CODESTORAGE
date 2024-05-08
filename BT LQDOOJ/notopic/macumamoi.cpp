#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define print(a) cout<<(a)<<"\n";
#define all(vt) (vt).begin(),(vt).end()
typedef long long ll;
typedef long double ld;
const ll maxn = 1e5+10;
ll n,d[maxn],ans;
vector<ll> st[maxn*4],prefix[maxn*4];
void build(ll id,ll l,ll r){
    if(l==r){
        st[id].push_back(d[l]);
        prefix[id].push_back(0);
        prefix[id].push_back(d[l]);
        return;
    }
    ll mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    st[id].resize(st[id*2].size()+st[id*2+1].size());
    merge(all(st[id*2]),all(st[id*2+1]),st[id].begin());
    prefix[id].push_back(0);
    for(int i=0;i<st[id].size();i++){
        prefix[id].push_back((st[id][i]+prefix[id][i]));
    }
}
ll get_sum_morethan_k(ll id,ll l,ll r,ll u,ll v,ll k){
    if(v<l||r<u) return 0;
    if(u<=l&&r<=v){
        int bs = upper_bound(all(st[id]),k)-st[id].begin();
        int sl = st[id].size()-bs;
        return (prefix[id][prefix[id].size()-1]-prefix[id][
            upper_bound(all(st[id]),k)-st[id].begin()
        ]-k*sl)%MOD;
    }
    ll mid = (l+r)/2;
    return (get_sum_morethan_k(id*2,l,mid,u,v,k)+
    get_sum_morethan_k(id*2+1,mid+1,r,u,v,k))%MOD;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>d[i];
    build(1,1,n);
    for(ll i=2;i<=n;i++){
        ans += get_sum_morethan_k(1,1,n,1,i-1,d[i]);
        ans %= MOD;
    }
    print(ans)
}