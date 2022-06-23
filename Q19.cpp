#include <iostream>
#include <cstring>
using namespace std;

int main(){      
    int n;
    cin >> n;
    int s,d,cnt=0;
    int dtmp[30]={0};
    int stmp[30]={0};
    for(int i=0;i<n;i++){
        //cout << "i:" << i << endl;
        cin >> s >> d;
        if(cnt==0){
            dtmp[cnt]=d;
            stmp[cnt]=s;
            cnt++;
        }
        else{
            int flag=0;
            for(int i=0;i<cnt;i++){
                //cout << cnt << "cnt" << endl;
                if(s>=dtmp[i]){
                    flag=1;
                    dtmp[i]=d;
                }
                else if(d<=stmp[i]){
                    flag=1;
                    stmp[i]=s;
                }
                else{
                    continue;
                }
            }
            if(flag==0){
                //cout << "flag" << endl;
                dtmp[cnt]=d;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}  