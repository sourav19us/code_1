import cv2
import numpy as np

img=cv2.imread('img6.png')
gray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
cv2.imshow('gray',gray)

edged=cv2.Canny(gray,30,200)

cv2.imshow('Canny',edged)

contours, hiserarchy=cv2.findContours(edged,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_NONE)

# appox=cv2.approxPolyDP(contours, 0.01*(cv2.arcLength(contours,True)),True)

# print(appox)

cv2.imshow('AFTER Canny',edged)
cv2.drawContours(img,contours,-1,(150,255,150),3)
cv2.imshow('img',img)

cv2.waitKey(0)
cv2.destroyAllWindows()