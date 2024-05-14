#include <iostream>
#include <vector>
#include <math.h>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;

ll maxP(ll x,ll y, ll h, ll w, vector<string>& a,vector<vector<ll>>& sol,ll mod){
    if(x==w-1 && y==h-1){
        sol[y][x] = 1;
        return sol[y][x];
    }
    if(sol[y][x]!=-1){
        return sol[y][x];
    }
    ll total =0;
    if(x+1<w && a[y][x+1]!='#'){
        total += maxP(x+1,y,h,w,a,sol,mod);
        total %=mod;
    }
    if(y+1<h && a[y+1][x]!='#' ){
        total += maxP(x,y+1,h,w,a,sol,mod);
        total %=mod;
    }
    sol[y][x]=total;
    return sol[y][x];
}


int main(){
    ll h,w;
    cin >> h >> w;

    vector<string> a(h);
    vector<ll> row(w,-1);
    vector<vector<ll>> sol(h,row);

    for0(i,h){
        cin >> a[i];
    }
    ll mod = 1000000007;
    cout << maxP(0,0,h,w,a,sol,mod)<< endl;
    return 0;
}