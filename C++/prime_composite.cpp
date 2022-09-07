#include<iostream>
using namespace std;

int main() {
    
   bool prime=1;
   
   int n;
   cout<<"--> ";
   cin>>n;
   


if (n==0 || n==1){

    cout<<n<<" is neither prime nor composite\n";
      


}
else if(n>1){
   for ( int i = 2; i <n; i++)
   {
       if ((n%i)==0)
       {
           cout<<n<<" is a composite no."<<endl;
           prime=0;
           break;
       }
   }

}
    
    
    if ((prime==1) && (n>1))
    {
        cout<<n<<" is a prime no.";    
    
    }
    

   
   
   
    return 0;

}


/*the code is checking from 2 to n, which inc the time complexity
to reduce the time complexity we can use 2 methods


method 1-->  range from 2, (n/2) (including n/2)instead till n, cuz the factors of a number are always <= (n/2) and there isnt any factors above n/2
eg} the factors of 16 are 2,4,8, 16...(n/2) is 8 and there are no factors between above n hencee no need to check
eg) 333...> the last factors are 111 and 333..... as above there is no factor above n/2 apart from the no. itself...factors are <=(n/2) 



method 2 to reduce time complexity..instead of checking till n/2 we can check till sqrt(n)(including sqrt(n))
eg)factors of 18 are 1x18, 2x9, 3x6, root(18)xroot(18), 6x3, 2x9,  18x1
after the factors of roots of n(18), the remaining factors are same as before the root factor.
so no need to check there
hence reducing the range we check in and not inc time complexity
*/