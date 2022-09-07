//Factorial by Recursions
#include<iostream>
using namespace std;

int factorial(int num){

    if (num<=1){
        return 1;
    }
    return num * factorial(num - 1);
}//same if we add  'else'

int main() {
    int num;
    cin>>num;
    cout<<"Factorial "<<num<<"! is "<<factorial(num)<<endl;

    return 0;
}

//Fibonacci Series by Recursions

#include<iostream>
using namespace std;


int fib(int n){
    if (n<=1){
        return 1;
    }
    return (fib(n-2) + fib(n-1));
}

int main() {
    int a;
    cin>>a;

    cout<<fib(a)<<endl;

    return 0;
}