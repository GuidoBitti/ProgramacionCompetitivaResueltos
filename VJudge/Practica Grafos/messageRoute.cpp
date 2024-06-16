#include <iostream>
#include <vector>
#include <queue>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;

vector<int> adj[100001];
bool vis[100001];
int dis[100001];
int nex[100001];
queue<int> q;

int main(){
    ll n,m,c1,c2;
    cin >> n >> m;

    for0(i,m){
        cin>> c1 >> c2;
        adj[c1-1].push_back(c2-1);
        adj[c2-1].push_back(c1-1);
    }

    vis[n-1] = true;
    dis[n-1] = 0;
    nex[n-1] = 0;
    q.push(n-1);
    while(!q.empty()) {
        int s=q.front();
        q.pop();
        for(auto u:adj[s]){
            if(vis[u]) continue;
            vis[u] = true;
            dis[u] = dis[s]+1;
            nex[u] = s;
            q.push(u);
            if(u==0){
                break;
            }
        }
    }

    if(vis[0]){
        cout << dis[0]+1 << endl;
        cout << 1;
        int n=nex[0];
        while(n!=0){
            cout << " " << n+1;
            n=nex[n];
        }
        cout << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}