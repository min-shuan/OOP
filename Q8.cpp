#include<iostream>
using namespace std;

int main(){  
    int n,state=0;  
    cin >> n;  
    for(int i=2;i<=n/2;i++){  
        if(n%i==0){  
            state=1;  
            break;  
        }  
        else{  
            continue;  
        }  
    }  
    if(state==1){  
        cout << "NO" << endl;  
    }  
    else{  
        cout << "YES" << endl;  
    }  
}  