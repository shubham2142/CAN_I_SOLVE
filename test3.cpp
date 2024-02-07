#include<bits/stdc++.h>
using namespace std;

 int main()
 {
    int n;
    cin>>n;
    while (n--)
    {
        char arr[3][3];
             int ch;
       
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='?')
            {
                 ch = i;
            }
        }
    }
    int a=0, b=0, c=0;
    for(int i =0; i<3; i++)
    {
        if(arr[ch][i]=='A')
        a++;
        if(arr[ch][i] == 'B')
        b++;
        if(arr[ch][i] == 'C')
        ch++;
    }
    if(a==0) cout<<"A";
    if(b==0) cout<<"B";
    if(c==0) cout<<"C";
    cout<<endl;

    }
    
    
    
    return 0;
 }