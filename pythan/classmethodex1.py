#>>>>>>>>>>>>>>>>>>>>>>>>>>  class method <<<<<<<<<<<<<<<<<<

class school:
    school_name="globel school"#>>>>>>>>>>>>> class Attributes
    def __init__(self,st,age,roolno):#<<<<<<<<<<<<<<< class constructor <<<<<<<<<<<<<
        self.student_name=st
        self.student_age=age
        self.student_roolno=roolno
        
    @classmethod#<<<<<<<<<<<<<<<<<<<<<<<<<
    def change_school_name(cls,x):
         cls.school_name=x
    
    def data_display(self):
        print(f"school name is {self.school_name}")
        print(f"student name is {self.student_name} , student age is {self.student_age} and roll no is {self.student_roolno} \n")   
 
    
obj=school("sourav",23,100025)
obj.data_display()


obj1=school("varun",56,110233)
obj1.change_school_name("sks school")#<<<<<<<<<<<<<<<<<<<<<<<<<<<
obj1.data_display()

    
    
            