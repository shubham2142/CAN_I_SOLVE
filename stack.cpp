#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
string isbalanced(string s)
{
 stack<char> st;  
 for(char bracket_value : s)
 {
   if(symbols[bracket_value]<0)
   {
      st.push(bracket_value);
   }
   else{
      if(st.empty())
      return "No";
      char top=st.top();
      st.pop();
      if(symbols[top]+symbols[bracket_value]!=0)
     {
       return "No";
     }
   }
 }
 if(st.empty())
 return "Yes";
 return "N0";
}
int main()
{
   cout<<"how many test case you want\n";
   int test;
   cin>>test;
   while (test--)
   {
     cout<<"Enter a String"<<endl;
     string s;
     cin>>s;
     cout<<isbalanced(s)<<endl;
   }
   

    return 0;
}