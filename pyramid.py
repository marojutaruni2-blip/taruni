n=int(input("enter number of rows:"))
for i in range(1, n+1):
    for space in range(n - i):
        print("",end="")
    for star in range(i - 1):
        print("*", end="")
    print()
