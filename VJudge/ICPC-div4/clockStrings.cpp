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
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int min1,max1;
        min1=min(a,b);
        max1=max(a,b);
        if(((c>min1&&c<max1) && (d>max1 || d<min1))||((d>min1&&d<max1) && (c>max1 || c<min1))){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
