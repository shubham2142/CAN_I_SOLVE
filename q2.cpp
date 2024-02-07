#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    cout<<"Number of element\n";
    int n;  
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       string str;
       cout<<"Enter string"<<endl;
       cin>>str;
       s.insert(str);
    }
    cout<<"how many find you want\n";
    int q;
    cin>>q;
    while (q--)
    {
      string str;
      cout<<"Enter string"<<endl;
      cin>>str;
      if(s.find(str)==s.end())
      {
       cout<<str<<" "<<"No"<<endl;
      }
      else{
        cout<<str<<" "<<"Yes"<<endl;
      }

    }
    
    
    return 0;
}