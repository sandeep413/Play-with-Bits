#include<iostream>
#include<string>
using namespace std;
bool check(string str)
{
    int num=stoi(str);
    if(num%11==0)
      return true;
    else return false;  
    
}
int main()
{
    int n;
    cin>>n;
    int ct=0;
    string str=to_string(n);
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            string subnum=string(&str[i],&str[j+1]);
            if(check(subnum))
            ct++;
        }
    }
    cout<<ct;
return 0;
}