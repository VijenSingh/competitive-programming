


/*

Given an array print the sum of all the subarray(non empty)


*/


#include <bits/stdc++.h>
using namespace std;



int main() {
    
   
      vector<int> ans = {1,2,3};
      int n=3,k=5,s=0;
      int mx= INT_MIN; 
     
    for(int i=0;i<n;i++)
    {   s=0;
        for(int j=i;j<n;j++)
        {
            s+=ans[j];
            cout<<s<<" ";
        }
        cout<<endl;
    }


    
    return 0;
    
}
