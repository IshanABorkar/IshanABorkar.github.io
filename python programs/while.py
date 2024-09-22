

i=3
j=9

while i<=j:
    print(i)
    i=i+1



ctr=0

while ctr <5:
    print("inside loop")
    ctr=ctr+1

else:
    print("outside loop")




for x in range(5):
    if x==2:
        break
    print(x)
    
  
i=1
while i<=10:
    print('6 * ',(i), '=',6 * i)
    
    if i>=5:
        break
    i=i+1




for i in range(5):
    if i == 3:
        continue
    print(i)


number=0
while number<10:
    number =number +1

    if number%2==0:
       continue
    print(number)    
