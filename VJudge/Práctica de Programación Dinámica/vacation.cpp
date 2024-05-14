#include <iostream>
#include <vector>
#include <math.h>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;
ll maxHappiness(int type,ll n, ll x, vector<ll>& a, vector<ll>& b, vector<ll>& c,vector<vector<ll>>& maxi){
    if(type==0){
        if(maxi[x+1][1]!=-1 && maxi[x+1][2]!=-1) maxi[x][0]=max(a[x] + maxi[x+1][1], a[x] + maxi[x+1][2]);
        else maxi[x][type]=max(a[x]+maxHappiness(1,n,x+1,a,b,c,maxi),a[x]+maxHappiness(2,n,x+1,a,b,c,maxi));
    }else{
        if(type==1){
            if(maxi[x+1][0]!=-1 && maxi[x+1][2]!=-1) maxi[x][1]= max(b[x] + maxi[x+1][0], b[x] + maxi[x+1][2]);
            else maxi[x][type]=max(b[x]+maxHappiness(0,n,x+1,a,b,c,maxi),b[x]+maxHappiness(2,n,x+1,a,b,c,maxi));
             
        }else{
            if(maxi[x+1][0]!=-1 && maxi[x+1][1]!=-1) maxi[x][2]= max(c[x] + maxi[x+1][1], c[x] + maxi[x+1][0]);
            else maxi[x][type]=max(c[x]+maxHappiness(0,n,x+1,a,b,c,maxi),c[x]+maxHappiness(1,n,x+1,a,b,c,maxi));
        }
    }
    return maxi[x][type];
}
int main(){
    ll n;
    cin >> n;
    vector<ll> a(n),b(n),c(n),types(3,-1);
    vector<vector<ll>> maxi(n,types);
    for0(i,n){
        cin>>a[i]>>b[i]>>c[i];
    }

    maxi[n-1][0]=a[n-1];
    maxi[n-1][1]=b[n-1];
    maxi[n-1][2]=c[n-1];
    if(n>1){
        maxHappiness(0,n,0,a,b,c,maxi);
        maxHappiness(1,n,0,a,b,c,maxi);
        maxHappiness(2,n,0,a,b,c,maxi);
    }
    cout << max(maxi[0][0],max(maxi[0][1],maxi[0][2])) <<endl;
    return 0;
}