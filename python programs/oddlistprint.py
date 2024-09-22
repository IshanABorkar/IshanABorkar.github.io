l1 = [10, 20, 25, 30, 35]
l2 = [40, 45, 60, 75, 90]
l3=[]

for nos1 in l1:
    if nos1%2!=0:
      l3.append(nos1)
    else:
       print("")   
  
for nos2 in l2:
    if nos2%2!=0:
       l3.append(nos2)
    else:
       print("")   
       
print(l3)
