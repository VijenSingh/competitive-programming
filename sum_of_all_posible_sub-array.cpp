



/*

Given an array Return the sum of all possible sub array.



*/




#include <bits/stdc++.h>
using namespace std;
 


int main() {
    
   
      vector<int> ans = {1,2,3};
      int n=3,s=0;
      
     
    for(int i=0;i<n;i++)
    {   
        int st =i+1;
        int e = n-i;

        s+=ans[i]*(st*e);
        
        
    }

        cout<<s;
    
    return 0;
    
}


