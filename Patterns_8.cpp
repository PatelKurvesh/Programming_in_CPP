/* Patterns
    n=4             //row=4  //col= row value  //n=4

    1
    2 3
    4 5 6
    7 8 9 10


*/

#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the number :- ";
     cin>>n;

    int row=1;
    int count=1;        //take count
    while (row<=n)
    {
        int col=1;
        while (col<=row)       //col<=row
        {
            cout<<count<<" ";     //print count
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
     
} 