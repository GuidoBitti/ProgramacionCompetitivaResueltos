#include <iostream>
#include <vector>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;

ll minCost(ll x,ll k,vector<ll>& h,vector<ll>& dif){
    if(dif[x]!=-1) return dif[x];
    else{
        ll min=abs(h[x]-h[x+1]) + minCost(x+1,k,h,dif);
        forr(i,x+2,x+k+1){
            if(min>abs(h[x]-h[i]) + minCost(i,k,h,dif)) min=abs(h[x]-h[i]) + minCost(i,k,h,dif);
        }
        dif[x]=min;
        return min;
    }
}
int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll> h(n),dif(n,-1);
    for0(i,n){
        cin >> h[i];
    }
    if(k>=n-1){
        cout << abs(h[0]-h[n-1]) <<endl;
    }else{
        dif[n-1]=0;
        forr(i,n-1-k,n) dif[i]=abs(h[n-1]-h[i]);
        cout<<minCost(0,k,h,dif)<<endl;
    }
    return 0;
}