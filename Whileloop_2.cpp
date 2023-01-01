//take input n number and sum of all sequence number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n number :-";
    cin>>n;

    int i=1;
    int sum=0;
    while (i<=n)
    {
        /* code */
        sum=sum+i;
        i=i+1;
    }
    cout<<"Your sum : "<<sum;
    

}