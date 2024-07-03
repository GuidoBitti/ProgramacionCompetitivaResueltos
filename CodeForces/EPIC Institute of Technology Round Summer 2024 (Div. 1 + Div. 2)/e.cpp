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
        ll a[n+1],s[n+1];
        vector<ll> edges[n];
        forn(i,n){
            cin >> a[i+1];
        }
        ll e;
        forn(i,n-1){
            cin >> e;
            edges[e].push_back(i+2);
        }

        forr(i,1,n){
            ll sum=0;
            for(auto u:edges[i]){
                sum+=a[u];
            }
            s[i]=sum;
        }
        ll sol=0;
        forr(l,1,n){
            if(a[l]>s[l] && s[l]>0){
                ll dif=a[l]-s[l];
                sol+=dif;
                int index=edges[l][0];
                ll mindif=a[index]-s[index];
                if(s[index]==0) continue;
                for(auto u:edges[l]){
                    if(s[u]==0){
                        index=u;
                        break;
                    }
                    if(mindif>a[u]-s[u]){
                        mindif=a[u]-s[u];
                        index=u;
                    }
                }
                a[index]+=dif;
            }
        }
        cout << sol << '\n';
    }
    return 0;
}