#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(){     
    int w,n;  
    while(cin >> w >> n){  
        if(n==1){  
            cout << fixed << setprecision(1)<< (w-80)*0.7 << endl;
        }  
        else if(n==2){
            cout << fixed << setprecision(1)<< (w-70)*0.6 << endl;
        }  
    }
  
}  