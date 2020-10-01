'''
Given a read only array of n + 1 integers between 1 and n,
find one number that repeats in linear time using less than O(n) space
and traversing the stream sequentially O(1) times.
 '''



class Solution:
    # @param A : tuple of integers
    # @return an integer
    def repeatedNumber(self, A):
        length = len(A)
        hashmap = [0]*(length+1)
        for i in range(length):
            hashmap[A[i]]+=1
        for i in range(1,len(hashmap)):
            if hashmap[i]>1:
                return i
        return -1