/*

 // Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

NOTE:
    -The visibility mode is private by default
    -Public Visibility Mode: Public members of the base class becomes Public members of the derived class
    -Private Visibility Mode: Public members of the base class become private members of the derived class
    -Private memebers of a class are never inherited
*/

#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;

    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){}//the derived calss calls the base class constructor too
    //hence make an empty constructor

};

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee e1(1), e2(2);
    cout << e1.salary << endl;//can access the members directly cuz its public
    cout << e2.salary << endl;

    Programmer p1(10);
    cout << p1.languageCode << endl;
    cout << p1.id << endl;
    p1.getData();

    return 0;
}

