//CALL BY VALUE
#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    
    int x = 4 , y = 6;
//x and y before swap()
    cout<<x<<"\t"<<y<<endl;
//x and y before after swap()
    swap(x,y);
    cout<<x<<"\t"<<y<<endl;

//Values did not change as the void only a copy of the variable we sent to formal parameters
//Formal and actual parameters have different memory location 
    return 0;
}


//CALL BY REFERENCING(using refernce var)

#include<iostream>
using namespace std;

void swapPointer(int* a, int* b){//using pointer var, which takes memory loc
    int temp = *a; //updating value at address by memory location 
    *a = *b;
    *b = temp;      //will point to the memory location given
}


int main() {
    int a, b;
    a = 34;
    b = 35;
//Before swap the pointer 
    cout<<"Before swapPointer"<<endl;

    cout<<a<<endl
        <<b<<endl;

    swapPointer(&a,&b); // give memory address to the pointer var(args)
   
    cout<<"After swapPointer"<<endl;
//After swapping the pointer
     cout<<a<<endl<<b<<endl;

    return 0;
}


//Or directly pass reference var a argument

#include<iostream>
using namespace std;


void swapReferenceVar(int &a, int &b){//Now itll directly point to the memory location
//will point to the memory location of var which is given in
    int temp = a; 
    a = b;
    b = temp;      
}


int main() {
    
    int a , b;

    a=5;
    b = 6;
    
    cout<<"Before swapPointer"<<endl;

    cout<<a<<endl
        <<b<<endl;

    swapReferenceVar(a,b);//Give var which will turn into reference var 

    cout<<"After swapPointer"<<endl;
//After swapping the pointer
     cout<<a<<endl<<b<<endl;
    

    return 0;
}
