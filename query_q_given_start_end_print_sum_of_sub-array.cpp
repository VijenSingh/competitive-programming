



/*

    Given an array and Q queries In every query start and end index of a sub-array 

    print the sum of the sub-array.

ex : -3,6,2,4,5,2,8,-9,3,1

Q = 2

start = 1   and end = 3

start = 2   and end = 7


output1 : 12

output2 : 12

*/


#include <bits/stdc++.h>
using namespace std;



int main() {
    
   
      vector<int> ans = {-3,6,2,4,5,2,8,-9,3,1};
      int n=10,q=2,s=0;
      vector<int> ps;
     
    for(int i=0;i<n;i++)
    {   
            s+=ans[i];
            ps.push_back(s);
       
    }
  

        while(q--)
        {
            int start,end;
            cin>>start;
            cin>>end;

            cout<<ps[end]-ps[start-1]<<endl; 

        }
    
    return 0;
    
}
