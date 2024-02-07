#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>>v={{1,2},{4,3},{5,4}};
    for(auto &value : v)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}