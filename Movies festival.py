n = int(input())
vect = [[int(i) for i in input().split()] for j in range(n)]
vect.sort(key = lambda x:x[1])
current_end_time = 0
movie = 0
for start, end in vect:
    if start >= current_end_time:
        movie+= 1
        current_end_time = end
 
print(movie)