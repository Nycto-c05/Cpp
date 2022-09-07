/*input stream -->data from device(eg keyboard) to memory
output stream --> data from memory to output device eg display

<< insertion operator    >>extraction operator
*/

#include<iostream>
using namespace std;
int main() {

    int num1, num2;
    
    cout<<"Enter value of num1: ";
    cin>>num1;
    
    cout<<"Enter value of num2: ";
    cin>>num2;
    
    cout<<"The sum of num1 and num2 is "<<num1+num2<<endl;
    return 0;
    
}