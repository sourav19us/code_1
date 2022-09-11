import cv2
import numpy as np

img=cv2.imread('hdimage.jpg')

r,g,b=cv2.split(img);
# print('<<<<<>>>>>>',z)
print('<<<<<>>>>>>',r)
print('<<<<<>>>>>>',b)


cv2.imshow('r',r)
cv2.imshow('g',g)
cv2.imshow('b',b)

im=cv2.merge((r,g,b))
cv2.imshow('im',im)

cv2.waitKey(0)
cv2.destroyAllWindows()
