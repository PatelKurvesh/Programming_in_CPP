/* Patterns
    n=4             

    A B C D
    A B C D
    A B C D
    A B C D


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
            char ch='A'+col-1;      //'A'+col-1
            cout<<ch<<" ";       
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
     
} 