#include <iostream>
using namespace std;
class Line
{
    private:
        double length;
    public:
        void setLength(double len);
        double getLength(void);
        Line();
        Line(double len);
        ~Line();
};
Line::Line()
{
    cout << "created" << endl;
}
Line::Line(double len)
{
    cout << "created length" << len <<  endl;
    length = len;
}
Line::~Line()
{
    cout << "object is being deleted" << endl;
}
void Line::setLength(double len){length = len;}
double Line::getLength(void){return length;}
int main(){
    Line lineFirst;
    lineFirst.setLength(2.0);
    cout << "length of lineFirst : " < lineFirst.getLength() << endl;
    Line lineSecond(10.0);
    cout << "length of lineSecond : " < lineSecond.getLength() << endl;
    lineFirst.~Line();
    lineSecond.~Line();
    return 0;
}