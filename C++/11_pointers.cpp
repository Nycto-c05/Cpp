#include<iostream>
using namespace std;

int main() {
    // * is deferencing operator
    int a = 5;
    cout<< &a << endl;//Prints the memory location of a variable (&a shows the memory location the var a)

//Declaring a pointer variable b(int*) which stores the memory location of other int variables within it. its a data type just like any other datatype(int float char string)
    int* b = &a;//giving the pointer variable the memory location of 'a' by using ADDRESS OPERATOR[&]
    cout<<b<<endl;//printing pointer var b will give the memory location of a
    
    
    *b=69;//updating the value of "b" via memory location
    
    int** c = &b;//POINTER-IN-POINTER: A poiner variable pointing to another pointer var...(here, memory location of pointer b is put inside another pointer variable) 
    

    
    cout<<*b<<endl;//to see what value is stored in the memory loaction which is in the pointer location{WE USE DEREFERENCING OPERATOR {*} for this}
    
    cout<<c<<endl;//printing pointer c which has the memory location of pointer b(&b)
    cout<<**c<<endl;//so see what is stored at memory location of c, we need to deference it twice. it deferences c to pointer b then derefences b to show the value of a
    
    cout<<*c<<endl;//Dereferencing once gives the memory address of " pointer b"
    return 0;
}