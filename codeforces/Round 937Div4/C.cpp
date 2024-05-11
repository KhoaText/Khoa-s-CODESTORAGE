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
#define BIT(x,i) (((x)>>(i-1LL))&1LL)
#define all(v) (v).begin(),(v).end()


ll q;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        string hour = s.substr(0,2);
        if(hour =="00") print("12:"+s.substr(3,2)+" AM")
        else if("01"<=hour&&hour<="11"){
            print(s+" AM")
        }else if(hour == "12"){
            print(s+" PM")
        }else{
            hour = to_string(stoi(hour)-12);
            if(hour.length()==1){
                print("0"+hour+":"+s.substr(3,2)+" PM")
            }else{
                print(hour+s.substr(2,3)+" AM")
            }
        }
    }
}