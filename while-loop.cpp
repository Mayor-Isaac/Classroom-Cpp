#include <iostream>
using namespace std;
int main()
{
    char myChar;
    cout << "Enter a character:" << endl;
    cin >> myChar;
    
    while (myChar == "x"){
        cout << "I am a Programmer"<< "Enter a character again: ";
        cin >> myChar;
    }
        return 0;
}