#include <iostream>
#include <vector>
#include <queue>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string grid[n];

        for0(i,n){
            cin >> grid[i];
        }

        int x=0,y=0;
        while(y<n && grid[y][x]!='#'){
            if(x<m-1){
                x++;
            }else{
                x=0;
                y++;
            }
        }
        int h=0;
        while(y<n && grid[y][x]=='#'){
            h++;
            y++;
        }

        y=y-(h+1)/2;
        cout <<  y+1 << " " << x+1 << endl;
    }
    return 0;
}