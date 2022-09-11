import cv2
import numpy as np

img1=cv2.imread('download.jpg',1)
img2=cv2.imread('hdimage.jpg',1)

img4=cv2.resize(img1,(350,350))
img5=cv2.resize(img2,(350,350))

img3=cv2.addWeighted(img4,1,img5,.5,0)

cv2.imshow('img',img3)
cv2.waitKey(0)
cv2.destroyAllWindows()