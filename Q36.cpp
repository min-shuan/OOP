#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(){  
    int n;  
    cin >> n;  
    if(n%4==0){  
        if(n%100==0){  
            if(n%400==0){  
                cout << "Bissextile Year" << endl;  
            }  
            else{  
                cout << "Common Year" << endl;  
            }  
        }  
        else{  
            cout << "Bissextile Year" << endl;
        }  
    }  
    else{  
        cout << "Common Year" << endl;  
    }  
}  