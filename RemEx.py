import math
def square_or_square_root(arr):
    for inte in arr:
    	arr[inte] = math.sqrt(inte)
    return arr
a = [4,25]
print square_or_square_root(a) 
    	 