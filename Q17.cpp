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
    char input[1024];
    char output[1024];
    char word[1024];
    char *ptr;
    for(int i=0;i<1024;i++){
        output[i]=0;
    }
    cin.getline(input,1024);
    ptr=input;
    while((ptr=getword(ptr,word))){
        for(int i=0;i<100;i++){
            if((isalpha(word[i]))){  
                if((isupper(word[i]))){  
                    word[i]=tolower(word[i]);  
                }else continue;
            }
        }
        strcat(word," ");
        //cout << word;
        if(strstr(output,word)==NULL){
            //cout <<"1";
            strcat(output,word);
        }
        else{
            //cout <<"2";
            continue;
        }
    }
    int len=strlen(output);
    for(int i=0;i<len-1;i++){
        cout << output[i];
    }
    cout << endl;
}