/*
suppose we want to get bit at any particular location then we need to perform certain action
these action includes like bitwise operator


O(log(n))
*/
#include<iostream>
using namespace std;
int getbit(int n,int pos)
{
    return (n&(1<<pos)!=0);
    /*
    n=0101
pos-> 3210=>this is index of above number
    suppose we need to get a bit position ,i=2
    1<<i=0100 {this is left shift operation and i=2 so it will shifted left twice and result we got prev}
    the  we perform and operation of new number with original number 
    0101 & 0100=>0100 so at position 2 we have bit 1->(1)
    so 
    if(n&(1<<i)!=0) then bit is 1 at that specified position

    */
}
int setbit(int n,int pos)
{
    return(n|(1<<pos));
    /*
    n=101
pos-> 3210=>this is index of above number
    suppose we need to set a bit position ,i=1
     1<<i=1010 {this is left shift operation and i=1 so it will shifted left twice and result we got prev}
    here we have to perform or opertaion instead of and operation
    101|010=1111
    */
}
int clearBit(int n,int pos)
{
    int mask=~(1<<pos);
    return n&mask;
    /*
     n=0101
pos-> 3210=>this is index of above number
    suppose we need to clear a bit position ,i=2,1=>0001
    1<<i=0100 {this is left shift operation and i=2 so it will shifted left twice and result we got prev}
    then not operation of new number which we have obtain from shifting operation => 1011
    the  we perform and operation of new number with original number 
    0101 & 1011 => 0001
    */
}
int updateBit(int n,int pos,int val)
{
    // clear the set
    int mask=~(1<<pos);
    n=n&mask;// till here is clear bit operation
    return (n|(val<<pos)); //here set bit operation
    /*
    n=0101
     we need to update a bit in specified location i = 1 to 1
     firstly we have to clear that bit so for this one we follow the procedure as we have done in clear bit
     then set bit operation we perform we will get what we want 
    */
}
int main()
{
// cout<<getbit(5,2);
// cout<<setbit(5,2);
// cout<<clearBit(5,2);
cout<<updateBit(5,1,1);
return 0;
}