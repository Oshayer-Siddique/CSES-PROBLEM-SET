n,m,k=  map(int,input().split())
a = list(map(int,input().strip().split()))[:n]
b = list(map(int,input().strip().split()))[:m]
a.sort()
b.sort()
i = 0
j = 0
cnt = 0
while ( i < n and j < m):
    if a[i] - k > b[j]:
        j += 1
    elif a[i] + k < b[j]:
        i+= 1
    else:
        i+=1
        j+=1
        cnt+=1
 
print(cnt)
