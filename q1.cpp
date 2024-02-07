#include<bits/stdc++.h>
using namespace std;   /*given N string, print qnique strings 
                        in lexiographical order with their frequency n<=10^5, |s|<=100*/
int main()
{
    map<string, int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       string s;
       cin>>s;
       m[s]++;
    }
    cout<<"output"<<endl;
    for(auto mv : m)
    {
        cout<<mv.first<<" "<<mv.second<<endl;
    }
    
    return 0;
}