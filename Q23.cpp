#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

char *getword(char *text, char *word){      
    char *ptr=text, *qtr=word;      
    while((*ptr)&&(ispunct(*ptr))){      
        ptr++;      
    }      
    while((*ptr)&&(!ispunct(*ptr))){      
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
    int n,a1,a2,a3;
    char str[100];
    cin.getline(str,100);
    char *ptr;
    char word[1000];
    ptr=str;
    ptr=getword(ptr,word);
    n=stoi(word);
    ptr=getword(ptr,word);
    a1=stoi(word);
    ptr=getword(ptr,word);
    a2=stoi(word);
    ptr=getword(ptr,word);
    a3=stoi(word);
    
    int tot=a1*15+a2*20+a3*30;  
    if(tot>n){  
        cout << "0" << endl;  
    }  
    else{  
        tot=n-tot;  
        int a=tot/50;  
        tot=tot%50;  
        int b=tot/5;  
        int c=tot%5;  
        cout << c << ",";  
        cout << b << ","; 
        cout << a << endl; 
    }  
}  