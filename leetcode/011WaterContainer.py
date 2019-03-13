# Two points method
# Cause it depends on height*width so the farest two lines are best pair
# Hiw to have higher height to get more volume for inner lines
class Solution:
    def maxArea(self, height: List[int]) -> int:
        i, j=0,len(height)-1
        water=0
        while (i < j):
            water=max(water,(j-i)*min(height[i], height[j]))
            if height[i] < height[j]:
               i+=1
            else:
               j-=1
    
        return water#
