#include <iostream>
#include <vector>
#include <queue>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;

vector<int> adj[100001];
int visited[100001];
int dis[100001];
queue<int> q;

int main(){
    int n,m,a,b;
    cin >> n >> m;

    for0(i,m){
        cin >> a >> b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    
    int sol=-1;
    visited[n-1]=-1;
    dis[n-1]=1;
    q.push(n-1);
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(auto u:adj[s]){
            if(visited[u]) continue;
            visited[u]=s;
            dis[u]=dis[s]+1;
            q.push(u);
        }
    }

    if(visited[0]!=0){
        int path = 0;
        cout << dis[0] << endl;
        cout << 1;
        while(visited[path]!=-1){
            cout << " " << visited[path]+1;
            path = visited[path];
        }
        cout << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}