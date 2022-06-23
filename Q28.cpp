#include <iostream>
using namespace std;

int main(){
    int input[4][9]={0};
    for(int i=0;i<4;i++){
        cin >> input[i];
    }
    int n;
    cin >> n;
    int bill[7];
    int cnt[8]={0};
    unsigned long int sum=0;
    int flag=0;
    for(int i=0;i<n;i++){
        cin << bill;
        for(k=7;k>=0;k++){
            if(bill[i]!=input[0][k]){
                break;
                flag=0;
            }
            else flag=1;
        }
        if(flag==1){
            sum=sum+2000000;
            cnt[0]=cnt[0]+1;
        }
        for(int j=1;j<4;j++){
            for(int k=7;k>=;k--){
                if(bill[i]==input[j][k]){
                    continue;
                }
                else if(bill[i]!=input[j][k]){
                    if(i<3) break;
                    else if(i==3){
                        sum=sum+200;
                        cnt[6]=cnt[6]+1;
                        break;
                    }
                    else if(i==4){
                        sum=sum+1000;
                        cnt[5]=cnt[5]+1;
                        break;
                    }
                    else if(i==5){
                        sum=sum+4000;
                        cnt[4]=cnt[4]+1;
                        break;
                    }
                    else if(i==6){
                        sum=sum+10000;
                        cnt[3]=cnt[3]+1;
                        break;
                    }
                    else if(i==7){
                        sum=sum+40000;
                        cnt[2]=cnt[2]+1;
                        break;
                    }
                }
                else if(bill[i]==input[j][k] && i==7){
                    sum=sum+200000;
                    cnt[1]=cnt[1]+1;
                }
            }
        }
    }
    for(int i=0;i<6;i++){
        cout << cnt[i] << " " << endl;
    }
    cout << cnt[6] << endl;
    cout << sum << endl;
}