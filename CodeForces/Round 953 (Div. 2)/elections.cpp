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
        ll n,c;
        cin >> n>>c;
        ll a[n];
        cin >> a[1];
        a[1]+=c;
        ll maxi=a[1],posm=1;
        forr(i,2,n+1){
            cin >> a[i];
            if(a[i]>maxi){
                maxi=a[i];
                posm=i;
            }
        }
        ll sum=0;
        forn(j,n){
            if(j+1==posm) cout<<0<<" ";
            if(j+1>posm) cout<<j<<" ";
            if(j+1<posm){
                if(sum+a[j+1]<maxi){
                    cout<<j+1<<" ";
                }else{
                    cout << j << " ";
                }
            }
            sum+=a[j+1];
        }
        cout << '\n';

    }
    return 0;
}