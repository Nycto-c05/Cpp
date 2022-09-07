#include <iostream>//Header file
#include<cmath>
using namespace std; 

int main() {

    int a,b;
    a=4;
    b=5;

    cout<<"ARITHMETIC OPERATORS\n";
    cout<<pow(4,2)<<endl;//raise to power usinf cmath lib
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;//--> 4/5 is 0.8 but, int/int will give int..o/p will be 0
    cout<<"The value of a%b is "<<a%b<<endl;//modulus -->remainder
    cout<<"The value of a++ is "<<a++<<endl;//will print a first(4) then increment to 5 and update a
    cout<<"The value of a-- is "<<a--<<endl;//a is 5, so will print 5, decrement then update a as 4
    cout<<"The value of ++a is "<<++a<<endl;//will inc a to 5 then print 5(incremented value)
    cout<<"The value of --a is "<<--a<<endl;//will dec then print the decre value ie 4

    cout<<"\n****COMPARISION OPERATORS****"<<endl;//Gives the truth value of statement as 0/1
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    
    cout<<"\n****LOGICAL OPERATORS****\n";
    cout<<"value of AND logical operator is "<<((a==b) && (a<b))<<endl;
    cout<<"value of OR logical operator is "<<((a==b) || (a<b))<<endl;
    cout<<"value of NOT logical operator is "<<(!(a==b))<<endl;

    return 0;
}

/*
--BUILT/SYSTEM IN HEADER FILES
look up cpp standard library headers

--USER DEFINED HEADERFILES
Eg) #include "this.h"---> only works if u have a file name this.h in ur current directory
*/
#include "this.h"//no error cuz made a file this.h in current directory\


//ARITHMETIC OPERATORS: +, - , * , /,%(modulus), a++, a-- , +a, --a


//ASSIGNMENT OPERATOR : =
//COMPARISION OPERAATOR < > >= =< ==
//LOGICAL OPERATORS  :  and &&,  or  ||,  not ! 