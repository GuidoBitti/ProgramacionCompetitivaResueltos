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
        int n,m;
        cin >> n >> m;
        string map[n];
        forn(i,n){
            cin>>map[i];
        }
        pair<int,int> start={-1,-1};
        forn(i,n){
            forn(j,m){
                if(map[i][j]=='#'){
                    start={i,j};
                    break;
                }
            }
            if(start.first!=-1)break;
        }
        int cant=0;
        while(start.first<n && map[start.first][start.second]=='#'){
            start.first++;
            cant++;
        }
        cout << start.first+1-((cant+1)/2) << " " << start.second+1 << '\n';
    }
    return 0;
}