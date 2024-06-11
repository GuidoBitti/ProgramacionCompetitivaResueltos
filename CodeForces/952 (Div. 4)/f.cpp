#include <iostream>
#include <vector>
#include <queue>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;
bool dead(int h,long long int k,int n,vector<int> a, vector<int> c, long long int initial){
    long long int dmg=initial;
    if(k>1){
        k--;
        for0(i,n){
            dmg+=(k/c[i])*a[i];
        }
    }
    if(dmg>=h) return true;
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int h,n;
        cin >> h >> n;
        vector<int> a(n),c(n); 
        long long int initial=0;
        for0(j,n){
            cin >> a[j];
            initial += a[j];
        }
        for0(i,n){
            cin >> c[i];
        }
        long long int x= -1;
        for(long long int b=10e10; b>=1; b/=2){
            while(!dead(h,x+b,n,a,c,initial)) x+=b;
        }
        long long int k=x+1;
        
        if (k>0) cout << k << endl;
        if(k==0) cout << 1 << endl;
    }
    return 0;
}