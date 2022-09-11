#>>>>>>>>>>>>>>>>>> "seek()" , "tell()"  function <<<<<<<<<<<<<
f=open("fileex3.txt","r")
print(f.readline())
f.seek(0)     #<<<<<<<<<<<<<<<<<< seek take char num  from  read file
print(f.readline())
print(f.tell())   #<<<<<<<<<<<<<<<<<< tell print char num file read 
print(f.readline())
f.seek(25)   #<<<<<<<<<<<<<<<<<<
print(f.tell())   #<<<<<<<<<<<<<<<<<<