#include <iostream>
#include <cstring>
using namespace std;

void caesar_cipher_encode_str(char *str, int offset){  
    int str_len = strlen(str);  
    int c;  
    int offset1 = offset % 26;   
    for(int i = 0; i < str_len; ++i){
        c = str[i];  
        if(isalpha(c)){  
            if(isupper(c))  
                str[i] = ((c + offset1) - 'A') % 26 + 'A';  
            else  
                str[i] = ((c + offset1) - 'a') % 26 + 'a';  
        }  
        if(isdigit(c)){  
            str[i]=(c+offset-'0')%10+'0';  
        }  
    }  
   
    return;  
}  
   
int main(){  
    int offset;  
    char buf[105];  
   
    cin.getline(buf,105);  
    cin >> offset;  
    caesar_cipher_encode_str(buf,offset);  
    cout << buf << endl;  
   
    return 0;  
}  