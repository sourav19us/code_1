a=int(input("enter a = "))
b=int(input("enter b = "))
print("a + b = ",a+b)
class sumof:
    def __init__(self,a,b):
        self.a=a
        self.b=b
    def sum(self):
        return self.a+self.b    
class divi(sumof):
    def __init__(self,a,b,c,d):
        self.a=a
        self.b=b
        self.c=c
        self.d=d
    def div(self):
        return (self.a/self.b)
    def sum(self):
        self.i=int(input("enter the i = "))
        return (self.a+self.b+self.c+self.d+self.i)
# boj = sumof(142,8596)   
# obj = divi(145123,4586)
# print("sum of tow num is a+b= ",boj.sum())
# print("divition of tow num a/b",obj.div())

obj = divi(142,1425,4759,6325) 
print("a+b+c+d= ",obj.sum())
print("a{0} b{1} c{2}".format(1,2,5))
    