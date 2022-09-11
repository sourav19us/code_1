#>>>>>>>>>>>>>>>>> multilevel inharitance <<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>> public,protected,private <<<<<<<<
 
class a:
    name="sourav" #>>>>>> public <<<<<<
    _phoneNo=142145 #>>>>> protected <<<<<<<
    __salry=1253 #>>>>>> private <<<<
    def __init__(self,lname,add):
        self.last_name=lname
        self.address=add
    
    def getsalry(self):
        print(self.__salry)
        
    def display(self): 
        print(f"name is {self.name} {self.last_name} , phone no is {self._phoneNo}")   
        print(f"salry {self.__salry} and address {self.address}")  
        
    
class b(a):
    def __init__(self, lname, add,st):
        super().__init__(lname, add)
        self.stat=st
    def display(self):
        super().display()
        print(f"stat is {self.stat}") 
        print(super().name)          
        print(super()._phoneNo)  
        super().getsalry()     
        
    
class c(b):
    def __init__(self, lname, add, st):
        super().__init__(lname, add, st)
    
        
    def displayall(self):
        super().display()
 
        
obj=c("saini","jaipur","ewqd") 
obj.displayall()                 