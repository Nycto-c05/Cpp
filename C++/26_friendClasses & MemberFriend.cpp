#include <iostream>
using namespace std;

// Forward Declaration of class complex
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    // The class complex isnt defined yet, so give a forward declaration
    /*Even when the class is declared forward, it dosent know if it will have a,b attributes with its obj
    Hence we will make a prototype which declares forward*/

    // int sumRealComplex(Complex o1, Complex o2)

    // {
    //     return o1.a + o2.a;
    //     // Returning the private var of another class
    // }

    // Instead prototype
    int sumRealComplex(Complex, Complex);
    int sumImaginaryComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Defining a friend class member function which will have access to this class private/public var
    friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    friend int Calculator ::sumImaginaryComplex(Complex o1, Complex o2);//Giving obj o1 o2 optional
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumImaginaryComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout << "sum of real part : "<<result << "\n";
    
    int iResult = calc.sumImaginaryComplex(o1,o2);
    cout<< "Sum of imaginary part: "<<iResult<<"\n";

    return 0;
}




//instead of making few function of other class as friend
//make the entire class a friend, so we can access all the methods of that class

#include <iostream>
using namespace std;

// Forward Declaration of class complex
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

   
    // Instead prototype
    int sumRealComplex(Complex, Complex);
    int sumImaginaryComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    friend class Calculator;//Declaring the entire class as friend class
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumImaginaryComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout << "sum of real part : "<<result << "\n";
    
    int iResult = calc.sumImaginaryComplex(o1,o2);
    cout<< "Sum of imaginary part: "<<iResult<<"\n";

    return 0;
}
