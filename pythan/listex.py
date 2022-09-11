l1=[3,45,565,"sourav"]
print(l1)
l1.insert(3,99)
print(l1)
l2=l1.copy()
print(l2)
l1.remove("sourav")
print(l1)
print(max(l1))
print(min(l1))
print(l1.count(3))
print(len(l1))
l1.insert(2,4582)
print(l1)
l1.extend([52,365,142])
print(l1)
print(l1[::])
print(l1[0:6:2])
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