/* Logical Operator
&& [AND]    a   b   AND
            0   0   0
            0   1   0   
            1   0   0
            1   1   1

|| [OR]     a   b   OR
            0   0   0
            0   1   1   
            1   0   1
            1   1   1

!  [NOT]    a   NOT
            0   1
            1   0
*/

#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=6;
    
    //AND Operator
    cout<<((a==b)&&(a<b))<<endl;
    cout<<((a<b)&&(a<=b))<<endl;
    
    //OR Operator
    cout<<((a<b)||(a<=b))<<endl;
    cout<<((a<b)||(a<=b))<<endl;
    
    //NOT Operator
    cout<<(!(a==0))<<endl;
    cout<<(!(a==5))<<endl;


    
}