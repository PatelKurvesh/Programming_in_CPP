/* Patterns
    n=4             

    A
    B C
    D E F
    G H I J 

*/

#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the number :- ";
     cin>>n;

    int row=1;
    char value='A';     //value store then +
    while (row<=n)
    {
        int col=1;
        while (col<=row)       
        {
            
              
            cout<<value<<" ";
            value=value + 1;        // ++
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
     
} 