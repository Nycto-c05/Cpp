#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){
        a = 0;
        b =0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }

  

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
/*
COnstructor overloading is similar to function overloading
If a class has multiple constructors, the compiler will invoke that constrctor which 
matches the data type and the no. of args passed during instanciation
*/

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
