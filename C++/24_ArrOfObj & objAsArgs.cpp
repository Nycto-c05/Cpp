#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter Id of employee : ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{

    Employee fb[4]; // Array of objects declared

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}

// objects as function args
#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int real, int imaginary)
    {
        a = real;
        b = imaginary;
    }

    void setDataBySum(complex n1, complex n2) // passing obj of class complex
    {
        // adding real w/ real and i w/ i
        a = n1.a + n2.a;
        b = n1.b + n2.b;
    }
    void printNumber()
    {
        cout << "Addition of 2 complex nos above is " << a << " + " << b << 'i' << endl;
    }
};

int main()
{

    complex c1, c2, c3;

    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}