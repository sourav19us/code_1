"""
       >> List is a collection which is ordered and changeable. Allows duplicate members.
       >> Tuple is a collection which is ordered and unchangeable. Allows duplicate members.
       >> Set is a collection which is unordered, unchangeable*, and unindexed. No duplicate members.
       >> Dictionary is a collection which is ordered** and changeable. No duplicate members.

"""

set1={12,'g',"sourav",12,25,23}  #<<<<<<<<<<
set2={251,"saini",12,67,23} #<<<<<<<<<<
print(set1)
print(set2)
for x in set2: #<<<<<<<<<<
    print(x)
print("len of set",len(set2)) #<<<<<<<<<<  
set3=set((1,2,3,4,5,6,7))   #<<<<<<<<<<
print(set3)
set3.add(125)#<<<<<<<<<<<
print(set3)
set3.remove(5)#<<<<<<<<<<<<<
print(set3)
del set3 #<<<<<<<<<<<<<<<

#>>>>>>>>>>>>>>>>>>>>>>>>>>  JOIN SETS         <<<<<<<<<<<<<<<<<<<<<<<<

set4=set1.union(set2)  #<<<<<<<<<<<<<<<<<<<<
print("set4 is ",set4)

set5=set1.intersection(set2)  #<<<<<<<<<<<<<<<<<<<<
print("set5 is",set5)

set6=set1.symmetric_difference(set2)  #<<<<<<<<<<<<<<<<<<<<
print(set6)