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
const ll maxn =150001;
ll n,ans,d[maxn+1],max_st[maxn*4],min_st[maxn*4];
void build(ll id,ll l,ll r){
    if(l==r){
        max_st[id]=min_st[id]=l;
        return;
    }
    ll mid = (l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    max_st[id]=(d[max_st[id*2]]>d[max_st[id*2+1]]?max_st[id*2]:max_st[id*2+1]);
    min_st[id]=(d[min_st[id*2]]<d[min_st[id*2+1]]?min_st[id*2]:min_st[id*2+1]);
}
ll max_in(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u) return 0;//d[0]=0;
    if(u<=l&&r<=v){
        return max_st[id];
    }
    ll mid= (l+r)/2;
    ll t1=max_in(id*2,l,mid,u,v);
    ll t2=max_in(id*2+1,mid+1,r,u,v);
    return (d[t1]>d[t2]?t1:t2);
}
ll min_in(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u) return maxn;//d[1500001]=1e10
    if(u<=l&&r<=v){
        return min_st[id];
    }
    ll mid= (l+r)/2;
    ll t1=min_in(id*2,l,mid,u,v);
    ll t2=min_in(id*2+1,mid+1,r,u,v);
    return (d[t1]<d[t2]?t1:t2);
}
int main(){
    freopen("BOBASO.INP", "r", stdin);
    freopen("BOBASO.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    d[maxn]=1e10;
    cin>>n;
    FOR(i,1,n) cin>>d[i];
    build(1,1,n);
    FOR(i,2,n-1){
        // cout<<max_in(1,1,n,1,k-1)<<" "<<k<<" "<<min_in(1,1,n,k+1,n)<<" "<<<<"\n";
        ll p1=max_in(1,1,n,1,i-1);
        ll p3=min_in(1,1,n,i+1,n);
        // cout<<p1<<" "<<p3<<"\n";
        // cout<<d[p1]<<" "<<d[i]<<" "<<d[p3]<<"\n";
        ans = max(ans,(3*d[p1])+(2*d[i])-(5*d[p3]));
    }
    print(ans)
}