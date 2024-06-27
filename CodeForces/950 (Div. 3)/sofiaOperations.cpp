#include <iostream>
#include <vector>
#include <queue>
#include <map>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n),b(n);
        for0(i,n){
            cin >> a[i];
        }
        for0(i,n){
            cin >> b[i];
        }

        ll m,d;
        cin >> m;
        map<ll, ll> dlist;
        for0(j,m){
            cin >> d;
            dlist[d]++;
        }
        bool ans=true;
        for0(i,n){
            if(a[i]!=b[i]){
                if(dlist[b[i]]>=1){
                    dlist[b[i]]--;
                    m--;
                    cout<< b[i]<<" "<<dlist[b[i]]<<endl;
                }else{
                    ans=false;
                    break;
                } 
            }
        }
        if(ans){
            if(m==0){
                cout << "YES" << endl;
            }else{
                for(auto bx:b){
                    m-=dlist[bx];
                    dlist[bx]=0;
                    if(m==0){
                       break;
                    }
                }
                if(m==0){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}