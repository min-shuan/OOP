#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(){  
    int m,d;  
    cin >> m >> d;  
    if(m==1){  
        if(d<21){  
            cout << "Capricorn" << endl;
        }  
        else{  
            cout << "Aquarius" << endl;
        }  
    }  
    else if(m==2){  
        if(d<19){  
            cout << "Aquarius" << endl;
        }  
        else{  
            cout << "Pisces" << endl;
        }  
    }  
    else if(m==3){  
        if(d<21){  
            cout << "Pisces" << endl;
        }  
        else{  
            cout << "Aries" << endl;  
        }  
    }  
    else if(m==4){  
        if(d<21){  
            cout << "Aries" << endl;  
        }  
        else{  
            cout << "Taurus" << endl;  
        }  
    }  
    else if(m==5){  
        if(d<22){  
            cout << "Taurus" << endl;
        }  
        else{  
            cout << "Gemini" << endl;  
        }  
    }  
    else if(m==6){  
        if(d<22){  
            cout << "Gemini" << endl;  
        }  
        else{  
            cout << "Cancer" << endl;  
        }  
    }  
    else if(m==7){  
        if(d<23){  
            cout << "Cancer" << endl;  
        }  
        else{  
            cout <<"Leo" << endl;  
        }  
    }  
    else if(m==8){  
        if(d<24){  
            cout <<"Leo" << endl;  
        }  
        else{  
            cout << "Virgo" << endl;  
        }  
    }  
    else if(m==9){  
        if(d<24){  
            cout << "Virgo" << endl;  
        }  
        else{  
            cout << "Libra"<< endl;  
        }  
    }  
    else if(m==10){  
        if(d<24){  
            cout << "Libra"<< endl;  
        }  
        else{  
            cout << "Scorpio" << endl;  
        }  
    }  
    else if(m==11){  
        if(d<23){  
            cout << "Scorpio" << endl;  
        }  
        else{  
            cout << "Sagittarius" << endl;  
        }  
    }     
    else if(m==12){  
        if(d<22){  
            cout << "Sagittarius" << endl;  
        }  
        else{  
            cout << "Capricorn" << endl;  
        }  
    }  
      
}  