#area of rectangle
def main():
    l,b=get_values()
    area=calculate_area(l,b)
    display(area)
def get_values():
    return 5,3
def calculate_area(l,b):
    return l*b
def display(area):
    print("Area is:",area)
main()
#recursion:
def fact(n):
    if n==1:
       return 1
    else:
       return n*fact(n-1)
print(fact(5))
#fabinocci series:
def fabinocci(n):
    if n==1:
        return 1
    elif n==0:
        return 0
    else:
        return fabinocci(n-1)+fabinocci(n-2)
print(fabinocci(5))
#1)maps
nums=[1,2,3,4,5,6]
print(list(map(lambda x:x*2,nums)))
#2)filter
nums=[2,3,5,4,8,9,10]
print(list(filter(lambda x:x%2!=0,nums)))
#3)reduce
from functools import reduce
l=[1,2,3,4,5]
print(reduce(lambda x,y:x+y,l))
