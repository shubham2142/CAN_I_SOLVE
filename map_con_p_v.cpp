#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<pair<string, string>,vector<int>> m;
   cout<<"How many operation\n";
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
    cout<<"Enter first name, last name, number of subject\n";
    string fn,ln;
    int ct;
    cin>>fn>>ln>>ct;
    cout<<"Enter particular marks in straight line"<<endl;
    for (int j = 0; j <ct; j++)
    {
        int x;
        cin>>x;
        m[{fn,ln}].push_back(x);
    }
    
   }
   for (auto &pr : m)
   {
    cout<<"Student\n";
    // auto &fullname=pr.first;
    auto &list=pr.second;
     cout<<(pr.first.first)<<" "<<(pr.first.second)<<endl;
    // cout<<fullname.first<<" "<<fullname.second<<endl;
    cout<<"Size : "<<list.size()<<endl;
    for(auto &element: list)
    {
            cout<<element<<" ";
    }
    cout<<endl;
   }
   
    return 0;
}