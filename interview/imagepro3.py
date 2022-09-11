import cv2
import numpy as np

img=cv2.imread('hdimage.jpg')

roi=cv2.selectROI(img)
print(roi)

img_cop=img[int(roi[1]):int(roi[1]+roi[3]),int(roi[0]):int(roi[0]+roi[2])]
cv2.imshow('img',img_cop)
cv2.waitKey(0)
cv2.destroyAllWindows()