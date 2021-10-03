





/*

    Given an array. Find an equilibrium index in this array.


    ex: -7,1,5,2,-4,3,0

    output : 3


*/


#include <bits/stdc++.h>
using namespace std;



int main() {
    
   
      vector<int> ans = {-7,1,5,2,-4,3,0};
      int n=7,s=0;
      vector<int> ps;
     
    for(int i=0;i<n;i++)
    {   
            s+=ans[i];
            ps.push_back(s);
       
    }
  

       int flg = 0,left_sum = 0,right_sum = 0;

       for(int i=1;i<n-1;i++)
       {
            left_sum = ps[i-1];
            right_sum = ps[n-1]-ps[i];

            if(left_sum == right_sum)
            {
                cout<<i;
                flg =1;
                break;
            }
       }
       if(flg == 0)
       cout<<-1;
    
    return 0;
    
}
