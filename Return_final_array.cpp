


/*


    Given an array of size N with all elements equal to zero. 
    Given Q queries having an index and a value add the given value to all the elements from i to n-1.
    Return the final array.


    ex : 0,0,0,0,0,0,0
    Q:  i   value

        1   3   : 0,3,3,3,3,3,3
        4   2   : 0,3,3,3,5,5,5
        2   1   : 0,3,4,4,6,6,6

*/



#include <bits/stdc++.h>
using namespace std;



int main() {
    
    int n,s=0;
    cin>>n;
      vector<int> ans(n,0);
      int q,i,val;

      cin>>q;

      while(q--)
      {
          cin>>i;
          cin>>val;
          ans[i] = ans[i]+val;
      }
      
      vector<int> ps;
     
    for(int i=0;i<n;i++)
    {   
            s+=ans[i];
            ps.push_back(s);
       
    }
     for(int i=0;i<n;i++)
     cout<<ps[i]<<" ";

    
    return 0;
    
}

