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
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i))&1)
#define all(v) (v).begin(),(v).end()



ll n,x,ans,A[100],B[100],lena,lenb;
vector<ll> a,b;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);    
    cin>>n>>x;
    lena = n/2;
    lenb = n-lena;
    for(ll i=1;i<=lena;i++)cin>>A[i];
    for(ll i=1;i<=lenb;i++)cin>>B[i];
    for(ll mask=0;mask<MASK(lena);mask++){
        ll sum = 0;
        for(ll i=1;i<=lena;i++){
            if(BIT(mask,i-1)) sum+=A[i];
        }

        ans++;
        a.pb(sum);
    }
    for(ll mask=0;mask<MASK(lenb);mask++){
        ll sum = 0;
        for(ll i=1;i<=lenb;i++) if(BIT(mask,i-1)) sum+=B[i];
        b.pb(sum);
    }
    sort(all(b));
    for(ll v:a){
        ans+=upper_bound(all(b),x-v)-lower_bound(all(b),x-v)-1;
    }
    print(ans)
}