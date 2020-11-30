#
# @lc app=leetcode.cn id=1672 lang=python3
#
# [1672] 最富有客户的资产总量
#

# @lc code=start
class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max_wealth = 0
        for i in range(0, len(accounts)):
            this_guy = 0
            lenth_of_guy = len(accounts[i])
            for j in range(0, lenth_of_guy):
                this_guy = this_guy + accounts[i][j]
                if j == lenth_of_guy-1:
                    max_wealth = max(this_guy, max_wealth)
        return max_wealth
# @lc code=end

