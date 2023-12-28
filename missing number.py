n = int(input())
arr = list(map(int,input().strip().split()))[:n-1]
sum1 = sum(arr)
sum2 = (n*(n+1))//2
 
ans = sum2 - sum1
print(ans)
