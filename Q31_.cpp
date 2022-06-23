#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;


int main(){

    int n;
    int num[2][11]={0};
    int idx=0;
    while(cin >> n){
        cout << n << endl;
        idx++;
        if(n==-38){
            break;
        }
        for(int j=0;j<11;j++){
            if(idx==1){
                num[0][j]=n;
                num[1][j]=1;
            }
            else{
                if(n==num[0][j]){
                    num[1][j]++;
                }
                else{
                    num[0][j]=n;
                    num[1][j]=1;
                }
            }
        }
    }
    for(int i=0;i<idx;i++){
        if(num[1][i]>=idx/2){
            cout << num[0][i] << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}