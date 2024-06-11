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
        string a,b;
        cin >> a >> b;

        cout << b[0] << a[1] << a[2] << " " << a[0] << b[1] <<b[2] << endl;
    }
    return 0;
}