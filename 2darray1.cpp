#include <iostream>
using namespace std;

int main()
{
    int A[2][2], B[2][2], addition[2][2], subtraction[2][2];

    cout << "Enter values of 2-D array A:" << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << A[i][j];
    }
}

    cout << "Enter values of 2-D array B:" << endl;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << B[i][j];
    }
}

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            addition[i][j] = A[i][j]+B[i][j];
    }
}
   
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            subtraction[i][j] = A[i][j]-B[i][j];
    }
}

    cout << "Values of Addition array are:" << endl;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << addition[i][j];
    }
}
    cout << "Values of subtraction array are:" << endl;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << subtraction[i][j];
    }
}
   

    return 0;
}