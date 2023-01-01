// if else program for positive or negative number

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Type a number :-";
    cin>>a;
    if (a>0){
        cout<<"Your number is Positive : "<<a<<endl;
    }
    if (a<0){
        cout<<"Your number is Negative : "<<a<<endl;
    }
    else{
        cout<<"Your number is 0 : "<<a<<endl;
    }
}