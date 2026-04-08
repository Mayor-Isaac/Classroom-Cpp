#include <iostream>
using namespace std;
int main()
{
    char myChar;
    cout << "Enter a character:" << endl;
    cin >> myChar;
    
    do{
        cout << "I am a Programmer"<< "Enter a character to print the message again: ";
        cin >> myChar;
    } while (myChar == "x");
        return 0;
}