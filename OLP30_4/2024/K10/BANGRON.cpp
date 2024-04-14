#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
string s;
ll ans;
int main(){
    // freopen("BANGRON.INP", "r", stdin);
    // freopen("BANGRON.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> s;
    ll len = s.length();
    for(ll i=0;i<(ll)s.size()-2;i++){
        ll cntO=0,cntL=0,cntP=0;
        ll j = i-1;
        while(cntO<3&&cntL<3&&cntP<3&&j<len){
            if(s[j+1] == 'O') cntO++;
            if(s[j+1] == 'L') cntL++;
            if(s[j+1] == 'P') cntP++;
            j++;
        }
        ans += len - j;
    }
    print(ans)

}