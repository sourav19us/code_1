import cv2
import numpy as np

img=cv2.imread('hdimage.jpg')
img2=cv2.resize(img,(600,600))
img3=cv2.cvtColor(img2,cv2.COLOR_BGR2GRAY)

img1=cv2.Canny(img3,50,255)

rat,thresh=cv2.threshold(img3,127,255,0)

cv2.imshow('GRAY image',img3)
cv2.imshow('canny image',img1)
cv2.imshow('threshold image',thresh)


cv2.waitKey(0)
cv2.destroyAllWindows()