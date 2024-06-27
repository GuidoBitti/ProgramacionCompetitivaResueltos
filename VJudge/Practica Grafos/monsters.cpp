#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
#include <stack>
 
#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)
 
 
typedef long long int lli;
typedef long long ll;
typedef long double ld;
 
using namespace std;
string map[1001];
vector<int> initial(1001,-1);
vector<bool> v[1001]
vector<vector<bool>> vis(1001,v);
vector<vector<int>> dis(1001,initial);
vector<vector<char>> sig(1001,cv);
 
void bfs(int n,int m,int x,int y){
    queue<pair<int,int>> q;
 
    vis[y][x]=c;
    dis[y][x]=0;
    q.push({y,x});
    while(!q.empty()){
        pair<int,int> s=q.front();q.pop();
        int d=dis[s.first][s.second];
        if(s.first+1<n && map[s.first+1][s.second]=='.'){
            if(dis[s.first+1][s.second]>d+1 || dis[s.first+1][s.second]==-1){
                vis[s.first+1][s.second] = c;
                dis[s.first+1][s.second] = d+1;
                q.push({s.first+1,s.second});
                if(c=='A') sig[s.first+1][s.second] = 'D';
            }
        }
 
        if(s.first+1>=0 && map[s.first-1][s.second]=='.'){
            if(dis[s.first-1][s.second]>d+1 || dis[s.first-1][s.second]==-1){
                vis[s.first-1][s.second] = c;
                dis[s.first-1][s.second] = d+1;
                q.push({s.first-1,s.second});
                if(c=='A') sig[s.first-1][s.second] = 'U';
            }
        }
 
        if(s.second+1<m &&  map[s.first][s.second+1]=='.'){
            if(dis[s.first][s.second+1]>d+1 || dis[s.first][s.second+1]==-1){
                vis[s.first][s.second+1] = c;
                dis[s.first][s.second+1] = d+1;
                q.push({s.first,s.second+1});
                if(c=='A') sig[s.first][s.second+1] = 'R';
            }
        }
 
        if(s.second-1>=0 &&  map[s.first][s.second-1]=='.'){
            if(dis[s.first][s.second-1]>d+1 || dis[s.first][s.second-1]==-1){
                vis[s.first][s.second-1] = c;
                dis[s.first][s.second-1] = d+1;
                q.push({s.first,s.second-1});
                if(c=='A') sig[s.first][s.second-1] = 'L';
            }
        }
    }
}
 
void buildSol(int x,int y){
    cout<<"YES"<<endl;
    cout<<dis[y][x]<<endl;
    stack<char> s;
    while(sig[y][x]!=' '){
        s.push(sig[y][x]);
        if(sig[y][x]=='U') {y++;continue;}
        if(sig[y][x]=='D') {y--;continue;}
        if(sig[y][x]=='L') {x++;continue;}
        if(sig[y][x]=='R') {x--;continue;}
    }
 
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    cout << endl;
}
 
int main(){
    int n,m,ax,ay;
    cin >> n >> m;
    queue<pair<int,int>> b;
    pair<int,int> border;
    string s;
    for0(i,n){
        cin >> s;
        map[i] = s;
        if(i==0 || i==n-1){
            for0(j,m){
                if(map[i][j]=='.'){
                    pair.push({i,j});
                }
            }
        }else{
            if(map[i][0]=='.'){
                pair.push({i,0});
            }
            if(map[i][m]=='.'){
                pair.push({i,m});
            }
        }
    }
    while(!b.empty()){
        border=b.front();b.pop();
        bfs(n,m,border.second,border.first)
    }

 
    return 0;
}
