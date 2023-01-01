//take input number and find prime or not prime number in 1 to n.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :- ";
    cin>>n;

    int i=1;
    while (i<n)
    {
        /* code */
        if ((n%i==0)||(n%n==0))
        {
            /* code */
            cout<<"Prime :"<<i<<endl;
        }
        else{
            cout<<"Not Prime :"<<i<<endl;
        }
        i=i+1;
        
    }
    
}