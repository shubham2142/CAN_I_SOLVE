#include<bits/stdc++.h>
using namespace std;
void printset(set<string> &s)
{
for(auto it = s.begin(); it!=s.end(); ++it)
    {
        cout<<(*it)<<endl;
    }
    for(string value : s)
    {
        cout<<value<<endl;
    }
}
int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("jklm");
    s.insert("fkkdfd");
    auto it=s.find("abc");
    if(it!=s.end())
    {
        cout<<*it;
    }
    // printset(s);
    return 0;
}