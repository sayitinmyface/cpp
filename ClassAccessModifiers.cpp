class Box
{
    private:
        double width;
    public:
        double length;
        double getWidth();
        void setWidth(double param_width)
        {
            width = param_width;
        }
        void setLength(double length)
        {
            this -> length = length;
        }
};
double Box::getWidth(){return width;}
#include <iostream>
using namespace std;
int main()
{
    Box BoxSecond;
    BoxSecond.setWidth(10.0);
    double volume = BoxSecond.getWidth()*BoxSecond.length;
    cout << "volume of boxsecond : " << volume << endl;
    return 0;
}