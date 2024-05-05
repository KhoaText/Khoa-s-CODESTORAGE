#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll a[1001];
ll n=9,ans=0;
/*
A:1->3
B:4->6
C:7->9
*/
bool used[1001]; 
bool check(){
    ll cnt = 0;
    for(ll i=1;i<=n;i++){
        if((a[i]==1||a[i]==2||a[i]==3)&&cnt<=1){
            cnt++;
            ll j=i+1;
            while(a[j]!=1&&a[j]!=2&&j<=n){
                if(4<=a[j]&&a[j]<=6) return 0;
                j++;
            }
        }
    }
    return 1;
}
void back(ll idx){
    if(idx == n){
        if(check()){
            ans++;
            for(ll i=1;i<=n;i++){
                cout<<a[i];
            }
            cout<<"\n--------------\n";
        }
        return;
    }
    for(ll i=1;i<=n;i++){
        if(!used[i]){
            used[i] = 1;
            a[idx+1] = i;
            back(idx+1);
            used[i] = 0;
        }
    }
}
int main(){
    // freopen(".INP", "r", stdin);
    freopen("test.txt", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    back(0);
    cout<<"Tong cong: "<<ans;
}