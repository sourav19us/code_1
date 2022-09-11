# Take diameter of a circle  as input from the user.
# Calculate the area of circle and display the area.  

# Output required::
# Display input diameter
# and Display area of circle

# a=float(input("enter diameter of circal  = "))
# c=a/2
# b=3.14*(c**2)
# print("diameter is ",a)
# print("area of circal is ",b)

# Output required is display line:  The cost   of <product name from array1> is  <price from array2>
# Array1 elements::  chips, apples, mangoes, towels, pens
# Array2 elements:: 

list1=["chips", "apples"," mangoes", "towels", "pens"]
list2=[10,11,12, 125, 19]
# print(list1[0])
for x in range(6):
    # print(x)
    print("the cost of ",list1[x]," is ",list2[x])
