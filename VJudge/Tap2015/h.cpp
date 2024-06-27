
#include <bits/stdc++.h>
#include <string>
using namespace std;
// g++ -std=c++20 -02 -wall template.cpp -o template
 
#define forr(i,a,b) for(int i=(int)a ; i<(int)b ; i++)
#define forn(i, n) for(int i = 0; i < n; i ++)
#define all(x) (x).begin(),(x).end()
#define fst first
#define snd second
#define pb(x) push_back(x)
typedef long long ll;
typedef pair<int,int> ii;
const int MAXN = -1;
const double EPS = 1e-9;
 
int main(){
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    string ms;
    while(cin >> n){
        int m, cont=0;
        while( n != 0){
            ms = to_string(n);
            sort(all(ms));
            m = stoi(ms, 0, 10);
            n = n - m;
            cont++;
        }
        cout << cont << '\n';
    }

    return 0;
}