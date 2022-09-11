#>>>>>>>>>>>>>>>>>>>>>>>>>>>>> class and object , constructor <<<<<<<<<<<<<<<<<

class student:
    school_name="globel international school" # >>>> class var, class Attributes
    def __init__ (self,name1,age1,rollno1):#<<<<<<<<<<<<<<< class constructor <<<<<<<<<<<<<
        self.name=name1
        self.age=age1
        self.rollno=rollno1
    
    def display(self):#<<<<<<<<<<<<<<<
        print(f"name is {self.name}")  
          
    def displayage(self):
        print(f"age is {self.age}")  
        
class student1:#<<<<<<<<<<<<<<<<
    pass        
             
obj = student("sourav",23,2134)
obj.display()
print(f"name is {obj.name} , age is {obj.age} and rollno is {obj.rollno}")

obj.age=45

obj1=student1()

obj.displayage()#<<<<<<<<<<<<<<<<<<

obj1.name="hloo"#<<<<<<<<<<<<<<<<<<  Instance  Variables
obj1.age=34#<<<<<<<<<<<<<<<<<<  Instance  Variables
print(f"object1 name is {obj1.name} and age is {obj1.age}")

print(student.school_name)
print(obj.school_name)

student.school_name="wolrl international school"#>>>>>> class var can change only by that 
print(student.school_name)

del obj1  #<<<<<<<<<<<<< delete objet <<<<<<<<<<<<

del obj1.age #<<<<<<<<<<<<< delete age var <<<<<<<
 
           