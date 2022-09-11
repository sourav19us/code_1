l=["sourav",'k',23,345]
l2=[115,69,53,65,785]
i=1
for x in l:
    print("l list element {0} is {1}".format(i,x))
    i+=i
#>>>>>>>>>>> slicing <<<<<<<<<<<  
  
print(l[:]) 
print(l[:2]) 
print(l[::-1]) 

#>>>>>>>>>>>>>>>>  list function <<<<<<<<<<<<

print(l2.sort())
l2.remove(65)
print(l2)
l2.append(4859)
print(l2)
l2.insert(5,777)
l2.insert(6,888)
l2.insert(6,888)
print(l2)
l.extend([65,"hlo",625,'e'])
print(l)
l3=l.copy()
print(l3)
"""
        >>> sort(): Sorts the list in ascending order.
        >>> type(list): It returns the class type of an object.
        >>> append(): Adds one element to a list.
        >>>  extend(): Adds multiple elements to a list.
        >>> index(): Returns the first appearance of a particular value.
        >>> max(list): It returns an item from the list with a max value.
        >>> min(list): It returns an item from the list with a min value.
        >>> len(list): It gives the overall length of the list.
        >>> clear(): Removes all the elements from the list.
        >>> insert(): Adds a component at the required position.
        >>> count(): Returns the number of elements with the required value.
        >>> pop(): Removes the element at the required position.
        >>> remove(): Removes the primary item with the desired value.
        >>> reverse(): Reverses the order of the list.
        >>> copy():  Returns a duplicate of the list.
"""