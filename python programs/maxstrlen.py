name=["ishan","sheetal","amit","abinav high school","12th","college"]
max=len(name[0])


for element in name:
    a=len(element)
   # print(a)
    if max < a:
        max=a
        str=element

    else:
        max=max
        str=str

       

print(str)    
print(max)    








