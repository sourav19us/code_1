#>>>>>>>>>>>>>>>>>>>>>>>>> single inheritance , super() function <<<<<<<<<<<<<<<<<<<<<<

#>>>>>>>>>>>>>>>>>> syntex :- class child_class_name(parent_class_name):

class parent:#<<<<<<<<<<<<<<<<<<<
    def __init__(self,fname,mname,lname):
        self.first_name=fname
        self.mid_name=mname
        self.last_name=lname
    
    def print(self):
        print(f"parent name is {self.first_name}  {self.mid_name} {self.last_name} \n")  
        
    
class child(parent):#<<<<<<<<<<<<<<<<<<
    def __init__(self,fname,mname,lname,age): 
        super().__init__(fname, mname, lname) #<<<<<<<<<<<<<<<<<<
        self.age=age 
        
    def display(self):
        print(f"chaild name {self.first_name}  {self.mid_name} {self.last_name} and age is {self.age} \n")           
        

parent1=parent("sourav","kumar","saini")
parent1.print()
child1=child("jone","\0","saini",12)
child1.display() 

fn=input("enter the first name :- \n")       
mn=input("enter the mid name :- \n")       
ln=input("enter the last name :- \n")       
ag=input("enter the age :- \n")       

ch1=child(fn,mn,ln,ag)
ch1.display()