#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<int>&v){
    
    cout<<"Size : "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
    cout<<v[i]<<endl;
    }
    
}

int main()
{
     int N;
   cout<<"Enter array of Vector Size\n";
   cin>>N;
   vector<int>v[N];
      for (int i = 0; i < N; i++)
      {
        int n;
        printf("Enter %d vector size\n",i);
        cin>>n;
        for (int j = 0; j < n; j++)
        {
           printf("Enter %d element\n",j);
           int x;
           cin>>x;
           v[i].push_back(x);
        }
        
      }
      cout<<"output\n";
      for (int i = 0; i < N; i++)
      {
        print_vec(v[i]);
      }
      
         
     return 0;
}