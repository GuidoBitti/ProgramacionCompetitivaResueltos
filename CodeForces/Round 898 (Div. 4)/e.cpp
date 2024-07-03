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
 
bool water(ll h,vector<ll>& a, ll x, int n){
    ll w=0;
    forn(i,n){
        if(h-a[i]>0) w+=h-a[i];
    }
    if(w>x) return true;
    return false;
}

int main(){
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n);

        forn(i,n){
            cin >> a[i];
        }

        ll h = -1;
        for (ll b = 1000000000; b >= 1; b /= 2) {
            while (!water(h+b,a,x,n)) h += b;
        }
        
        cout << h << '\n';
    }
    return 0;
}