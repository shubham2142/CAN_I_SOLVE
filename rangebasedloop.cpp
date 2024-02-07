#include<bits/stdc++.h>
using namespace std;

int main()
{
   /* vector<int>v={3,3,4,5,3};
    for(int &value : v)
    {
        value++;
    }
     for(int value : v)
    {
       cout<<value<<" ";
    }    */

    vector<pair<int, int>>v={{1,2},{4,3},{5,4}};
    for(pair<int,int> &value : v)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}