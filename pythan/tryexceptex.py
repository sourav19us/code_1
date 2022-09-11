
#>>>>>>>>>>>>>>>>>>>>>>>>> try except Excetion handling <<<<<<<<<<

print("enter num  a")
a=input()

print("enter num  b")
b=input()

try:                #<<<<<<<<<<<<<<<<<<<<<<<<<
    print("a + b is ",int(a)+int(b))

except Exception as e:  #<<<<<<<<<<<<<<<<  "except Exception as e" print the error 
    print(e) 
    print("enter num is not int")   

try:
    print("a  + b",int(a)+int(b))

except:              #<<<<<<<<<<<<<<<<<<<<<<<<< its output is enter print <<<<<<<<<<<<<<
    print("enter no is not int")    

print("hloo word")
