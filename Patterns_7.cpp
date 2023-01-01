/* Patterns
    n=4             //row=4  //col= row value  //n=4

    1
    2 2
    3 3 3
    4 4 4 4

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
        while (col<=row)       //col<=row
        {
            cout<<row<<" ";     //print row value
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
     
} 