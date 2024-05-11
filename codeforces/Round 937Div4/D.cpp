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

ll minBinNum[100001];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(ll mask=2;mask<MASK(6);mask++){
        string s = "";
        FOR_NGUOC(i,5,1){
            s += (BIT(mask,i-1)&1?"1":"0");
        }
        ll num = stoll(s);
        if(10<=num&&num<=100000){minBinNum[num]=num;};
    }
    for(ll i=10;i<=100000;i++){
        if(minBinNum[i] == i){
            for(ll j=i*i;j<=100000;j+=i){
                if(minBinNum[j]!=j)minBinNum[j]=i;
            }
        }
    }
    // for(ll i=1;i<=100000;i++){
    //     if(minBinNum[i]==i) print(i);
    // }
    ll q;cin>>q;
    while(q--){
        ll a;cin>>a;
        // cout<<a<<" "<<minBinNum[a]<<"\n";
        while(minBinNum[a]!=0&&a!=1){
            // cout<<a<<" "<<minBinNum[a]<<"\n";
            a/=minBinNum[a];
        }
        if(a!=1)print("NO")
        else print("YES")
    }
}