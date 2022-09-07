#include <iostream>//headerfile which has io defined
using namespace std;       //ususally bad practice use std w/ scope operator::

int main() {//function body start and compiler starts reading from here

    std::cout<<"Hello\n";//cout cin endl are present in the std namespace ie in iostream
    return 0;//returns integer to main function that the program is successfully terminated
}//function body ends

//cpp ignores empty lines......<< --> insertion operator
//<<endl; same as \n