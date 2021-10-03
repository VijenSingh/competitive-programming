

/*

Given s and e. Reverse the subarray from s to e.

ex:    2,3,-1,4,6,8,9,2

        s = 2, e = 5;

output :  2 3 8 6 4 -1 9 2         


*/


 


#include <iostream>
using namespace std;
int main() {
    
    int a[8] = {2,3,-1,4,6,8,9,2};
    int n=8;
    int e=5,s=2;

    for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
  cout<<endl;
   while(s<e)
   {
       a[s] = a[s]^a[e];
       a[e] = a[s]^a[e];
       a[s] = a[s]^a[e];
       s++;
       e--;
   } 

 for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
   
}
