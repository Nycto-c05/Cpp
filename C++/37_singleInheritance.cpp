#include <iostream>
using namespace std;

class Base
{
    int data1; // private not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1(void)
{
    return data1;
}
int Base ::getData2(void)
{
    return data2;
}

class Derived : public Base // class being derived publicly
{
private:
    int data3;

public:
    void process();
    void display();
};

void Derived :: process(){
    data3 = data2 * getData1();

}

void Derived :: display(){
    cout<< "Value of datat1 "<<getData1()<<endl//data1 is private adn can only be accessed by function of class
    //and the function of that class is public
    <<"Value of data2 is "<<data2<<endl
    <<"Value of data3 is "<<data3<<endl;
    
}



int main()
{
    Derived der;
    der.setData();

    der.process();

    der.display();
    return 0;
}