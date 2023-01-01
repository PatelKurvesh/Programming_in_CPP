/*Arithmetic Operator
+
-
*
/
%
*/

#include<iostream>
using namespace std;

int main()
{
    float a=6;
    float b=7;

    int first= (a+b);
    cout << first << endl;
    
    int Second= (a-b);
    cout << Second << endl;
    
    int Third= (a*b);
    cout << Third << endl;
    
    int Four= (a/b);// for division always use float value.
    cout << Four << endl;

    int x = 5;
    int y = 2; //bcz if you give float value it will be error.
    int Fifth= (x%y);
    cout << Fifth << endl;

    
}