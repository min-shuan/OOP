#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(){
    float n;  
    float max,min;  
    cin >> n;  
    max=n;  
    min=n;  
    for(int i=0;i<9;i++){  
        cin >> n;  
        if(n>max){  
            max=n;  
        }  
        if(n<min){  
            min=n;  
        }  
    }  
    cout << "maximum:" << fixed << setprecision(2)<< max << endl;  
    cout << "minimum:" << fixed << setprecision(2) << min << endl; 
}