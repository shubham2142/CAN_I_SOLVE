#include<bits/stdc++.h>
using namespace std;
int rec(int n){
 if(n==1){
  return 0;
 }
 if(n==2){
  return 1;
 }
  return rec(n-1)+rec(n-2);

}
int main(){
 int n;
 cin>>n;
 for(int i=1; i<=n; i++){
  cout<<rec(i)<<" ";
 }
 
      
  return 0; 
}