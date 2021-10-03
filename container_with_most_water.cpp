/*



Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Notice that you may not slant the container.


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.


*/

# include <bits/stdc++.h>


class Solution {
public:
    int maxArea(vector<int>& height) {
        
        
        int maxx=0;
        int i=0;int j=height.size()-1; 
        while(i<j)
        {   
            maxx=max(maxx,(j-i)*min(height[i],height[j]));
            if(height[i]<=height[j])
                i++;
            else j--;
       }
        return maxx;
        
    }
};