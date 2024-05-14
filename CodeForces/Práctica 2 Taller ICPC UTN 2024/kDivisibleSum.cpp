#include <iostream>
#include <math.h>
 
using namespace std;
 
int main(){
    long long int t;
    cin>>t;
    
    for(int cases=0;cases<t;cases++){
        long long int n,k;
        cin>>n>>k;
        
        long long int i=ceil(round(n)/k);
        
        long long int sol= ceil(round(k*i)/n);
        
        cout <<sol<<endl;
    }
    return 0;
}