n = int(input())
arr = [n]
if n == 1:
    print(1)
else:
    while n > 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3*n + 1
        arr.append(n)
    
    
        
 
    
    print(*arr,sep = " ")