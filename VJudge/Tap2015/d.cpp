#include <bits/stdc++.h>
#include <vector>
#include <iostream>

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
 
vector<int> adj[1001];
bool visited[1001];
ll routes,cities,total=0;

void dfs(ll s){
    routes ++;
    if(visited[s])return;
    visited[s] = true;
    cities++;
    for(auto u:adj[s]){
        dfs(u);
    }
}


int main(){
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n,m,r,e;
    ll c1,c2,costR,costE;

    while(cin >> n >> m >> r >> e){


        forn(i,m){
            cin >> c1>>c2;
            adj[c1-1].push_back(c2-1);
            adj[c2-1].push_back(c1-1);
        }

        forn(i,n){
            if(!visited[i]){
                routes=-1;
                cities=0;
                dfs(i);
                costE=cities*e;
                cities--;
                costR=(((cities*(cities+1))/2)-(routes/2))*r;
                if(costR<costE){
                    total+=costR;
                }else{
                    total+=costE;
                }
            }
        }
        cout << total << '\n';
        memset(visited,false,sizeof(visited));
        total=0;
        forn(j,n){
            adj[j].clear();
        }

    }
    return 0;
}