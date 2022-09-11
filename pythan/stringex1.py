print("hloo sourav")
print('hloo world')
print("sourav"+"saini")
"""
print("enter the first name ")
First_name=input()
print("enter the last name ")
Last_name=input()
"""
First_name=input("enter the first name ")#<<<<<<<<<<<<<<<
Last_name=input("enter the last name ")#<<<<<<<<<<<<<<<<<<<
print(First_name+"  "+Last_name)

string="hloo word how are you"
print(string[3])
print(string[12])#<<<<<<<<<<<<<<<
print(string[18])
print("\n")
print(string[-1])
print(string[-9])#<<<<<<<<<<<<<<<
print(string[-13])

"""
slicing 
[start:stop:step] *** stop value not include

"""
print(string[:])#<<<<<<<<<<<<<<<<<<<
print(string[0:])#<<<<<<<<<<<<<<<<<<<
print(string[0:5])#<<<<<<<<<<<<<<<<<<<
print(string[2:5])#<<<<<<<<<<<<<<<<<<<

print(string[:5]+string[5:13]) #<<<<<<<<<<<<<<<<<<<

print(string[::4])#<<<<<<<<<<<<<<<<<<<
print(string[2::4])#<<<<<<<<<<<<<<<<<<<
l="abcdelfsdefes"
print(l[::-1])#<<<<<<<<<<<<<<<<<<<
print(l[0::1])#<<<<<<<<<<<<<<<<<<<

"""
  >>>>>>>>>>>> string operator   "+" , "*" , "in" , "not in" <<<<<<<<<<<<<  
             
                "in" , "not in"  = o/p if true or false
"""
st="sourav "
print(st*5)#<<<<<<<<<<<<<<<<<<
print(st*5+"saini")
print(st*(5+5))
st1="my name is sourav"
print("my" in st1)#<<<<<<<<<<<<<
print("sourav" in st1)
print("gourav" in st1)
print("gourav" not in st1)#<<<<<<<<<<<<<<<

#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
age=23
print("my age is "+str(age)+" year")
print("my age is {0} year".format(age))#<<<<<<<<<<<<<<<<<<<<
print(" hlo {0} ,{1} ,{2},{3}".format(1,'d',"sourav",25))#<<<<<<<<<<<<<<<<<<<
print("jan : {0} , feb :{0} , mar :{1}".format("yes","no"))

#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>       <<<<<<<<<<<<<<<<<<<<<<<<<<
for i in range(1,13):
    print("No {0:2} sqre is {1:3} cube is {2:4}".format(i,i**2,i**3))#<<<<<<<<<<<<<<<<<<<

print("\n")
    
for i in range(1,13):
    print("No {0:2} sqre is {1:<3} cube is {2:<4}".format(i,i**2,i**3))#<<<<<<<<<<<<<<<<<<<    
    

print("pi value is {0:12}".format(22/7))    #<<<<<<<<<<<<<<<<<<
print("pi value is {0:<12.6f}".format(22/7))   #<<<<<<<<<<<<<<<<<< 
print("pi value is {0:<12.20f}".format(22/7))   #<<<<<<<<<<<<<<<<<< 

#>>>>>>>>>>>>>>>>>>>>>>>> f-string <<<<<<<<<<<<<<<<
age1=50
print(f"my age is {age1} year")#<<<<<<<<<<<<
print(f"pi value is {22/7:12.20f}")#<<<<<<<<<<<<
pi=22/7
print(f" pi value is {pi:12.20f}")#<<<<<<<<<<<<