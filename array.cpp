#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    double arr1[5];
    arr1[0] = 1.456;
    arr1[1] = 36.765;

    char myarr[4];
    myarr[0] = "a";

    int temp_arr[5];

    cout << "Enter 5 integer variables" << endl;
    for (int i = 0; i < 5; i++){
        cin >> temp_arr[i];
    }
    cout << "The numbers you entered are:" << endl;
    for (int i = 0; i < 5; i++){
        cout <<temp_arr[i]<< endl;
    }

        return 0;
}