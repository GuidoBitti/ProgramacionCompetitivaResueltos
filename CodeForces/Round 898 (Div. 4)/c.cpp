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
 
int points(int size,int start,vector<string> map,int p){
    int total=0;
    forr(i,start,start+size){
        if(i==start || i==start+size-1){
            forr(j,start,start+size) if(map[i][j]=='X') total+=p;
        }else{
            if(map[i][start]=='X') total+=p;
            if(map[i][start+size-1]=='X') total+=p;
        }
    }
    return total;
}

int main(){
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        vector<string> map(10);
        forn(i,10){
            cin >> map[i];
        }

        int sol=0;
        sol+=points(10,0,map,1);
        sol+=points(8,1,map,2);
        sol+=points(6,2,map,3);
        sol+=points(4,3,map,4);
        sol+=points(2,4,map,5);
        cout << sol << '\n';
    }
    return 0;
}