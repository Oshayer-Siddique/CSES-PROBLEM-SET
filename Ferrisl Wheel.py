n,x = map(int,input().split())
a = list(map(int,input().strip().split()))[:n]
a.sort()
cnt = n
i = 0
j = n-1
while i < j:
    if a[i] + a[j] <= x:
        cnt -= 1
        i += 1
        j -=1
    else:
        j -= 1
 
print(cnt)