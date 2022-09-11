import cv2
import numpy as np

img=cv2.imread('hdimage.jpg')
img1=cv2.resize(img,(600,600))

k_sharped=np.array([[-1, -1, -1],
                    [-1, 8, -1],
                    [-1, -1, -1]]) 

# shar_img=cv2.filter2D(img1,-1,k_sharped)
shar_img = cv2.filter2D(src=img1, ddepth=-1, kernel=k_sharped)

cv2.imshow('shar_img',shar_img)

cv2.waitKey(0)
cv2.destroyAllWindows()

# # importing the modules needed
# import cv2
# import numpy as np

# # Reading the image
# img=cv2.imread('hdimage.jpg')
# img1=cv2.resize(img,(600,600))

# # Creating the kernel(2d convolution matrix)
# kernel2 = np.array([[-1, -1, -1],
# 					[-1, 15, -1],
# 					[-1, -1, -1]])

# # Applying the filter2D() function
# img = cv2.filter2D(src=img1, ddepth=-1, kernel=kernel2)

# # Shoeing the original and output image
# cv2.imshow('Original', img1)
# cv2.imshow('Kernel Blur', img)

# cv2.waitKey()
# cv2.destroyAllWindows()
