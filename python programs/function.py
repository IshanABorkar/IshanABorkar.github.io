def greet():
    print("hello world")

greet()

def add_nos(num1,num2):
    sum=num1+num2
    print(sum)  

add_nos(5,8)

def square(num1):
    sq=num1*num1
    return
    print(sq)
    
square(4)    

import math
math.sqrt(25)
print("the square root is ",math.sqrt(25))




greet=lambda name : print("the name is",name)
greet("ishan")

message="hello"
def greet():
  
   print("local",message)

greet()   
print("Global", message)



a=1
def add():
    global a
    a=a+5
    print(a)


def outer_function():
    num = 20

    def inner_function():
        global num
        num = 25
    
    print("Before calling inner_function(): ", num)
    inner_function()
    print("After calling inner_function(): ", num)

outer_function()
print("Outside both function: ", num)
    
import math
math.factorial(6)
print(math.factorial(6))
