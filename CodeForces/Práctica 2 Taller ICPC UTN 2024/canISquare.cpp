#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    int t;

    cin >> t;

    for(int cases = 0; cases < t; cases++){
        long long int n;

        cin >> n;

        long long int sum=0;

        for(int i=0; i < n; i++){
            int a;
            cin >> a;
            sum += a;
        }
        long long int raiz = sqrt(sum);
        if(raiz * raiz ==sum){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}