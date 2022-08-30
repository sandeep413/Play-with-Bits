#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // cout<<__builtin_popcount(n);
int ct=0;
for(int i=32;i>=0;i--)
{
    if(n&(1<<i)!=0)
    ct++;
}
cout<<ct;
    return 0;
}