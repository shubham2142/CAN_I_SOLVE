#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<int, multiset<string>> m;
   cout<<"Enter number of students\n";
   int n;
   cin>>n;
   // for (int i = 0; i < n; i++)
   // {
   //  int marks;
   //  string name;
   //  cin>>name>>marks;
   //  m[marks].insert(name);
   // }
   // auto cur_it=--m.end();
//    while (true)
//    {
//     auto &student = (*cur_it).second;
//     auto marks = (*cur_it).first;
//     for(auto &name : student)
//     {
//     cout<<name<<" "<<marks<<endl;

//    }
//    if(cur_it==m.begin())
//     break;
//    cur_it--;
//    }
 for (int i = 0; i < n; i++)
    {
     int marks;
     string name;
     cin>>name>>marks;
     m[-1*marks].insert(name);
    }
    for(auto marks_auto_pr : m)
    {
     auto  &studentname = marks_auto_pr.second;
     int marks = marks_auto_pr.first;
     for(auto &student : studentname)
     {
        cout<<student<<" "<<(-1*marks)<<endl;
     }
    }
    return 0;
}