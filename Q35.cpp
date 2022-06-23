#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(){  
    int n;  
    int t,m,k;  
      
    cin >> n;  
    for(int i=0;i<n;i++){  
        int sum=0;  
        cin >> t >> m >> k;  
        int p[100];  
        for(int j=0;j<k;j++){  
            p[j]='\0';  
            cin >> p[j];  
        }  
        for(int j=0;j<k;j++){  
            for(int f=0;f<k-1-j;f++){  
                if(p[f]>p[f+1]){  
                    int tmp=p[f];  
                    p[f]=p[f+1];  
                    p[f+1]=tmp;  
                }  
            }  
        }  
        for(int j=0;j<m;j++){  
            sum=sum+p[j];  
        }  
        if(sum<=t){  
            cout << sum << endl;  
        }  
        else if(sum>t){  
            cout << "Impossible" << endl;  
        }  
    }  
}  