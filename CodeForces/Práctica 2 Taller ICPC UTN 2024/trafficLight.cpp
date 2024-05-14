#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;

    cin >> t;

    for(int cases = 0; cases < t; cases++){
        long int n;
        char c;
        string s;
        cin >> n >> c >> s;

        if(c=='g'){
            cout << 0 << endl;
        }else{
            long int firstG=-1,i=0,max=0;
            while(i<n){
                if(firstG==-1 & s[i]=='g'){
                    firstG=i;
                }
                if(s[i]==c){
                    long int start=i;
                    while(i<n & s[i]!='g'){
                        i++;
                    }
                    if(firstG==-1 & s[i]=='g'){
                        firstG=i;
                    }
                    if(i==n){
                        if(i-start+firstG>max){
                            max = i-start+firstG;  
                        }
                    }else{
                        if(i-start>max){
                            max = i-start;
                        }
                    }
                }else{
                    i++;
                }
            }
            cout << max << endl;
        }

    }

    return 0;
}