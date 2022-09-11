name= input("enter your name:-")
age=int(input("how old are you? {0} :-".format(name)))
print("your enter name  {0} and age {1} ".format(name,age))

if age>=18:
    print("you can draive car")
    
elif age<18 and age>=12:
    print("you can draive motor bycycal")    
    
elif age<12 and age>8:
    print("you can draive bycycal")    
    
else:
    print("""your age is not greater than 8 so \
    con't  draive """)    
    
    
#>>>>>>>>>>>>>>>>>>>>>>>>>>>   truthy value         <<<<<<<<<<<<<<<<<<<<<<<<

name=input("enter the name :-")
if name:                           #<<<<<<<<<<<<<<<<< 
    print("your name is {0}".format(name))   
else:                                   #<<<<<<<<<<<<<<<<<    
    print("you not enter any name ")           