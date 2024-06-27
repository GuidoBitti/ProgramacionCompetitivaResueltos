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
        string s1,s2,s3;
        cin >> s1 >> s2 >> s3;
        int sol=0;
        forn(i,3){
            if(s1[i]=='?'){
                if(s2[i]=='A'||s3[i]=='A')sol+=1;
                if(s2[i]=='B'||s3[i]=='B')sol+=2;
                if(s2[i]=='C'||s3[i]=='C')sol+=3;
            }
            if(s2[i]=='?'){
                if(s1[i]=='A'||s3[i]=='A')sol+=1;
                if(s1[i]=='B'||s3[i]=='B')sol+=2;
                if(s1[i]=='C'||s3[i]=='C')sol+=3;
            }
            if(s3[i]=='?'){
                if(s2[i]=='A'||s1[i]=='A')sol+=1;
                if(s2[i]=='B'||s1[i]=='B')sol+=2;
                if(s2[i]=='C'||s1[i]=='C')sol+=3;
            }
        }
        if(sol==3) cout<< 'C'<< '\n';
        if(sol==5) cout<< 'A'<< '\n';
        if(sol==4) cout<< 'B'<< '\n';
    }
    return 0;
}