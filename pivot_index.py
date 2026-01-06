class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        left_sum=0
        right_sum=0
        for i in range(len(nums)):
            if(i==0):
                if(0==sum(nums[i+1:])):
                    return i
            elif(i==len(nums)-1):
                if(0==sum(nums[:i])):
                    return i
            else:
                left_sum = sum(nums[i+1:])
                right_sum = sum(nums[:i])
                if(left_sum==right_sum):
                    return i
        return -1
