#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;

    cin >> t;

    for(int cases = 0; cases < t; cases++){
        long long int n,s;

        cin >> n >> s;
        vector<long long int> a(n);
        long long int total=0,b;
        for(int i = 0; i <n ; i++){
            cin >> b;
            if(b==1){
                a[total]=i+1;
                total ++;
            }
        }
        a.erase(a.begin()+total, a.end());

        if(total<s){
            cout << -1 << endl;
        }else{
            long long int sumI=0,sumD=0,izq=0,der=total-1;
            bool equal=false;
            while(total>s){
                if(a[izq]-sumI>n+1-a[der]-sumD){
                    sumD=n+1-a[der];
                    der--;
                }else{
                    if(a[izq]-sumI==n+1-a[der]-sumD){
                        long long int j=1;
                        while(izq+j<der-j && a[izq+j]-sumI==n+1-a[der-j]-sumD){
                            j++;
                        }
                        if(izq+j>=der-j){
                            if(equal){
                                sumI=a[izq];
                                izq++;
                                equal=false;
                            }else{
                                sumD=n+1-a[der];
                                der--;
                                equal=true;
                            }
                        }else if(a[izq+j]-sumI>n+1-a[der-j]-sumD){
                            sumD=n+1-a[der];
                            der--;
                        }else{
                            sumI=a[izq];
                            izq++;
                        }
                    }else{
                        sumI=a[izq];
                        izq++;
                    }
                }
                total--;
            }
            cout << sumD+sumI << endl;
        }
    }

    return 0;
}