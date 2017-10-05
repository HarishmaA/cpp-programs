#include<iostream>
#include<string.h>
using namespace std;
bool isPalin(string str)
{
    if(str.length()<2)
        return true;
    else{
            char first=str[0];
            char last=str[str.length()-1];
            if(first==last)
            {
                string res=str.substr(1,str.length()-2);
                return isPalin(res);
            }
            else
            return false;
    }
}
int main()
{   string b;
    cin>>b;
    isPalin(b)?cout<<"palindrome":cout<<"not a palindrome";
    return 0;
}
