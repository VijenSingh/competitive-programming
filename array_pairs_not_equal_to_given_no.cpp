


/*

Given an array count the number of pairs(a[i],a[j]) 
such that 
a[i]+a[j] = k;

where i!=j


*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    int a[10] = {-3,1,2,3,5,6,7,8,13,15};
    int mx=10,ans=0;
    int i=0,j=9;
  
  while(i<j)
  {
      if(a[i]+a[j] == 10)
      {
          i++;
          j--;
          ans++;
      }
      if(a[i]+a[j]>10)
      j--;
      if(a[i]+a[j]<10)
      i++;
      

  }
    cout<<ans;
    return 0;

}