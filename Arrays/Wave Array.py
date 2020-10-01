'''
Given an array of integers, sort the array into a wave like array and return it,
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....
'''

class Solution:
    # @param A : list of integers
    # @return a list of integers
    def wave(self, A):
       A.sort()
       n=len(A)
       for i in range(0,n-1,2):
           A[i],A[i+1]=A[i+1],A[i]
       return A