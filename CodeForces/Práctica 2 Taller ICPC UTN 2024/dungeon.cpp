#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int t;

    cin >> t;

    for(int cases = 0; cases < t; cases++){
        long long int a,b,c;

        cin >> a >> b >> c;
        long long int rounds=(a+b+c)/9;
        if((a+b+c)%9==0 && a>=rounds && b>=rounds && c>=rounds){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
    }

    return 0;
}