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

ll totalDmg(ll t,int n, vector<int> a,vector<int> c){
    ll dmg=0;
    forn(i,n){
        dmg+=a[i]*(1+(t/c[i]));
        if(dmg>200000) break;
    }
    return dmg;
}

int main(){
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int h,n;
        cin >> h >> n;
        vector<int> a(n),c(n);
        forn(i,n){
            cin >> a[i];
        }
        forn(i,n){
            cin >> c[i];
        }

        

        ll x = -1;
        for (ll b = 50000000000; b >= 1; b /= 2) {
            while (totalDmg(x+b,n,a,c)<h) x += b;
        }

        cout << x+2 <<'\n';

    }
    return 0;
}