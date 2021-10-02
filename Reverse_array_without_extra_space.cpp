

/*

Given an array reverse the array without using extra space.

*/



#include <iostream>
using namespace std;
int main() {
    
    int a[8] = {3,2,-1,6,7,3,1,9};
    int n=8;
    int i=0,j=n-1;
    while(i<j)
    {
        a[i] = a[i]^a[j];
        a[j] = a[i]^a[j];
        a[i] = a[i]^a[j];
        i++;j--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

