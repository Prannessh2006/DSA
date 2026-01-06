class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        i = 0 
        j = i+1
        size = len(nums)
        while(i<j and j<size):
            if(nums[i]==0 and nums[j]!=0):
                nums[i],nums[j] = nums[j],nums[i]
                i+=1
            elif(nums[j]==0 and nums[i]!=0):
                i=j
            j+=1
        return nums

            
