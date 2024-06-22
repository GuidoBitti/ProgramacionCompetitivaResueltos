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
        int n;
        cin >> n;
        bool sol=false;
        int num1,num2=0;
        char palo1,palo2=' ';
        for0(i,n){
            cin >> num1 >> palo1;
            if((num1==num2 || palo1==palo2)&&!sol){
                sol=true;
                cout<<"M"<<endl;
            }
            num2=num1;
            palo2=palo1;
        }
        if(!sol){
            cout<<"B"<<endl;
        }
    }
    return 0;
}
