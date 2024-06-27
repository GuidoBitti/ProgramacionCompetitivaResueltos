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
        int x,y;
        cin >> x >> y;
        int dos=(y+1)/2,resto;
        resto = x-dos*7;
        if(y%2!=0){
            resto -= 4;
        }
        if(resto<=0){
            cout<<dos<<endl;
        }else{
            cout<<dos+(resto+14)/15<<endl;
        }
    }
    return 0;
}