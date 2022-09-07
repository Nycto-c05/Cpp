#include<iostream>
using namespace std;

//Defining function
int sum(int a, int b){
    int c = a+b;
    return c;

}

int main() {
    
    int a, b;

    cin>>a;
    cin>>b;

    cout<<"The sum is "<<sum(a,b)<<endl;//calliing the function

    return 0;
}


//FUNCTION PROTOTYPE
//Follows top-bottom approach thus function called before defination give error
//Use function protype to assure the compiler that the function definition does exist

#include<iostream>
using namespace std;


//Prototypes
//Arguments are formal parameters
int sum(int a, int b);
//int sum(inta, b); NOT ACCEPTABLE
//int sum(int, int); ACCEPTABLE

void greet(int);
//void greet(void) //ACCEPTABLE if not taking any value

int main() {
    
    int a, b;

    cin>>a;
    cin>>b;

    cout<<"The sum is "<<sum(a,b)<<endl;//During calling we give in actual parameters
    greet(a);
    return 0;
}

int sum(int a, int b){//Arguments are formal parameters, theyre given actual values during calling 
    int c = a+b;
    return c;

}

//Void functions that dont return anything(void)
void greet(int a) {
    cout<<a<<"\hi"<<endl;
}