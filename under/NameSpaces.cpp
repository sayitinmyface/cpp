#include <iostream>
using namespace std;

namespace first_space{
    void func(){
        cout << "inside first space" << endl;
    }
}

namespace second_space{
    void func(){
        cout << "inside second space" << endl;
    }
}

void funcOutside()
{
    cout << "funcOutside" << endl;
}