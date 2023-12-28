n = int(input())
arr = []
def largest(n):
    largest = 0
    while (n):
        r = n % 10
        largest = max(r,largest)
        n = n//10
    return largest
res = n
while(res>=10):
    res = res - largest(res)
    arr.append(res)
    
ans = len(arr)+1
print(ans)
    