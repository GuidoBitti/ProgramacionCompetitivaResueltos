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
        int problems[7];
        int n,m;
        for0(i,7){
            problems[i] = 0;
        }
        cin >> n >> m;
        string a;
        cin >> a;

        for(auto c:a){
            problems[c-'A'] +=1;
        }
        int total=0;
        for(int j:problems){
            if(j-m<=0) total += -(j-m);
        }
        cout << total << endl;
    }

    return 0;
}