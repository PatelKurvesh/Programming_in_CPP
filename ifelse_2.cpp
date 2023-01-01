// enter a single chr or number and check it is lowercase or uppercase or a number


#include<iostream>
using namespace std;
int main()
{
    char c;
    // int a;

    cout<<"Enter a single character or a number :- ";
    cin>>c;
    int a=int(c);

    if ((a>=97)&&(a<=122)){
        cout<<"Your "<<c<<" is lowercase"<<endl;
    }
    else if ((a>=65)&&(a<=90)){
        cout<<"Your "<<c<<" is Uppercase"<<endl;
    }
    else if ((a>=48)&&(a<=57)){

        cout<<"Your "<<c<<" is a Number"<<endl;
    }
    else{
        cout<<"Your character or a number is not a chr or a number !!!";
    }
}