#include <bits/stdc++.h>
using namespace std;
// g++ -std=c++20 -02 -wall template.cpp -o template
 
#define forr(i,a,b) for(int i=(int)a ; i<(int)b ; i++)
#define forn(i, n) for(int i = 0; i < n; i ++)
#define all(x) (x).begin(),(x).end()
#define fst first
#define snd second
#define pb(x) push_back(x)
typedef long long ll;
typedef pair<int,int> ii;
const int MAXN = -1;
const double EPS = 1e-9;
 
int main(){
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        if(x%10==9){
            cout << "NO" <<'\n';
        }else{
            x=x/10;
            while(x>9){
                if(x%10==0){
                    cout << "NO" <<'\n';
                    break;
                }
                x=x/10;
            }
            if(x<10){
                if(x==1) cout << "YES" <<'\n';
                if(x!=1) cout << "NO" <<'\n';
            }
        }
    }
    return 0;
}