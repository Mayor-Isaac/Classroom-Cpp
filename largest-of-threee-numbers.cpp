#include <iostream>
using namespace std;

int main()
{
    cout < "The largest of 3 numbers program" << endl;
    int x;
    int y;
    int z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    if (x>y){
        if(x>z)
        {
            cout <<x<< "is the greatest number"<<endl;
        }else{
             cout <<z<< "is the greatest number"<<endl;
        }
    }
    else if (y>z){
         cout <<y<< "is the greatest number"<<endl;
    }
    else{
        cout <<z<< "is the greatest number"<<endl;
    }

    return 0;
}