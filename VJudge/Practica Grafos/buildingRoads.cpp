#include <iostream>
#include <vector>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;

vector<vector<ll>> roads(100001);
vector<ll> colored(100001,-1);

void dfs(ll i,ll cc){
    if(colored[i]!=-1) return;
    colored[i]=cc;

    for(auto u:roads[i]){
        dfs(u,cc);
    }
}

int main(){
    ll n,m,c1,c2;
    cin >> n >> m;

    for0(i,m){
        cin>> c1 >> c2;
        roads[c1-1].push_back(c2-1);
        roads[c2-1].push_back(c1-1);
    }

    ll cc=0,lastC=-1;
    vector<ll> sol;

    for0(i,n){
        if(colored[i]==-1){
            dfs(i,cc);
            if(lastC!=-1){
                sol.push_back(lastC);
                sol.push_back(i+1);
            }
            lastC=i+1;
            cc++;
        }
    }


    
    cout << cc-1 <<endl;
    for(int i=0;i<cc*2-2;i+=2){
        cout << sol[i] << " " << sol[i+1] << endl;
    }
    return 0;
}