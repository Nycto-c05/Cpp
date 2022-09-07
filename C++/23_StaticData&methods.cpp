// STATIC VAR

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // This count will get refreshed each time a new obj is made.
    // To retain this changes, we declare static to make the changes persistent thru each instance

public:
    void setData(void)
    {
        cout << "ENter ID no : " << endl;

        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "ID no is:" << endl;

        cout << id << endl;
        cout << "Count is " << count << endl;
    }

    static void getcount(void)
    {
        
//Static function can only interact with other static data members and functions   
        cout << "the value of count is " << count << endl;
        // cout << "the value of count is " << id << endl;   HEnce this  would throw error as 'id' isnt static var 
    }
};

int Employee ::count = 100; // uses this static var thru each instance.
// static count is 0 by default
// dDeclare the value here only
int main()
{

    Employee e1, e2, e3;
    
    // e1.id = 1 cant do this as id is private member

    e1.setData();
    e1.getData();
    Employee::getcount(); //Ugonna use the static method of the class
    //obj name not needed

    e2.setData();
    e2.getData();

    e3.setData();
    e3.getData();

    return 0;
}
