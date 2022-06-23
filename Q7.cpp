#include <iostream>
#include <cstring>
using namespace std;

int main(){      
    int n;
    cin >> n;
    char cmd;
    int a1,b1,a2,b2;
    for(int i=0;i<n;i++){
        cin >> cmd >> a1 >> b1 >>a2 >> b2;
        if(cmd=='+'){
            cout << a1+a2 << " " << b1+b2 << endl;
        }
        else if(cmd=='-'){
            cout << a1-a2 << " " << b1-b2 << endl;
        }
        else if(cmd=='*'){
            int solid,vir;
            solid=a1*a2-b1*b2;
            vir=a2*b1+a1*b2;
            cout << solid << " " << vir << endl;
        }
    }
    
}  