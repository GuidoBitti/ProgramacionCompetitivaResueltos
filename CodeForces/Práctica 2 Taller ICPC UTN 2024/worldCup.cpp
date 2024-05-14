#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    long long int n;

    cin >> n;

    long long int sol,num,min=-1;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num-i <= 0){
            sol = i+1;
            break;
        }

        long double round = ceil(double(num-i)/n);
        if(min == -1){
            min = round;
            sol = i+1;
        }else{
            if(round < min){
                min = round;
                sol = i+1;
            }
        }
    }

    cout << sol << endl;

    return 0;
}