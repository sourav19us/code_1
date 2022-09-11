#>>>>>>>>>>>>>>>>>>>>> lambda function <<<<<<<<<<<<<<<

x=lambda a,b,c:a*b*c #<<<<<<<<<<<<<<<<<<
print(x(3,4,5))

def sum(x,y): #<<<<<<<<<<<<<<<<<<<
    return lambda a:a+x+y

my=sum(5,9)

print(my(5))