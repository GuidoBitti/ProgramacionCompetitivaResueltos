#include <iostream>
#include <vector>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;

int maxP(vector<ll>& sol,vector<vector<ll>>& p,ll x){
    if(p[x].size()==0){
        sol[x]=0;
        return 0;
    }
    if(sol[x]!=-1){
        return sol[x]+1;    
    }else{
        ll max=0;
        for(ll y:p[x]){
            if(maxP(sol,p,y-1)>max){
                max=sol[y-1];
            }
        }
        sol[x]=max+1;
        return sol[x];
    }
}

int main(){
    ll n,m,ni,mi;
    cin >> n>>m;
    vector<ll> sol(n,-1);
    vector<vector<ll>> p(n);
    for0(i,m){
        cin>>ni>>mi;
        p[ni-1].push_back(mi);
    }
    ll max=0;
    for0(i,n){
        if(maxP(sol,p,i)>max) max=sol[i];
    }

    cout << max << endl;

    return 0;
}