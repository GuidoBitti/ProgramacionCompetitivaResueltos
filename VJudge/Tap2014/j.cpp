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
    int n;
    while(cin >> n){
        int nums[n];
        for0(i,n){
            cin >> nums[i];
        }
        forr(i,1,n+1){
            int pos=0;
            pos+=i;
            while(pos<n){
                pos+=nums[pos]+1;
            }
            if(pos==n){
                cout << i<<endl;
            }
        }
    }
    return 0;
}
