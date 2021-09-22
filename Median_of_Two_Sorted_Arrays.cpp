


/*

Median of Two Sorted Arrays:-

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


*/


#include <bits/stdc++.h>
using namespace std;

double fun(vector<int> a,vector<int> b)
{
vector<double> c;
        int n1= a.size(),n2 = b.size();
        int l=0,m=0;
        
        
        while(l<n1 && m<n2)
        {
            if(a[l]<b[m])
            {
                c.push_back(a[l]);
                l++;
                
            }
           else if(a[l]>b[m]){
                
                c.push_back(b[m]);
                m++;
                
            }
            else{
                cout<<"in"<<endl;
                c.push_back(a[l]);
                l++;
                c.push_back(b[m]);
                m++;
            }
        }
        
        while(l<n1)
        {
            c.push_back(a[l++]);
        }
     while(m<n2)
        {
            c.push_back(b[m++]);
        }
        

        int sum = a.size()+b.size();
        int t1 = sum/2;
        
         if(sum%2==0)
         {
             double kp =(c[t1]+c[t1-1]);
             
              return (c[t1]+c[t1-1])/2;
         }
        else{
            int d = sum/2;
           return c[d];
        }

        

}

int main() {
    
        

        vector<int> a;
        vector<int> b;
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);
        a.push_back(4);
        cout<<fun(a,b);




}
