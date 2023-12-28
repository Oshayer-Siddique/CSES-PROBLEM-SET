n = int(input())
arr = list(map(int,input().strip().split()))[:n]
stor = []
past = 0
for i in range(n):
    if past + arr[i] >= arr[i]:
        past = past +  arr[i]
    else:
        past = arr[i]
    
    stor.append(past)
 
 
ans = max(stor)
print(ans)
