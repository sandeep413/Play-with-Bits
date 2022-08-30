#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; //10 -->1010
    if(n&(1<<3)!=0)
    {cout<<"Bit is Set";}
    else
    {cout<<"Bit is not set";}
    return 0;
}