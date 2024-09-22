name=["ishan","sheetal","amit","abinav high school","12th","college"]
min=len(name[0])
max=len(name[0])
maxstr=name[0]
minstr=name[0]
for element in name:
    a=len(element)
    if max<a:
        max=a
        maxstr=element
    elif min>a:
        min=a
        minstr=element

    else:
        max=max
        min=min  
        minstr=minstr
        maxstr=maxstr


print(max)
print(min)   
print(minstr)
print(maxstr)     

   
    


    