#include<iostream>
using namespace std;
int main()
{
    int n,flag;
    cin>>n;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }
    if(flag)
        cout<<"prime number";

    else
        cout<<"not a prime number";
    return 0;
}
