#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

deque<char> dq;

int main(){
    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s,t;cin>>s>>t;
    for(char x: s){
        dq.push_back(x);
    }for(char x: t){
        if(x=='R'){
            dq.push_front(dq.back());
            dq.pop_back();
        }else{
            dq.push_back(dq.front());
            dq.pop_front();
        }
    }
    while(!dq.empty()){
        cout<<dq.front();
        dq.pop_front();
    }
}