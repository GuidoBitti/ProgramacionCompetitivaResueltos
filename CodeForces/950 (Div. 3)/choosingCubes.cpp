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
        int n,f,k,a,fav;
        cin >> n >> f >>  k;
        vector<int> v(100,0);
        for0(i,n){
            cin >> a;
            v[a-1]++;
            if(i==f-1){
                fav=a-1;
            }
        }
        int j=99;
        while(j!=fav){
            k-=v[j];
            j--;
        }
        if(k>0){
            if(k-v[j]<0){
                cout << "MAYBE" <<endl;
            }else{
                cout << "YES" <<endl;
            }
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}