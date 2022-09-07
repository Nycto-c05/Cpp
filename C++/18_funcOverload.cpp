#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int main() {
    
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2)<<endl;

    return 0;
}

//Both functions have same name, but compiler knows which one to call based on their no. of args, dType of argss,and order of the args
//Overloading isnt possible if theres only a difference in return type of function   (eg int func() & float func())