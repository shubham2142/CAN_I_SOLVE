#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<int>&v)
{
    vector<int>::iterator ip;
    ip = std::unique(v.begin(), v.begin());
    cout<<(*ip)<<endl;
}
int main()
{
    int N;
    cout<<"Big vector size"<<endl;
  cin>>N;
  vector<vector<int>>v;
  for (int i = 0; i < N; i++)
  {
     
     int n;
     printf("Small vector %d size\n",i);
     cin>>n;
     vector<int>temp;
     for (int j = 0; j < n; j++)
     {
       int x;
       printf("Enter %d element\n",j);
       cin>>x;
       temp.push_back(x);
     }
     v.push_back(temp);
     
  }
  cout<<"Output\n";

  for (int i = 0; i < v.size(); i++)
  {
    print_vec(v[i]);
  }
    return 0;
}