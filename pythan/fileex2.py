#>>>>>>>>>>>>>>> "w" ,"a","r+" modes >>>>>>>>>>>>>>

f=open("fileex2.txt","a")# >>>>>>>>>>append mode
c=f.write("haloo sourav \n")
print(c)  #>>>>>>>>>>>> print the char in file 
f.close()

f1=open("fileex2.txt","r+") # >>>>>>>>>read and write mode 
print(f1.read())
f1.write("thanks")
f.close()