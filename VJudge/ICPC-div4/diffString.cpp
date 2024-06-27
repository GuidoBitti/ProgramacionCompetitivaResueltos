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
        string s,sols;
        cin >> s;
        bool sol=false;
        for0(i,s.length()-1){
            if(s[i]!=s[i+1]){
                sol=true;
                sols=s.substr(0,i)+s[i+1]+s[i]+s.substr(i+2,s.length());
                cout << "YES" <<endl;
                cout << sols << endl;
                break;
            }
        }
        if(!sol){
            cout << "NO" <<endl;
        }
    }

    return 0;
}
