//STRINGS ARE MUTABLE IN C++

#include <iostream>
#include <string>
using namespace std;

class binary{

//Everything in a class is defined as private evenw/o the keyword, unless specified as public
private:    
    string s;
    void chk_bin(void);//Prototype
    //Another function of same class can call this function
    

public:
    int a = 5;
    void read_bin(void);//Prototype
    void ones_complement(void);
    void display(void);
};

void binary :: chk_bin(void){

    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i)!= '0') && (s.at(i)!='1')){
            cout<<"Invalid Binary Number"<<endl;
            exit(0);//Exit successfully based on condition. Will terminate the program successfully
            
        }
        
    }
    
}

void binary :: read_bin(void){
    cout<<"Enter a binary no. : ";
    cin>>s;
}

void binary :: ones_complement(void){
    chk_bin();//Nesting class member function
    //above is private, hence accesed by member function
        for (int i = 0; i < s.length(); i++)
        {
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
                }
        }
        
    
}

void binary :: display(void){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
    
}

int main() {

    binary b;
    cout<<b.a;//public var accesed directly
    b.display();

    b.read_bin();
    b.ones_complement();
    b.display();
    
    
    return 0;
}