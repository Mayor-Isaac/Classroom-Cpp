/*Pointer in C++ */
#include <iostream>
using name space std;
int main(){
    int var = 5;
    // datatype *pointer;
    int *ip; // pointer to aninteger
    double *dp; //
    float *fp; //
    char *cp; //
    ip = $var;
    cout << "variable value: " << var << endl;
    cout << "Address in pointer: " << ip << endl;
    cout << "Pointer pointing to value: " << *ip << endl;
    *ip = 6;
    cout << "variable value: " << var << endl;
    cout << "Address in pointer: " << ip << endl;
    cout << "Pointer pointing to value: " << *ip << endl;
    return 0;
}