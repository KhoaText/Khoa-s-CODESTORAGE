#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"\n";
typedef long long ll;
typedef long double ld;
pair<ll,ll> a[1001];
pair<ll,ll> b[1001];
ll n;
int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a[i].first>>b[i].first;
        a[i].second=b[i].second=i;
    }
    sort(a+1,a+n+1,[](pair<ll,ll> a1,pair<ll,ll> a2)-> bool{
        return (a1.first<a2.first);});
    sort(b+1,b+n+1,[](pair<ll,ll> b1,pair<ll,ll> b2)-> bool{
        return (b1.first<b2.first);});
    if (a[1].second!=b[1].second){
        print(max(a[1].first,b[1].first))
    }else{
        ll c=a[1].first+b[1].first,d=max(a[2].first,b[1].first),f=max(a[1].first,b[2].first);
        print(min(c,min(d,f)))
    }
}