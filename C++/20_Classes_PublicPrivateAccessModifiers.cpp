#include<iostream>
using namespace std;

class test{
    //Access Mods
    private:
    //This values cant be accessed directly by objects
    //They can only be accesed by a function of a class
        int a, b, c;
    
    public://Can be accessed direcly by the object of the class
        int d, e;

    void setData(int a1, int b1, int c1);//Function prototype
    
    void getData(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }


};



//Defining the function of the class which was prototyped, hence use Class name
void test :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main() {

    test testobj;//Instantiation
   // testobj.a = 3;//Cannot access this private var directly, only thru methods

    testobj.d = 4;
    testobj.e = 5;
    //Can access private var thru class methods
    testobj.setData(1,2,3);
    //Access the class private an public var via methods
    testobj.getData();
    
    
    return 0;
}