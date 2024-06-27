#include <bits/stdc++.h>
#include <math.h>
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
        ll x,y,z,k;
        cin >> x>>y>>z>>k;
        vector<ll> d;
        ll m=k+1;
        if(m>2001)m=2001;
        forr(i,1,m){
            if(k%i==0) d.push_back(i);
        }
        ll max=0;
        for(ll a:d){
            if(a>x)break;
            for(ll b:d){
                if(b>y)break;
                for(ll c:d){
                    if(c>z)break;
                    if(a*b*c==k){
                        ll total=(x-a+1)*(y-b+1)*(z-c+1);
                        if(total>max)max=total;
                    }
                }
            }
        }

        cout << max << '\n';

    }
    return 0;
}