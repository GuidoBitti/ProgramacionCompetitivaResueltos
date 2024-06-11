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
        int n;
        cin >> n;
        int max=0,maxi=0;
        forr(i,2,n+1){
            int k=1,sum=0;
            while(k*i<=n){
                sum+=k*i;
                k++;
            }
            if(sum>max){
                max=sum;
                maxi=i;
            }
        }
        cout << maxi << endl;
    }
    return 0;
}