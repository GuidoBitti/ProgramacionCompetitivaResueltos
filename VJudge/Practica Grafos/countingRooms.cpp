#include <iostream>
#include <vector>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;

vector<int> row(1001,-1);
vector<vector<int>> colored(1001,row);
vector<string> map(1001);

void dfs(ll i, ll j,ll cc,ll n,ll m){
    if(colored[i][j]!=-1) return;
    colored[i][j]=cc;
    if(i+1<n && map[i+1][j]=='.') dfs(i+1,j,cc,n,m);
    if(i-1>=0 && map[i-1][j]=='.') dfs(i-1,j,cc,n,m);
    if(j+1<m && map[i][j+1]=='.') dfs(i,j+1,cc,n,m);
    if(j-1>=0 && map[i][j-1]=='.') dfs(i,j-1,cc,n,m);
}

int main(){
    ll n,m;
    cin >> n >> m;
 
    for0(i,n){
        cin >> map[i];
    }
    
    ll cc=0;
    for0(i,n){
        for0(j,m){
            if(map[i][j]!='#' && colored[i][j]==-1){
                dfs(i,j,cc,n,m);
                cc++;
            }
        }
    }

    cout << cc << endl;

    return 0;
}