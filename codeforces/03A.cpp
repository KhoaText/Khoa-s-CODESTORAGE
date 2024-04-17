#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll d[10][10];
string s,e;
stack<string> st;
void fill(ll x,ll y){
    d[x][y]=0;
    for(ll i = 0;i<=8;i++){
        for(ll v=y-i;v<=y+i;v++){
            if(x-i>0&&v>0&&v<=8)    d[x-i][v] = i;
            if(x+i<=8&&v>0&&v<=8)    d[x+i][v] = i;
        }
        for(ll u=x-i;u<=x+i;u++){
            if(u>0&&u<=8&&y+i<=8) d[u][y+i] = i;
            if(u>0&&u<=8&&y-i>0) d[u][y-i] = i;
        }
    }
}
void timkiem(ll x,ll y,ll xt, ll yt){
    // cout<<x<<" "<<y<<"\n";
    if(x==xt&&y==yt) return;
    ll dx[8] = {0,0,-1,1,-1,-1,1,1};
    ll dy[8] = {-1,1,0,0,-1,1,-1,1};
    string bs[8] = {"L", "R", "D", "U", "LD", "RD", "LU", "RU"};
    for(ll i=0;i<8;i++){
        if(x+dx[i]<=0||x+dx[i]>8||y+dy[i]<=0||y+dy[i]>8) continue;
        if(d[x][y]-1==d[x+dx[i]][y+dy[i]]){
            st.push(bs[i]);
            timkiem(x+dx[i],y+dy[i],xt,yt);
            return;
        }
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>s>>e;
    fill(s[1]-'0',s[0]-'a'+1);
    // for(ll i=1;i<=8;i++){
    //     for(ll j =1;j<=8;j++){
    //         cout<<d[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    timkiem(e[1]-'0',e[0]-'a'+1,s[1]-'0',s[0]-'a'+1);
    print(st.size())
    unordered_map<string, string> tran = {{"D","U"}, {"U","D"}, {"R","L"}, {"L","R"}, {"RD","LU"}, {"RU","LD"}, {"LD","RU"}, {"LU","RD"}};
    while(!st.empty()){
        print(tran[st.top()])
        st.pop();
    }
}