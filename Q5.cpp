#include <iostream>
#include <cstring>
using namespace std;

int main(){      
    int n;
    int output[8]={0};
    cin >> n;
    int x=abs(n);
    for(int i=0;i<8;i++){
        if(x%2==1){
            output[i]=1;
            x=x/2;
        }
        else{
            output[i]=0;
            x=x/2;
        }
    }
    if(n<0){
        for(int i=0;i<8;i++){
            if(output[i]==1){
                output[i]=0;
            }
            else if(output[i]==0){
                output[i]=1;
            }
        }
        for(int i=0;i<8;i++){
            if(output[i]==0){
                output[i]=1;
                break;
            }
            else output[i]=0;
        }
    }
    for(int i=7;i>=0;i--){
        cout << output[i];
    }
    cout << endl;
}  