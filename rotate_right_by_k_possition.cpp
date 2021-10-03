


/*

Given an array Rotate the array by k possitions from right to left.


ex : 3,7,1,6,8,-2,9

k = 3

output : 8,-2,9,3,7,1,6

*/



#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> a,int s,int e)
{
        
        while(s<e)
        {   
            int t = a[s];
            a[s] = a[e];
            a[e] = t; 
            s++;
            e--;
        }
        return a;
}
int main() {
    
   
      vector<int> ans = {3,7,1,6,8,-2,9};
      int A=7,k=k%A;
      
        
        ans = reverse(ans,(A-k),A-1);
        
        ans = reverse(ans,0,A-k-1);
        ans = reverse(ans,0,A-1);
   

    for(int i=0;i<A;i++)
    cout<<ans[i]<<" ";
    
    return 0;
    
}
