#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(){  
    int n;  
    int a,b,c;  
    cin >> n;  
    for(int i=0;i<n;i++){  
        cin >> a >> b >> c;  
        if(a<60&&b<60&&c<60){  
            cout << "F" << endl;  
        }  
        else if(a>=60&&b>=60&&c>=60){  
            cout << "P" << endl;
        }  
        else if(a<60&&b>=60&&c>=60&&a+b+c>=220){  
            cout << "P" << endl;
        }  
        else if(b<60&&a>=60&&c>=60&&a+b+c>=220){  
            cout << "P" << endl;
        }  
        else if(c<60&&b>=60&&a>=60&&a+b+c>=220){  
            cout << "P" << endl;
        }  
        else if(a<60&&(c>=80||b>=80)){  
            cout << "M" << endl;
        }  
        else if(b<60&&(c>=80||a>=80)){  
            cout << "M" << endl;
        }  
        else if(c<60&&(b>=80||a>=80)){  
            cout << "M" << endl;
        }  
        else if(a<60&&b<60&&c<80){  
            cout << "F" << endl;
        }  
        else if(c<60&&b<60&&a<80){  
            cout << "F" << endl;
        }  
        else if(a<60&&c<60&&b<80){  
            cout << "F" << endl;
        }  
        else if(a<60&&b>=60&&c>=60&&a+b+c<220){
            cout << "M" << endl;
        }  
        else if(b<60&&a>=60&&c>=60&&a+b+c<220){
            cout << "M" << endl;
        }  
        else if(c<60&&b>=60&&a>=60&&a+b+c<220){
            cout << "M" << endl;
        }  
    }  
}  