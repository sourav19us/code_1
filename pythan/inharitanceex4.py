#>>>>>>>>>>>>>>>>>>>>>  diamond inharitance <<<<<<<<<<<<<<<<<<<<<

class A:
    def display(self):
        print(" in class 'A'")

class B(A):
    def display(self):
        print(" in class 'B'")     
          

class C(A):
   def display(self):
      print(" in class 'C'")     
        

class D(B,C):
    def display(self):
        print(" in class 'D'")
                


obj=D()
obj.display()
        