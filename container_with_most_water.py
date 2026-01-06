class Solution:
    def maxArea(self, height: List[int]) -> int:
        max_water = 0
        i=0
        j=len(height)-1
        while(i<j):
            volume = (j-i)*min(height[i],height[j])
            print(volume)
            max_water = max(volume,max_water)
            if(height[i]<=height[j]):
                i+=1
            else:
                j-=1
        return max_water
                
