#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


 
int findGCD(int arr[], int n)
 
{
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = gcd(arr[i], result);
    }
    return result;
}
int main()
{
    int N;
  cin>>N;
  int arr[];
  
  for(int i=0;i<N;i++){
  int n;
      cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
     cout<<findGCD(arr, n); 
  }

    return 0;
}