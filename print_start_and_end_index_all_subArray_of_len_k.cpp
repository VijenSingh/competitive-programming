

/*

Print the start and end index of all the subarray of length k


ex : 3,4,2,-1,6,7,8,9,3,2,-1,4

k = 6


*/


#include <bits/stdc++.h>
using namespace std;



int main() {
    
   
      vector<int> ans = {3,4,2,-1,6,7,8,9,3,2,-1,4};
      int n=12,k=6;
      
      for(int i=0;i<n-k;i++)
      {
          cout<<i<<" "<<k+i-1<<endl;
      }
       
   


     
    return 0;
    
}
