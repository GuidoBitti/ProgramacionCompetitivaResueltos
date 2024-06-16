#include <iostream>
#include <vector>
#include <queue>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;


int main(){
    ll n,m;
    cin >> n >> m;
    vector<int> row(1001,-1);
    queue<pair<int, int>> q;
    vector<vector<int>> visited(1001,row);
    vector<vector<int>> distance(1001,row);
    vector<string> map(1001);
    string sol="";
    int x=-1,y=-1,a1=-1,a2=-1;

    for0(i,n){
        cin >> map[i];
        if(x==-1 && y==-1){
            int p=0;
            for(auto s:map[i]){
                if(s=='B'){
                    x=p;
                    y=i;
                    break;
                }
                p++;
            }
        }
    }

    visited[y][x] = 0;
    distance[y][x] = 0;
    q.push({y,x});
    while(!q.empty()) {
        pair<int,int> s=q.front();
        q.pop();
        if(s.first+1<n && map[s.first+1][s.second]!='#' && visited[s.first+1][s.second]==-1){
            visited[s.first+1][s.second] = 1;
            distance[s.first+1][s.second] = distance[s.first][s.second]+1;
            q.push({s.first+1,s.second});
            if(map[s.first+1][s.second]=='A'){
                a1=s.first+1;
                a2=s.second;
                break;
            }
        }
        if(s.first-1>=0 && map[s.first-1][s.second]!='#' && visited[s.first-1][s.second]==-1){
            visited[s.first-1][s.second] = 3;
            distance[s.first-1][s.second] = distance[s.first][s.second]+1;
            q.push({s.first-1,s.second});
            if(map[s.first-1][s.second]=='A'){
                a1=s.first-1;
                a2=s.second;
                break;
            }
        }
        if(s.second+1<m &&map[s.first][s.second+1]!='#' && visited[s.first][s.second+1]==-1){
            visited[s.first][s.second+1] = 4;
            distance[s.first][s.second+1] = distance[s.first][s.second]+1;
            q.push({s.first,s.second+1});
            if(map[s.first][s.second+1]=='A'){
                a1=s.first;
                a2=s.second+1;
                break;
            }
        }
        if(s.second-1>=0 &&map[s.first][s.second-1]!='#' && visited[s.first][s.second-1]==-1){
            visited[s.first][s.second-1] = 2;
            distance[s.first][s.second-1] = distance[s.first][s.second]+1;
            q.push({s.first,s.second-1});
            if(map[s.first][s.second-1]=='A'){
                a1=s.first;
                a2=s.second-1;
                break;
            }
        }
    }
    if(a1!=-1 && a2!=-1){
        int d = distance[a1][a2];
        while(visited[a1][a2]!=0){
            if(visited[a1][a2]==1){
                sol += 'U';
                a1--;
            }
            if(visited[a1][a2]==2){
                sol += 'R';
                a2++;
            }
            if(visited[a1][a2]==3){
                sol += 'D';
                a1++;
            }
            if(visited[a1][a2]==4){
                sol += 'L';
                a2--;
            }
        }
        cout << "YES" << endl;
        cout << d << endl;
        cout << sol << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}