#include <iostream>

using namespace std;


struct Pubinfo{ 
	struct PubDate;
    char author [40];
    char title [20];
 };
struct PubDate{ 
    int Year; 
    int Month;  
    int Day;
};

int main (int argc, char *argv[]){
    cout << "Hello world!!!!!!! \n" << endl;
    
	Pubinfo booklist[2];
    Pubinfo * Pbooklist = &booklist[0];
    // cin.getline( (*Pbooklist).author, 30);  // char 除非一開始就定義其值，否則要用getline不能用assign值。
    cin.getline( Pbooklist->author, 30);  // same effect as above one.
    cout << "*(Pbooklist).author = Pbooklist->author = " << Pbooklist->author << endl;

    // char rain[20] = "nnnnnnn3";

    // cin.getline(rain, 20);  // modified the original rain[20];
    // //rain[20] = 'nnnn';    // error!!

    // cout << rain << endl;
}