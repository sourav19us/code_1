
#>>>>>>>>>>>>>>>>>>>> file read mode <<<<<<<<<<<<

f=open("file1.txt","r") # >>>>>file open 
y=f.read()
#print(f.read()) # >>>>>>>>>read full file txte
#print(f.readline()) # >>>>>>>>>read line 1 at a time of txte 
#print(f.readlines()) # >>>>>>>>>read line in list format 
for x in y:
    print(x,end="")


f.close()    # >>>>>>>>>clase file