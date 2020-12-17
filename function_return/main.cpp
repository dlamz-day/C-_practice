#include <iostream>
#include <iomanip>
#include <time.h>
#include "test.h"

using namespace std;

float cal_area(float, float);
float cal_area(float x, float y){
    float temp_area;
    temp_area = x * y;
    return temp_area;
}

void swap_two(int &, int &);
void swap_two(int &num1, int &num2){
    int temp_num;
    temp_num = num1;
    num1 = num2;
    num2 = temp_num;
}



int main()
{
    cout << "Hello world!" << endl;
    cout << "=========Cal_area and runnint time cal, Program starts!==============" << endl;

    int counter = 0, i;
    for (i=0; i<5; i++)
        counter += counter + 1;   //
    cout << "ans:" << counter << endl;

    float area, START, END;

    START = (double)clock();

    for (i=0; i<1000; i++){
        area = cal_area(18, 9);
        counter += 1;
    }

    cout << "counter = " << counter <<endl;
    cout << "area = " << area <<endl;

    END = (double)clock();

    cout << "START time = " << setw(10) <<(double)START  << "\t" << "END time = " << END << endl;
    cout << "Program running time = " << END - START/1000 << endl;    ///////remember to /1000 to get seconds.

    cout << "=========Swap num, Program starts!==============" << endl;

    int num1 = 50, num2 = 20;
    cout << "before swap, num1 = " << num1 << "\t\t" << "num2 = " << num2 << endl;
    swap_two(num1, num2);
    cout << "after swap, num1 = " << num1 << "\t\t"  <<"num2 = " << num2 << endl;

    int c = 20 ;
    c = degree();
    cout << "c =" << c << endl;

    return 0;
}

