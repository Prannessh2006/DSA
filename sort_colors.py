class Solution:
    def sortColors(self, nums: List[int]) -> None:
        for i in range(len(nums)-1):
            min_index = i
            j=i+1
            for k in range(j,len(nums)):
                if(nums[k]<nums[min_index]):
                    min_index = k
            if(min_index!=i):
                nums[i],nums[min_index]=nums[min_index],nums[i]        
