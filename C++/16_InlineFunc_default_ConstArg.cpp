//https://www.geeksforgeeks.org/inline-functions-cpp/

//When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. This substitution is performed by the C++ compiler at compile time. Inline function may increase efficiency if it is small.

/*inlining is only a request to the compiler, not a command. Compiler can ignore the request for inlining. Compiler may not perform inlining in such circumstances like:
1) If a function contains a loop. (for, while, do-while)
2) If a function contains static variables.
3) If a function is recursive.
4) If a function return type is not void, and still the return statement doesn’t exist in function body.
5) If a function contains switch or goto statement.*/

#include<iostream>
using namespace std;

//Default argument used
inline float increment(int salary , float incrementFactor = 1.08){ 
    return salary*incrementFactor;
}
//The required args should always be before the default args

int main() {
    int salary;
    cout<<"Enter salary : ";
    cin>>salary;
    
    cout<<"Salary is "<< increment(salary) <<" after increment."<<endl;
    //Default arg, so didnt pass incrementFactor

    return 0;
}

//Const arg
//Since functions can change var values by memory, so we make args const, so that is cant be changed
//void funcy(const int* a ,  const int* b){  Wont even let you write code to modify eg swap 2 nos

//Static variable
#include<iostream>
using namespace std;

//The value of a static variable is retained after function ends
//Any changes made to the functions are also retained
//The assignment of value to the static variable isnt executed after teh 1st time
int product(){
    static int c = 0; //This runs only once
    c++;
    return c;

}

int main() {
    
    cout<< product()<<endl;
    cout<< product()<<endl;
    cout<< product()<<endl;
    cout<< product()<<endl;
    cout<< product()<<endl;
    cout<< product()<<endl;
    cout<< product()<<endl;
    cout<< product()<<endl;
    cout<< product()<<endl;
// calling the function each time has the previous change value retained

    return 0;
}

    

