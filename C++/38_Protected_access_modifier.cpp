#include<iostream>
using namespace std;

class Base{
    protected://protected member can be inherited 
        int a; 
    private:
        int b;

};

class Derived: protected Base{
   
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}


//Proctected is like private but inheritable

/* 	                           Public Derivation       	      Private Derivation     	   Protected Derivation
Private members            	    Not Inherited               	Not Inherited                Not Inherited              
Protected members            	Protected                     	Private                      Protected                    
Public members            	    Public 	                        Private                      Protected               
*/
