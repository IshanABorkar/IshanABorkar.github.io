
str="Ishan is 18 years old .Ishan is in the first year of college."
str.count("Ishan")
print(str.count("Ishan"))

def firstlast(numbers):
    print(numbers)
    l1=len(numbers)
    a= numbers[0]
    b= numbers[l1-1]
    
    print(a)
    print(b)
    if a==b:
        print("true") 
    else:
        print("false")
   
nos1=[10, 20, 30, 40, 10]
firstlast(nos1)

nos2=[75, 65, 35, 75, 30]
firstlast(nos2)






