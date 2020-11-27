#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
class Stack{
    private:
        vector<T> elements;
    public:
        void push(const T);
        T top();
};
template <class T> 
void Stack<T>::push(const T element){
    elements.push_back(element);
}
template <class T> 
T Stack<T>::top(){
    return elements.back();
}
int main(){
    Stack<int> intStack;
    Stack<string> stringStack;
    intStack.push(99999);
    intStack.push(1085676);
    cout << intStack.top() << endl;
    stringStack.push("shshshsh");
    cout << stringStack.top() << endl;
    return 0;
}


