

/*

Given an array count no. of elements that have at least one element greater than themself.


arr = {3,-2,6,8,4,8,5}

output = 5

*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int a[7] = {3,-2,6,8,4,8,5};
    int mx= INT_MIN;
    for(int i=0;i<7;i++)
    {
        if(mx<a[i])
        mx=a[i];
    }

int ans=0;
 for(int i=0;i<7;i++)
    {
        if(a[i]!=mx)
        ans++;
    }


cout<<ans;
}

