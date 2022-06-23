#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

char *getword(char *text, char *word){      
    char *ptr=text, *qtr=word;      
    while((*ptr)&&(isspace(*ptr))){      
        ptr++;      
    }      
    while((*ptr)&&(!isspace(*ptr))){      
        *qtr++=*ptr++;      
    }      
    *qtr='\0';      
    if(word[0]==0){      
        return NULL;      
    }      
    else{      
        return ptr;      
    }      
}

int main(){
    int n;
    char input[61];
    char word[1024];
    char *ptr;
    int a[30]={0},b[30]={0};
    int result[31];
    int flag=0,carry=0;
    int idxa=29,idxb=29,idx=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin.getline(input,61);
        ptr=input;
        while((ptr=getword(ptr,word))){
            if(word[idx]==' '){
                cout << "space" << endl;
                flag=1;
                continue;
            }
            else if(flag==0){
                a[idxa]=word[idx]-'0';
                idxa--;
            }
            else{
                b[idxb]=word[idx]-'0';
                idxb--;
            }
            idx++;
        }
        for(int j=29;j>=0;j--){
            if(a[j]+b[j]+carry<10){
                result[j]=a[j]+b[j]+carry;
                carry=0;
            }
            else{
                result[j]=a[j]+b[j]+carry-10;
                carry=1;
            }
        }
        for(int j=0;j<31;j++){
            if(result[j]!=0){
                idx=j;
                break;
            }
        }
        for(int j=idx;j<31;j++){
            cout << result[j];
        }
        cout << endl;
    }
}