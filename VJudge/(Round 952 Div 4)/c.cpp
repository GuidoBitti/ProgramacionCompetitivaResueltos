#include <bits/stdc++.h>
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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        forn(i,n){
            cin >> a[i];
        }
        unordered_map<ll, bool> nums;
        ll sum=0,sol=0;
        if(a[0]==0) sol++;

        nums[a[0]]=true;
        sum+=a[0];
        forr(i,1,n){
            sum+=a[i];
            nums[a[i]] = true;
            if(nums[sum/2] && sum%2==0) sol ++;
        }
        cout << sol <<'\n';
    }
    return 0;
}