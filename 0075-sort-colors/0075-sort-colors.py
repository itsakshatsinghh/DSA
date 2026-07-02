class Solution:
    def sortColors(self, nums: List[int]) -> None:
        c0 = c1 = c2 = 0
        for i in nums: 
            if i==0:
                c0=c0+1
            elif i==1:
                c1=c1+1
            else :
                c2=c2+1
        #in place array modification 

        index = 0 
        for _ in range(c0):
            nums[index] = 0
            index += 1
        for _ in range(c1):
            nums[index] = 1
            index += 1
        for _ in range(c2):
            nums[index] = 2
            index += 1