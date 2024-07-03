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
        vector<int> row(m,0);
        vector<vector<int>> grid(n,row);

        forn(i,n){
            forn(j,m){
                cin >> grid[i][j];
            }
        }

        forn(i,n){
            forn(j,m){
                if(i>0 && grid[i-1][j]>=grid[i][j]) continue;
                if(i<n-1 && grid[i+1][j]>=grid[i][j]) continue;
                if(j>0 && grid[i][j-1]>=grid[i][j]) continue;
                if(j<m-1 && grid[i][j+1]>=grid[i][j]) continue;
                int h=0;
                if(i>0 && grid[i-1][j]>h) h=grid[i-1][j];
                if(i<n-1 && grid[i+1][j]>h) h=grid[i+1][j];
                if(j>0 && grid[i][j-1]>h) h=grid[i][j-1];
                if(j<m-1 && grid[i][j+1]>h) h=grid[i][j+1];

                grid[i][j] = h;
            }
        }

        forn(i,n){
            forn(j,m){
                cout << grid[i][j];
                if(j<m-1) cout << " ";
            }
            cout <<'\n';
        }
    }
    return 0;
}