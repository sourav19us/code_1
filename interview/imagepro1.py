from email.mime import image
import cv2

path=r"hdimage.jpg"

# image=cv2.imread(path)

image=cv2.imread(path,1)
# image=cv2.imread(path,50) <------------------

# cv2.imshow(" sample imge ", image)

# cv2.waitKey(0)

# cv2.destroyAllWindows()

# directory = r'H:\c and c++\interview'

# file_name='image_save.jpg'

# cv2.imwrite(file_name,image)

# print(" image was save")

print(image.shape)

gray=cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)

img=cv2.imread('download.jpg',0)

rgb=cv2.cvtColor(img,cv2.COLOR_GRAY2BGR)

cv2.imshow("gray to bgr",img)
0
print(gray.shape)

resize_image=cv2.resize(image,(750,450))

# take 7 argumentes file , text ,text plase, fornt ,fornt size ,RGM Value,fornt thicknes
cv2.putText(resize_image,"hloo world",(20,250),cv2.FONT_HERSHEY_SIMPLEX,5,(250,25,12),4)

#drawing line
cv2.line(resize_image,(10,25),(100,150),(25,125,18),5)

#drawing circal
cv2.circle(resize_image,(75,75),60,(250,4,56),2)

#drawing rectangle
cv2.rectangle(resize_image,(150,52),(250,145),(150,25,256),-2)

#drawing
cv2.ellipse(resize_image,(300,150),(100,120),0,180,360,(215,25,9),-1)


# cv2.imshow('gray imge',gray)
# cv2.imshow('old image',image)
cv2.imshow('resize_image image ',resize_image)

cv2.waitKey(0)
cv2.destroyAllWindows()