class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        a = sorted([x**2 for x in nums])
        return a