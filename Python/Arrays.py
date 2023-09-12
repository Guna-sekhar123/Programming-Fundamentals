# Find the Duplicate numbers in an given array
# make a set 
# if all the element in set == elements in array true else false

from ast import List


def duplicatearrays(nums: List[int]) -> bool:
    unique = {}
    for num in nums:
        if num in unique:
            return True
        unique.add(num)
    return False