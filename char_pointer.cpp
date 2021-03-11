#include <iostream>

using namespace std;

void capital(char *);

int main (int argc, char *argv[]){
    char str[] = "one two tHReeee";       
    //char *str = "one two tHReeee";    // Why not???????/
    cout << "Hello world!!!!!!! \n" << endl;
    
    capital(str);
    cout << str;
}

void capital (char *s){
    while(*s != NULL){
        if (*s++ == ' '){
            *s -= 32;
        }
    }
}