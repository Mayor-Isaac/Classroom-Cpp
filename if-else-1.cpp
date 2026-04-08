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
    else if(x>0)
    {
        cout << "Positive";
    }
    else
    {
        cout << "The number is 0";
    }

    return 0;
}