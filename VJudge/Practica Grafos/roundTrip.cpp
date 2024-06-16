#include <iostream>
#include <vector>
#include <math.h>
#include <queue>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long int lli;
typedef long long ll;
typedef long double ld;

using namespace std;
vector<int> adj[100002];
int dis[100002];
int vis[100002];
int first=-1,second=-1;

bool dfs(int s, int p,int d){
    if(dis[s]!=0){
        first = s;
        second = p;
        return true;
    }
    vis[s]=p;
    dis[s]=d+1;
    for(auto u:adj[s]){
        if(u==p) continue;
        if(dfs(u,s,dis[s]))return true;
    }
    return false;
}

int main(){
    int n,m,a,b;
    cin >> n >> m;

    for0(i,m){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    forr(j,1,n+1){
        if(vis[j]==0 && dfs(j,-1,0)) break;
    }

    if(first==-1){
        cout << "IMPOSSIBLE" << endl;
    }else{
        cout << dis[second]-dis[first]+2 << endl;
        cout << first << " " << second;
        int index=second;
        while(vis[index]!=first){
            cout << " " << vis[index];
            index = vis[index];
        }
        cout << " " << first << endl;
    }

    return 0;
}