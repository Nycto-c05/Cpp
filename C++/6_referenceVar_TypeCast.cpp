#include<iostream>
using namespace std;

int c = 420;//Global var

int main() {

    /*int a,b,c;
    
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    c=a+b;//local var defined
    ::c=69;//updating the global variable
    cout<<"The sum of a and b is "<<c<<endl;//will give preference to local var c
    cout<<"The value of global var c is "<<::c<<endl;//calling global var using scope resolution operator(::)*/




//   **** FLoat, double n long literals  ****
    
    /*
    
    float d =3.14;//Double is the default data type of  decimal nos., to make float, put f in front
    long double ld = 3.14;
    cout<<"\n****Type casting****\n";
    cout<<"The size of 3.14 is "<<sizeof(3.14)<<endl;;
    cout<<"The size of 3.14 float is "<<sizeof(3.14f)<<endl;;//float typecast by adding f or F
    cout<<"The size of 3.14 long double is "<<sizeof(3.14l)<<endl;//long double typecast by adding l or L 
    //Useful when need to pass a certain data type as an argument
    
    */
    


//*****REFERENCE VARIABLES***** 
//Creates variable which points/refers to another variable. hence giving the same output when call either
    
    /*
    float x = 789;
    float & y = x;//Y is a reference variable which points to x(memory location of x)(not a copy of x)
    
    cout<<y<<endl;//Calling reference variable 
    */


//*****Type casting****
    float a =3.14f;
    int b=3;
    cout<<"Value of a is "<<(int)a<<endl;//gives 3 as o/p
    cout<<"Value of a is "<<int(a)<<endl;//gives 3 as o/p(valid syntax)

    int c = int(a);//can give c int value of 'a' (ie 3)


    cout<<int(a)+b<<endl;//Typecast n perform operations
    cout<<c<<endl;//Typecast n perform operations
    
    
    return 0; 
}