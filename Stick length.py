n = int(input())
arr =list(map(int,input().strip().split()))[:n]
arr.sort()
sum = 0
mid = arr[n//2]
for i in range(n):
    sum += abs(arr[i] - mid)
 
 
print(sum)
