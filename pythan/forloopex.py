l1=[["a",1],["b",2],["c",6],["d",7]]
l2=["a","b","c","d"]
for x in l2:
    print(x)

for x in l1: #<<<<<<<<<<<<<<<<<
    print(x)  

for x,y in l1: #<<<<<<<<<<<<<<<
    print(x,y)       


for x in range(2,50,6): #<<<<<<<<<<<<< 2 8(2+6) 14(8+6) 20 26 32 ..........44
        print(x)

for x in range(6): #<<<<<<<<<<<<< 0 1 2 3..... 5
        print(x)

for x in range(2,50): #<<<<<<<<<<<<< 2 3 4 5........49
        print(x)


d1=dict(l1) #<<<<<<<<<<<<<<<<
print(d1) 

for itme,y in d1.items():#<<<<<<<<<<
    print(x ,y)