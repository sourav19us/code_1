var1="hloooo"
var2=523
var3=85699746
var4="chaloo"
print(type(var1))#>>>>>>>>>>>>> type() function sow data tpye of varible
print(var3+var2)
print(var1+str(var2))#>>>>>>>>>> typecasting <<<<<<<<<<<
print("enter the input 1")
var_input=input()# >>>>>>>>>>>>>> input() funtion take only string  <<<<<<<<<<<
print("enter the input 2")
var_input2=input()
print(var_input, "\t" ,var_input2)
print(var_input+var_input2)
""" #>>>>>>>>> var_input + var_input2 not add any num bcz input() take string 
                for add a num use typecasting 
"""
print(int(var_input)+int(var_input2)) # <<<<<<<<<<<<<<<<<<<<<<<< 
"""
ex take tow num from user and sum tow num 

"""
print("enter num one")
in_var1=input()
print("enter num two")
in_var2=input()
print("a +b =",int(in_var1)+int(in_var2))