#
# @lc app=leetcode.cn id=1480 lang=python3
#
# [1480] 一维数组的动态和
#

# @lc code=start
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        result_arr = []
        for i in range(0, len(nums)):
            if i==0:
                result_arr.append(nums[i])
            else:
                result_arr.append(nums[i]+result_arr[i-1])
        return result_arr
# @lc code=end

