#include <iostream>

using namespace std;


void showArray(int [], int []);

void showArray(int fn_test[], int fn_target[]){
    cout << "=========In the fn \"showArray\" ==============" << endl;
    for (int i=0; i<3; i++){
        cout << "fn_test[ " << i << " ] = " << fn_test[i] << "\t";
        cout << "fn_target[ " << i << " ] = " << fn_target[i] << endl;
    }
}


void modifyArray(int modArr[], int testArr[]);

void modifyArray(int modArr[], int testArr[]){
    cout << "=========In the fn \"modifyArray\" ==============" << endl;
    int j = 0;
    for (int i=0; i<3; i++){
            modArr[i] = j;
            testArr[i] = j;
            cout << "modArr[ " << i << " ] = " << modArr[i] << "\t";
            cout << "testArr [ " << i << " ] = " << testArr[i]  << endl;
        j += 2;
    }
}


int main()
{
    cout << "Hello world!" << endl;
    cout << "=========array, fn called by array name, Program starts!==============" << endl;
    int arr_test[3] = {1, 3, 5};
    int arr_target[3] = {2, 4, 6};
    for (int i=0; i<3; i++){
        cout << "arr_test[ " << i << " ] = " << arr_test[i] << "\t";
        cout << "arr_target[ " << i << " ] = " << arr_target[i] << endl;
    }

    showArray(arr_test, arr_target);

    cout << "==============after showArray " << endl;

    for (int i=0; i<3; i++){
        cout << "arr_test[ " << i << " ] = " << arr_test[i] << "\t";
        cout << "arr_target[ " << i << " ] = " << arr_target[i] << endl;
    }

    modifyArray(arr_test, arr_target);

    cout << "==============after modifyArray " << endl;

    for (int i=0; i<3; i++){
        cout << "arr_test[ " << i << " ] = " << arr_test[i] << "\t";
        cout << "arr_target[ " << i << " ] = " << arr_target[i] << endl;
    }


    return 0;
}
