class Student:
    RollNo=0
    Name=""
    Height=0
    Address=""

    def display(self):
      print(self.RollNo)
      print(self.Name)
      print(self.Height)
      print(self.Address)

    def __init__(self,R,N,H,A):
       self.RollNo=R
       self.Name=N
       self.Height=H
       self.Address=A

    @classmethod
    def myMethod(cls,R,H,N,A):
       return cls(R,N,H,A)   





obj=Student(1,"Ishan",6,"karvenagar") 
obj.display()   
print(__name__)
obj1=Student.myMethod(2,"Yash",7,"Pune")
obj1.display()
   
    