#include<iostream>
using namespace std;
int main() {

//LOOPS 1) For loops 2) while loops 3) do-while loops

    /*//FOR LOOPS in C++
    
    for (int i = 1; i<=10; i++){ //( initialize var w/ value; condition; updation )

        cout<<i<<endl;//intializes once, then keeps repeating and updating until condition returns false
    }*/

    /*//Infinite for loop (condition is always true)
    for ( int i = 0; 6 < 9 ; i++)
    {
        cout<<i<<endl;
    }*/
    

  /* //While loops
    int i=1;//var needs to be initialized outside
    while (i<10)//if argument is always true or (true) passed as argument..then infinite loop
    {
        
        cout<<i<<endl;
        i++;//or else infinite loop goes on
    
    }
    */
    
   //do-while loop

   int z=1;
   do
   {
       cout<<z<<endl;
       z++;
   } while (false);//condition is false so loop should stop
   //but the loop will run atleast once because itll check condition after running
   //irrespecive of the condition outcome(true/false)
   //thus will print 1



    return 0;
}