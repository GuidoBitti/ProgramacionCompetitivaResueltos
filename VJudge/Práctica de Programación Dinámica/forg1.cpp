#include <iostream>
#include <vector>
#include <cmath>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long int lli;
typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
    lli n;
    lli i;
    cin >> n;
    vector<lli> h(n),dif(n);
    forr(i,0,n){
        cin >> h[i];
    }

    dif[0]=0;
    dif[1]=abs(h[0]-h[1]);

    forr(i,2,n){
        dif[i]=min(dif[i-2] + abs(h[i-2]-h[i]),dif[i-1] + abs(h[i-1]-h[i]));
    }
    cout << dif[n-1] << endl;
    return 0;
}