#include<bits/stdc++.h>
using namespace std;
int main()
{
   unordered_map<int, string> m;   //print randomly......
   m[1]="fjkl";
   m.insert({4,"jfjff"});
   m[3]="jfkjd";
   m[2]="gggg";
   
  
   unordered_map<int, string> :: iterator it;
   for(it=m.begin();it!=m.end();++it)
   {
    cout<<(*it).first<<" "<<(*it).second<<endl;
   }
   
  /* for(auto mv : m)s
   {
    cout<<mv.first<<"  "<<mv.second<<endl;
   }  
   auto it = m.find(4);
   if(it==m.end())
   cout<<"No value"<<endl;
   else
   cout<<(*it).first<<" "<<(*it).second<<endl;   */
    return 0;
}