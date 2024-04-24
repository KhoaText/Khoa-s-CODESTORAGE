#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define print(a) cout<<(a);
ll n,s;
unordered_map<string,ll> mp;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    while(n--){
        string a;cin>>a;
        string b=a;reverse(b.begin(),b.end());
        s+=mp[b];
        mp[a]++;
    }
    print(s)
}
