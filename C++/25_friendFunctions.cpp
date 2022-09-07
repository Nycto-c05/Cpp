#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    friend Complex sumComplex(Complex, Complex);
    // a friends function defined outside class can access the class private members
    // here we defined sumComplex as the friend Funtion, and we made its prototype

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// make a function outside class w/o which returns the user defind data type Complex
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3; // obj of class
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    // using the private var of class despite not being a class member
    return o3;
}

int main()
{

    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}


/*
-A friend function isnt a member of the class it has access to
-Hence a friend fucntion cant be called by using obj.friendFunction
-Can be invoked w/o an obj
-Usually contains the object of a class
-It can be declared within public or private part of a class
-Cant acess members directly by their names, and need to use obj_name.a to access it like in above code


*/