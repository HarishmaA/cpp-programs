#include<iostream>
using namespace std;
int power(int base,int exp)
{
    if(exp==0)
        return 1;
    else{
        return base*power(base,exp-1);
    }
}
int main()
{   int b,e;
    cin>>b>>e;
    cout<<power(b,e);
    return 0;
}
