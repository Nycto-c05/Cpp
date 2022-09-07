#include<iostream>
using namespace std;

//Array is a collection of items of same datatype stored in continous memory loactions
int main() {
    
    int marks[4] = {23, 45, 56, 89};//these values are stored in continous memory locations
    //4 means the no. of elements in the array, BUT not entering that is also fine
    
    cout<<marks[0]<<endl;//displays the 1st value of array using the index of the array

    //method2 to decalre values in array
    int marks2[4];//need to put no. of elements here tho
    marks2[0]= 69;//declaring the elements one by one
    marks2[1]= 1;
    marks2[2]= 2;
    marks2[3]= 3;

    marks2[0]=0;//changing the value of the elements in array


    //Using LOOPS TO PRINT ARRAY VALUES or print one by one using index
    for (int i = 0; i < 4; i++)
    {
        cout<<marks2[i]<<endl;

    }


    //using while loops
    int i=0;
    cout<<"USING WHILE LOOPS"<<endl;
    while (i<4)
    {
        cout<<marks2[i]<<endl;
        i++;
    }
    
    //USING DO WHILE LOOPD
    cout<<"Using DO while loops"<<endl;
    int z=0;
    do
    {
        cout<<marks2[z]<<endl;
        z++;
        
    } while (z<4);
    

    




    //memory loaction of arrays
//&marks1 wont give the memory location like other variables instead just printing marks1 will give the memory loaction of 1st element or put marks in a pointer variable
    
cout<<"********arrays n pointers (2)*****"<<endl;


cout<<marks2<<endl;//gave the memory location on the 1st element
cout<<(marks2+1)<<endl;//memory location of 2nd element


//same thing but storing memory location in pointer variable
int* a= marks2;

cout<<a<<endl;//memory location of 1st element of marks2
cout<<(a+1)<<endl;//loaction of 2nd element of marks2

//since they are int arrays and int takes 4 bytes and array is a contnous memory collection so the memory location of each element will differ by 4 bytes

//to print the value of pointer var
cout<<"to print value within the memory location"<<endl;
cout<<*(a+1)<<endl;//prints whatever is the memory location(DEREFERENCING OPERATOR)








    

    return 0;
}