#include<iostream>
#include<cstring>
using namespace std;

int palindrome(char *str){  
    int str_len=strlen(str);  
    int is_palindrome=1;  
    for(int i=0,j=str_len-1;i<str_len/2;i++,j--){  
            if(str[i]!=str[j]){  
                is_palindrome=0;  
                break;  
            }
    }
    return is_palindrome;  
}

int main(){  
    char n[10];
    cin >> n ;  
    int test;  
    test=palindrome(n);  
    if(test==1){  
        cout<< "YES" <<endl;  
    }  
    else{  
        cout << "NO" << endl;  
    }  
}  