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
        int n;
        cin >> n;
        vector<ll> a(n+1);
        forn(i,n){
            cin >> a[i];
        }
        a[n]=0;
        ll sol=0;
        forn(i,n){
            if(sol+a[i]>=0){
                sol+=a[i];
            }else{
                if(a[i+1]>0){
                    sol=abs(sol+a[i]);
                }else{
                    sol+=a[i];
                }
            }
        }
        cout << abs(sol) << '\n';
    }
    return 0;
}