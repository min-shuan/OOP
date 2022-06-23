#include<iostream>
using namespace std;

int main(){  
    int n,m;  
    cin >> n >> m;  
    int input[1024][1024];     
    for(int i=0;i<n;i++){    
        for(int j=0;j<m;j++){    
            cin >> input[i][j];    
        }    
    }    
    for(int i=0;i<m;i++){    
        for(int j=0;j<n-1;j++){    
            cout << input[j][i] << " ";    
        }  
        cout << input[n-1][i] << endl;  
    }    
}  