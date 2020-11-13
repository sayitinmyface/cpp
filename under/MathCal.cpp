#include <iostream>
using namespace std;
// 
namespace math_space{
    int result;
    int add(int x,int y){
        result = x+y;
        cout << "+addtion result : " << result << endl;
        return result;
    }

    int sub(int x,int y){
        result = x-y;
        cout << "+subtraction result : " << result << endl;
        return result;
    }

    int multi(int x,int y){
        result = x*y;
        cout << "+multiplication result : " << result << endl;
        return result;
    }

    int div(int x,int y){
        result = x/y;
        cout << "+division result : " << result << endl;
        return result;
    }
}
// 
namespace cout_space{
    char funcQuestion(){
        char answer;
        cout << "Do you want to continue the calculation ? ";
        cin >> answer;
        return answer;
    }
    // 
    void funcCoutEnd(){
        cout << "end the calculation!" << endl;
    }
}
// 
void calculate(){
    int x, y ,result;
    char answer;
    while (true)
    {   
        // 
        cout << "input x : " ;
        cin >> x;
        cout << "input y : ";
        cin >> y;
        // 
        cout << "=====================================" << endl;
        math_space::add(x,y);
        math_space::sub(x,y);
        math_space::multi(x,y);
        math_space::div(x,y);
        cout << "=====================================" << endl;
        // 
        answer = cout_space::funcQuestion();            
        // 
        if (answer=='N')
        {
            cout_space::funcCoutEnd();
            break;
        }
    }
}

