/* Patterns
    n=4     //row=4  //col=4   //n=4

    4 3 2 1
    4 3 2 1
    4 3 2 1 
    4 3 2 1 

*/

#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the number :- ";
     cin>>n;

    int row=1;
     while (row<=n)
     {
        int col=1;
        while (col<=n)
        {
            cout<<n-col+1<<" "; 
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
     }
     
}