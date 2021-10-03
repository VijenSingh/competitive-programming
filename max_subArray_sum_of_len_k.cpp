


/*

    Find the max subarry sum of length k.

    ex: -3,4,-2,5,3,-2,8,2,-1,4 

    k = 5

    output = 16

*/




#include <bits/stdc++.h>
using namespace std;



int main() {
    
   
      vector<int> ans = {-3,4,-2,5,3,-2,8,2,-1,4};
      int n=10,k=5,s=0;
      int mx= INT_MIN;
      
    for(int i=0;i<k;i++)
    {
            s+=ans[i]; 
    }

    
      for(int i=1;i<n-k;i++)
      {
         s = s-ans[i-1]+ans[k+i-1];

         if(s>mx)
         mx=s;
      }
       

       cout<<mx;
   


    
    return 0;
    
}