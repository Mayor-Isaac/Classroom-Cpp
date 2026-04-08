#include <iostream>
using namespace std;

int main()
{
    int A[3];
    int B[3];
    add[3], sub[3], mul[3];

    cout << "Enter 3 integer for array A:" << endl;
    for (int i = 0; i < 3; i++){
        cin >> A[i];
    }

    cout << "Enter 3 integer for array B:" << endl;
    for (int i = 0; i < 3; i++){
        cin >> B[i];
    }

    cout << "Addition of A and B is:" << endl;
    for (int i = 0; i < 3; i++){
        add[i] = A[i] + B[i];
        cout << add[i] << " ";
    }

    cout << "Multiplication of A and B is:" << endl;
    for (int i = 0; i < 3; i++){
        mul[i] = A[i] * B[i];
        cout << mul[i] << " ";
    }

    cout << "Subtraction of A and B is:" << endl;
    for (int i = 0; i < 3; i++){
        sub[i] = A[i] - B[i];
        cout << sub[i] << " ";
    }

    return 0;
}