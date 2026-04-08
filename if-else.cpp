#include <iostream>
using namespace std;
int main()
{
    cout << "Please Enter a number";
    int x;
    cin >> x;
    
    if(x<0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "Positive";
    }

    return 0;
}