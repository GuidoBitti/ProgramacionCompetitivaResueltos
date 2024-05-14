#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    int last,lastC=1,actual,actualC=1,sol=0;
    cin >> last;
    for(int i=1; i<n; i++){
        cin >> actual;
        if(actual == last){
            actualC++;
        }else{
            sol =max(sol,min(actualC,lastC));
            lastC = actualC;
            last = actual;
            actualC=1;
        }
        if(i==(n-1)){
            sol =max(sol,min(actualC,lastC));
        }
    }

    cout << sol*2 << endl;

    return 0;
}