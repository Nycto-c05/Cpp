#include<iostream>
using namespace std;


class Complex{
    int a,b;
    public:
    
    //constructor -->  initialize any data as obj is created
    Complex(void);//constructor prototype

    void printData(void){
        cout<<a+b<<endl;
    }
};
//Default constructor, as it takes no arguments
Complex :: Complex(void){//constructor defined and set Values by as soon as obj is declared
    a = 10;
    b = 59;
}

int main() {
    
    Complex c;

    c.printData();

    return 0

/*NOTE

    - COnstructor must be declared publicly in a class
    - INvoked whenever a obj is made from that class
    - THey dont have a return type of values(not even void)
    - It can default arguments
    - We cannot refer to the address of the constructor


*/
