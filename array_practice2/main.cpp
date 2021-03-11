




#include <iostream>

using namespace std;

// This program is to copy and show the array by call another new function
// which contains 1.copy old array to new array 2.print the new array.

//////=====================
//void showArray (int [], int[]);
//
//void showArray(int arr1[], int arr2[]){
//    cout << "========Here is the start of showArray fn. ================" << endl;
//    int arr1_cpy[3];
//    int arr2_cpy[4];
//    cout << (sizeof(arr1)/sizeof(arr1[0]) ) <<endl;
//    cout << "arr1 = " << arr1 <<endl;
//    for (int i=0; i<3; i++){
//        arr1_cpy[i] = arr1[i];
//        cout << "arr1_cpy [" << i << "] = " << arr1_cpy[i] << endl;
//    }
//
//}


int main()
{
    cout << "Hello world!" << endl;
//
//    int sample_arr1[3] = {1, 5, 11};
//    cout << "sample_arr1 = " << sizeof(sample_arr1) << endl;
//    cout << "&&sample_arr1 = " << &sample_arr1 << "____" << &sample_arr1[1] <<"____" << endl;
//    int sample_arr2[4] = {6, 153, 232, 121};
//    showArray(sample_arr1, sample_arr2);


    cout << "=====Below is dynamic RAM allocation====" << endl;

    int num_int = 0;
    for (int k=0; k<5 ; k++){
        num_int += k;
        cout << "Now the sum from 0 to " << k << " = " << num_int <<endl;
    }

    int* num1 = new int(num_int);
    cout << " *num1 = " << *num1 << endl;
    delete num1;

    int* dy_arr1 = new int(5);
    for (int j=0; j<5; j++){
        dy_arr1[j] = j;
        cout << "dy_arr1[j] = " << dy_arr1[j] << endl;
    }
    delete dy_arr1;







    return 0;
}
