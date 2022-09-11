#>>>>>>>>>>>>>>>>> Lambda function <<<<<<<<<<<

from ast import If
from tty import IFLAG


def sum(x,y):#<<<<<<<<<< simple function diff
    return x+y
print(sum(8,9))

print(" lambda function >>>> ")

v= lambda x1,y1:x1*y1 #<<<<<<<<<<<<<<<<<< Lambda function
print(v(8,9))

