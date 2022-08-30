#include<iostream>
using namespace std;
void printbinary(int num)
{
    for(int i=5;i>=0;i--)
    cout<<((num>>i)&1);
    cout<<endl<<__builtin_popcount(num);
}
int main()
{
    int n;
    cin>>n;
    printbinary(n);
    return 0 ;
}