#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,r,a;
    cin>>n;
    a=n;
    while(n>0)
    {r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
    }
    if(a==sum)
        cout<<"armstrong number";

    else
        cout<<"not an armstrong number";
    return 0;
}
