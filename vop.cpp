#include<bits/stdc++.h>
using namespace std;
int main()
{
  cout<<"Vector of pair\n";
  vector<pair<int, int>>v;
  cout<<"Enter How many pair required\n";
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    int x,y;
    printf("Entering %d pair\n",i);
   cout<<"Enter x  and y element\n";
   cin>>x>>y;
    v.push_back({x,y}); 
  }
  cout<<"Output"<<endl;
  for (int i = 0; i < v.size(); i++)
  {
    cout<<v[i].first<<" "<<v[i].second<<endl;
  }

    return 0;
}