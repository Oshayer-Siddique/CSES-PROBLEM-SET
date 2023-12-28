n = int(input())
children = [0] * n
 
for i in range(n):
    children[i] = i + 1
 
while len(children) > 1:
 
    survivor = []
 
    for i in range(len(children)):
        if i % 2 == 1:
            print(children[i],end = " ")
        else:
            survivor.append(children[i])
    if len(children) % 2 == 0:
        children = survivor
    else:
        starter = survivor[-1]
        survivor.pop()
        children.clear()
        children.append(starter)
        for j in survivor:
            children.append(j)
    
print(children[0])
