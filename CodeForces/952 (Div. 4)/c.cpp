#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

#define forr(i,a,b) for(long long int i=a; i<b; i++)
#define for0(i,n) forr(i,0,n)


typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        ll a[n],sum=0,sol=0;
        unordered_map<ll, bool> nums;
        for0(i,n){
            cin >> a[i];
        }

        if(a[0]==0) sol++;

        nums[a[0]]=true;
        sum+=a[0];
        forr(i,1,n){
            sum+=a[i];
            nums[a[i]] = true;
            if(nums[sum/2] && sum%2==0) sol ++;
        }

        cout << sol << endl;

    }
    return 0;
}