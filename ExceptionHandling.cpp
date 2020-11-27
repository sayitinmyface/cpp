#include <iostream>
using namespace std;

double division(int a,int b){
    int result = 0;
    try
    {
        if(b==0){
                // throw "division by zero11";
        }
        result = a/b;
    }
    catch(const char* msg)
    {
        cout << "exception caught : " << msg << endl;
    }catch(exception msg){
        cout << "caught in main() : " << msg.what() << endl;
    }
    return result;
    
}

int main(){
    int first =234,second=0;
    try
    {
        double third = division(first,second);
        cout << "Exception caught in try third: " << third << endl;
        return -1;
    }
    catch(const std::exception msg)
    {
        cout << "exception caught in main() : " << msg.what() << endl;
    }
    return 0;
}