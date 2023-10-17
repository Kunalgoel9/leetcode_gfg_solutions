class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return max_subarray_sum(nums)





def max_subarray_sum(arr):
    if not arr:
        return 0

    max_sum = float('-inf')
    current_sum = 0
    start = 0

    for end in range(len(arr)):
        current_sum =max(arr[end],current_sum+arr[end])
        max_sum = max(max_sum, current_sum)

    return max_sum