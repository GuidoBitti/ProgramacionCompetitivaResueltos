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

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x<y){
            cout << x << " "< y <<endl;
        }else{
            cout << y << " "< x <<endl;
        }
    }

    return 0;
}
