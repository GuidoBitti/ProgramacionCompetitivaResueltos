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
        string s;
        cin >> s;
        
        int sol=0;
        for0(i,s.length()-1){
            if(s[i]!=s[i+1]) sol++;
        }
        if((s[0]=='1' && sol==1)||sol==0){
            sol++;
        }
        cout << sol << endl;
    }
    return 0;
}
