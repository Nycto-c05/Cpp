#include<iostream>
using namespace std;

//Struct is a user defined data type
//Contains its heterogenous data members in contigous memory location 
struct student
{
    //Data memeber of a struct
    int year;
    char iD;
    float gpa;
};

///Making a struct using type def, which creates an additional name
//This additional name can be used to call the variable/struct
typedef struct employee
{
    float salary;

}ep;//The additional name, may or may not be used


int main() {
    
    struct student student1;
    student1.year = 1;
    student1.iD = 'B';
    student1.gpa = 9.6;


    ep employee1;//made using the typedef additional name and no need to used [struct structname]
    employee1.salary = 9999999999;


    cout<<"iD : "<<student1.iD<<endl;
    cout<<"Year : "<<student1.year<<endl;
    cout<< "GPA : "<<student1.gpa<<endl;

    cout<<"Employee1 salary "<<employee1.salary<<endl;


    return 0;
}


//Unions: LIke structs, can hold hetero data types, shared under a single memory location
//Only one defined data member of a union is allocated that shared memory space, and used
//When having to use another data member then the exising data which was allocated the memory will be overriden

#include<iostream>
using namespace std;

int main() {
    
    typedef union data_type
    {

        int num;
        char letter;
        float dec;

    }dt;

    dt test;//used typedef, so not using union data_type test..instead just dt test
    test.num = 69;
    //Now memory is only allocated to integer num
    //If try to define another data member, test.num will be replaced form memory location
    test.letter = 'c';
    cout<<test.num<<endl;
    //  trying to print num will instead print letter, but since num is int, hence ASCII of c is printed
    //  cuz now memory is allocated to char letter variable
    cout<<test.letter <<endl;


    return 0;
}



//Enum

#include<iostream>
using namespace std;

int main() {
    //Enum gives each elements a nol from 0 onwards
    //can give custom no. too
    enum suit{ clubs, spades = 69, hearts, diamonds};

    cout<< spades << endl;

//ways to call method 2
    suit s1 = spades;
    cout<< spades<<endl;

    return 0;
}

