st="hlo sourav how are you "
i=1
for x in st:
    print("char {0} is {1} ".format(i,x))
    i+=1
    
st2="2123,4433,4455,567,657," 
for x in st2:
       if x==',':
           print(x)
       else:
           continue   