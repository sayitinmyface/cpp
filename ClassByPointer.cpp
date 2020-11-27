#include <iostream>
using namespace std;
class Box
{
    private:
        double a,b,c;
    public:
        Box(double a=1.1,double b=10.2,double c=2.3){
            this->a=a;
            this->b=b;
            this->c=c;
        }
        ~Box();
        double getVolume(){return a*b*c;}
};
int main(void){
    Box Box1(2.2,3.3);
    Box Box2(2.3,3.1,33.1);
    Box* ptrBox = &Box1;
    cout << "get1" << ptrBox->getVolume() << endl;
    ptrBox = &Box2;
    cout << "get2" << ptrBox->getVolume() << endl;
    return 0;
}