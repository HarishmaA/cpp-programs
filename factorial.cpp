#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==0)
        return 1;
    else{
        return num*fact(num-1);
    }
}
int main()
{   int n;
    cout<<"Enter any number from 0 to 16"<<endl;
    cin>>n;
    cout<<fact(n);
    return 0;
}
