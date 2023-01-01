/* Patterns
    n=4     //row=4  //col=4   //n=4

    1 2 3 4    
    1 2 3 4
    1 2 3 4
    1 2 3 4

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
            cout<<col<<" "; //if you print col then op will be row value 1 1 1  (check patterns_3)
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
     }
     
}