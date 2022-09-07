//Constants: Good practice to make variables constant whose values are unlikely to change.
#include<iostream>
#include<iomanip>//manipulator header file
using namespace std;

int main() {

//CONSTANTS: 
    /*
    const float pi = 3.14;//Creates a read-only variable who cant be change later on
    //pi = 3;     .....Cant change
    return 0;
    */

//MANIPULATORS
    
    int a =3, b=78, c=1233;
    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    //setw sets width of 4 to make data right side in o/p
    

//OPERATOR PRECEDENCE:https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwj6-pzh7fz2AhW8UGwGHYdnBhoQFnoECAwQAQ&url=https%3A%2F%2Fen.cppreference.com%2Fw%2Fcpp%2Flanguage%2Foperator_precedence&usg=AOvVaw3eamnEOW0bOP2kMaWdB_PJ
    // working with multiple operators, some operators hv higher precedence than others (eg * has more precedence than +,-).. similar to bodmas.
    //If 2 or more operators have same precedence, then the associativity is cconsidered which tell in what direction (L->R or R->L) should the expression be resolved and which ever from the same precedence comes 1st should be resolved first
/*
    int a =3, b=4;
    int c = a*5+b-45+87;//this will be solved as ((((a*5)+b)-45)+87) ....Those with same percedence will have same associativity too
    cout<<c<<endl;
    
//NOTE: Parentheses override operator precedence*/
    return 0;
}
 


