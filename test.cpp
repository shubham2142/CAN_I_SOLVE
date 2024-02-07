#include<bits/stdc++.h>
using namespace std;


 int main()
 {
         
int N;
    cout<<"Big vector size"<<endl;
  cin>>N;
  vector<vector<int>>nums;
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
     nums.push_back(temp);
     
  }
  return 0;
 }




  