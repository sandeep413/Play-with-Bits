#include<iostream>
using namespace std;
void binary(int n)
{
    for(int i=3;i>=0;--i)
    {
        cout<<((n>>i)&1);
    }
}
int main()
{
    int n;
    cin>>n;
    binary(n);
    return 0;
}