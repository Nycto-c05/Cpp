#include<iostream>
using namespace std;
int main(){
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;//will exit the loop after 1 is printed
    //     }
    //     cout<<i<<endl;
    // }
    
    
    
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue;//will skip 2 in the iteration loop and continue after 2
        }
        cout<<i<<endl;
    }

    
    return 0;
}