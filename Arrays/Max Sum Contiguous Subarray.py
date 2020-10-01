'''
Find the contiguous subarray within an array, A of length N which has the largest sum.
'''
inf = float('inf')
class Solution:
    # @param A : tuple of integers
    # @return an integer
    def maxSubArray(self, A):
        best = -inf
        sumsofar = 0
        for x in A:
            sumsofar += x
            best = max(sumsofar, best)
            # Doing this last, to handle case
            # when all numbers are negative.
            sumsofar = max(sumsofar, 0)
        return best