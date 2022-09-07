#include<iostream>
using namespace std;

int main() {
    int n, range;
    cout<<"Enter an integer no. --> ";
    cin>>n;
    cout<<"Enter range --> ";
    cin>>range;
    
    /*Tables using foor loop 
    // for (int i = 1; i <=range; i++)
    // {
    //     cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    // }*/

/*using while loop
    int i=1;
    while (i<=range){

    cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    i++;
        
    }*/


/*Using do while loop*/
    int i=1;
    do
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        i++;
        
    } while (i<=range);
    
    

    return 0;
}
