#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,k;

    cin >> n >> k;

    int left = 240-k, sol=0;

    while(sol<n & left>=0){
        left -= (5*(sol+1));
        if(left>=0){
            sol ++;
        }
    }

    cout << sol << endl;
    return 0;
}