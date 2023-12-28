n = int(input())
arr = []
if  n == 2 or n == 3 :
    print("NO SOLUTION")
elif n == 1:
    print(1)
elif n == 4:
    print(2,4,1,3)
else:
    for i in range(1,n+1):
        if i % 2 == 1:
            arr.append(i)
        
    for j in range(1,n+1):
        if j % 2 == 0:
            arr.append(j)
 
print(*arr,sep=" ")
