/*control structures : control the flow of the program

types 
::1))Sequence structure-->executes instruction one after another
2))selection structure --> executes a block of code under a certain condition eg))if-else ,, switch statements

 3_) loop structure -->  keeps executes code until the condition returns false
*/



#include<iostream>
using namespace std;
int main(){
    
//IF Else
    int age;
    cout<<"Enter your age --> ";
    cin>>age;
    
 /* //if , else-if, else will test further condition if the prev case returned false. If a case returned true, itll execute that code n wont test further
    if((age<18) && (age>0)){
        cout<<"You can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }

    
*/






// SWITCH-CASES
/*switch case uses break cuz it only tests the condition once, if false then skips that code and if true it runs that code block
but when the condition comes true, it runs that code block AND the code of the remaining cases w/o testing...thus we need to use a break statement to break out of the switch case after it runs the ccode block
*/
    switch(age){

    case 18:
        cout<<"youre 18"<<endl;
        break;
    case 19:
        cout<<"youre 19"<<endl;
        break;
    default://must be used as last in switch case then break will be optional(This runs if all above fails)
        cout<<"default case"<<endl;
        break;

    }
    
    cout<<"Switch case over"<<endl;//runs after case code block is executed and breaks out of switch case
    


//Short hand if else(ternary operator)

   /* int time = 20;
    if (time < 18) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }    
*/
    //can be written as(used for simple if else)
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result; 

    return 0;
}

//good day, if less than 18, or else prints Good evening
    


