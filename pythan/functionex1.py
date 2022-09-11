#>>>>>>>>>>>>>>>>>>>>>>>>>>>>  function    <<<<<<<<<<<<<<<<<<<<<<<<<

def sum(a,b):
    print("a = {0} , b = {1}".format(a,b))
    return a+b

def tup(t1):
    print(t1)    

def det(*d1):#<<<<<<<<<<<<<<
     print(d1)
     for x in d1:
         print(x)


def list1(l1):#<<<<<<<<<<<<<<
    print(l1)
    
def fun(*k1):#<<<<<<<<<<<<<<
        print(k1[2])    
    
def funt(**k): # use If the number of keyword arguments is unknown, add a double ** before the parameter name
    print("name is "+ k["sourav"])   
    
def my_function(): #<<<<<<<<<<<<<<<<<
      pass    
     
    
t=(1,2,3,4)
d={"a":1,"b":2,"c":3,"d":4}  
l=[1,2,3,4,5]

sum(2,6) 
tup(t)
det(d)
list1(l)
fun("hloo","3eq3e","ok")#<<<<<<<<<<<<
funt(varun="r3r",sourav="saini")#<<<<<<<<<<<<
my_function()
 