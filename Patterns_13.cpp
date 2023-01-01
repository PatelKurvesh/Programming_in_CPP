/* Patterns
    n=4             

    A B C D
    B C D E
    C D E F
    D E F G


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
            char ch='A'-1+row+col-1;      
            cout<<ch<<" ";       
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
     
} 