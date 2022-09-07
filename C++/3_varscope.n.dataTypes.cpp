#include <iostream>

int glo=6;//global var

void sudo() {//void, thus returns nothing

    std::cout<<glo<<std::endl;//calls the global var since local var not defined
}

int main() {

    int a,b,sum;//int a=4, int b=3
    a=34;
    b=35;

    int glo=421;//local var has precedence over global var
    glo=420;//updates local var
    
    sum=a+b;
    float pi = 3.14;
    char x ='X';//only takes onr char, if >1 given, will output the last char
    
    bool z=true;
    

    std::cout<<"The value of a is "<<a<<"\nThe value of b is "<<b<<"\nThe sum of a & b is "<<a+b;
    std::cout<<"\nThe value of pi is "<<pi <<std::endl;
    std::cout<<"The value of x is "<<x<<std::endl;
    std::cout<<"The value of the bool is "<<z<<std::endl;//o/p is 1 cuz true
    
    
    sudo();//calls sudo function
    
    std::cout<<"Local var of main() is "<<glo<<std::endl;



    std::cout<<::glo<<std::endl;//prints the global variable using scope resolution operator
    
    ::glo=7;//updating global variable
    
    std::cout<<::glo<<std::endl;//prints the global variable using scope resolution operator
    
    return 0;
    
}



/*Data TYPES
int --> 5,6,4  
float --> 3.14
double --> float with more precision
char --> 'abcde'
bool --> i/p true/false will give o/p as 1 or 0 resp
string--> "string"


SCOPE OF VARIABLE
--Local variable:declared within braces of funcn accessed within from there only
--Global variable:declared outside braces of funcn accessed from anywhere

both local n global can have same name, but pref to local


3 TYPES OF DATA TYPES
--BUILT IN...int, float, char, double, bool
--USER DEFINED.... struct, union , enum
--DERIVED ... array , function, pointer


--Variables must start with alphabet or _
--case sensitive
--special char or spaces not allowed eg)$
--cant use reserved words like int as var_name


Name assigned to var is called 'identifier'.


*/
