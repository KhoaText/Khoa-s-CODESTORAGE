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

ll q,a,b;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>q;
    while(q--){
        cin>>a>>b;
        ll res = 0;
        while(a!=b){
            a = a-b;
            if (a<b) swap(a,b);
            // cout<<a<<" "<<b;
            res++;
        }
        print(res)
    }
}