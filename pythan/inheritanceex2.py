#>>>>>>>>>>>>>>>>>>>> multiple inharitance <<<<<<<<<<<<<<

class parent1:
    parent1_num=12
    h=120                   #<<<<<<<<<<<<<<<<<<<
    def __init__(self,pn,page):
        self.name=pn
        self.age=page
    
    def display1(self):
        print(f"name is {self.name} and age is {self.age} \n")  
    
class parent2:
    parent2_num=1
    h=10                #<<<<<<<<<<<<<<<<<<< 
    def __init__(self,add):
        self.address=add
        
    def display2(self):
        print(f"address is {self.address}")    
                 
                 
class chaild(parent1,parent2):#<<<<<<<<<<<<<<<<<<<<
    h=3                 #<<<<<<<<<<<<<<<<<<<
    def __init__(self, pn, page,add):
        super().__init__(pn,page)
        self.address=add
        
    def display3(self):
        print(f"name is {self.name} , age is {self.age} address is {self.address} \n")
       
                   

obj=chaild("sourav",25 ,"weq")
print(obj.h)
obj.display3()


