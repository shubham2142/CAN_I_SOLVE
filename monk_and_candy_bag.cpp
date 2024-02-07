#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter  how many  test case"<<endl;
    int t;
    cin>>t;
   while (t--)
   {
    printf("Test case : %d\n",t);
    cout<<"enter n for how many candy and k for how many time operation"<<endl;
    int n,k;
    cin>>n>>k;
    multiset<long long> bags;
    printf("Enter %d candy is singh line\n",n);
    for(int i=0; i<n; ++i)
    {
        long long candy_ct;
        cin>>candy_ct;
        bags.insert(candy_ct);
    }   
    long long total_candy=0;
    for(int i=0; i<k; ++i)
    {
        auto last_it=(--bags.end());
         long long candy_ct=*last_it;
        total_candy+=candy_ct;
        bags.erase(last_it);
        bags.insert(candy_ct/2);

    }
    cout<<total_candy<<endl;
   }


    return 0;
}