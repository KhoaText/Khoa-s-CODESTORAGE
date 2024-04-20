#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll a[4][4];
ll n=3,ans=0;
bool used[10]; 
bool check(){
    for(ll i=1;i<=n;i++){
        bool t = 0;
        for(ll j=1;j<=n;j++){
            if(a[i][j]&1) t=1;
        }
        if(!t) return 0;
    }
    for(ll i=1;i<=n;i++){
        bool t = 0;
        for(ll j=1;j<=n;j++){
            if(a[j][i]&1) t=1;
        }
        if(!t) return 0;
    }
    return 1;
}
void back(ll idx){
    if(idx == n*n){
        if(check()){ 
            ans++;
            for(ll i=1;i<=n;i++){
                for(ll j=1;j<=n;j++){
                    cout<<a[i][j];
                }
                cout<<"\n";
            }
            cout<<"________\n";
        }
        return;
    }
    for(ll i=1;i<=n*n;i++){
        if(!used[i]){
            a[idx/n+1][idx%n+1] = i;
            used[i] = 1;
            back(idx+1);
            used[i] = 0;
       }
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    freopen("test.txt", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    back(0);
    cout<<"Tong cong: "<<ans;
}