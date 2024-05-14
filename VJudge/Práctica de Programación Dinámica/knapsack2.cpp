#include <iostream>
#include <vector>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)

typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
    ll n,wt,max=0,sum=0,min=1001;

    cin >> n >> wt;

    vector<ll> w(n),v(n);

    for0(i,n){
        cin >> w[i]>>v[i];
        sum += v[i];
        if(v[i]<min){
            min = v[i];
        }
    }
    vector<ll> ws(sum+1,-1);
    ws[0]=0;

    for0(i,n){
        for(ll j=sum;j>=0;j--){
            if(ws[j]!=-1 && (ws[j+v[i]]==-1|ws[j+v[i]]>ws[j]+w[i])){
                ws[j+v[i]]=ws[j]+w[i];
                if(ws[j+v[i]]<=wt && max<j+v[i]){
                    max = j+v[i];
                }
            }
        }
    }

    cout << max << endl;
    return 0;
}