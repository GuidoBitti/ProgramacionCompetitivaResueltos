#include <iostream>
#include <vector>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)

typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
    ll n,wt,max=0;

    cin >> n >> wt;

    vector<ll> w(n),v(n),vs(wt+1,-1);

    for0(i,n){
        cin >> w[i]>>v[i];
    }
    vs[0]=0;

    for0(i,n){
        for(ll j=wt;j>=0;j--){
            if(vs[j]>-1 && j+w[i]<=wt && vs[j+w[i]]<vs[j]+v[i]){
                vs[j+w[i]]=vs[j]+v[i];
                if(vs[j+w[i]]>max) max=vs[j+w[i]];
            }
        }
    }
    cout << max << endl;
    return 0;
}