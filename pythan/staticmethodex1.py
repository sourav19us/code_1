#>>>>>>>>>>>>>>>>>>>>>>>>>>  static method <<<<<<<<<<<<<<<<<<

class school:
    school_name="globel school"
    def __init__(self,st,age,roolno):#<<<<<<<<<<<<<<< class constructor <<<<<<<<<<<<<
        self.student_name=st
        self.student_age=age
        self.student_roolno=roolno
        
    @staticmethod#<<<<<<<<<<<<<<<<<<<
    def print():#<<<<<<<<<<<<<<<<<<
        print(f"welcome  to school \n ")
    
    @staticmethod#<<<<<<<<<<<<<<<<<<<
    def print1(name):#<<<<<<<<<<<<<<<<<<
        print(f"welcome  to school {name} \n ")    
    
    def data_display(self):
        print(f"school name is {self.school_name}")
        print(f"student name is {self.student_name} , student age is {self.student_age} and roll no is {self.student_roolno} \n")   

obj1=school("sourav",23,2345)
obj1.print()
obj1.print1("sks")
obj1.data_display() 