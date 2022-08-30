#include <iostream>
#include <vector>
#include <string>
using namespace std;
    /*
    int n;
    cin >> n;
    string str = to_string(n);
    // int mynum=stoi(str);

    int limit = 1 << str.length();
    vector<string> res;
    for (int i = 0; i < limit; i++)
    {
        string ans;
        for (int j = 0; j < str.length(); j++)
        {
            if ((i & (1 << j)) != 0)
            {
                ans.push_back(str[j]);
            }
        }
        res.push_back(ans);
    }
    int ct = 0;
    int num = 0;
    for (int i = 1; i < limit; ++i)
    {
        num = stoi(res[i]);
        if (num % 11 == 0)
        { cout<<num<<endl;
            ct++;
        }
    }

    cout <<endl<<"count is ->"<< ct;
*/

bool check(string str) 
{ 
    int n = str.length(),sum=0,t=0; 
    for(int i=0;i<n;++i){
    	t=(str[i]-'0');//character to int
		i%2==0?sum+=t:sum-=t;//<condition>?<if true then>:<false then>
		}
		return (sum%11==0);
} 
int main()
{
  string num;
  cout<<"Enter a number: ";
  cin>>num;
  int count=0,n=num.length();
  for(int i=0;i<n;++i){
      for(int j=i+1;j<n;++j){
          string subNum=string(&num[i],&num[j+1]);
          cout<<subNum<<" ";
        //   if(check(subNum))
        //       ++count;
      }
  }
  cout<<count<<endl;
    return 0;
}
