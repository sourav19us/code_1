import cv2

img=cv2.imread('hdimage.jpg')

px=img[250,250]

print("px at 250,250 \n",px)

#>>>>>>>>>>>>>>>>>                        <<<<<<<<<<<<<<<<<<<

px_b=img[250,250,0]

print("bule color value at 250,250 px =",px_b)

px_g=img[250,250,1]

print("green color value at 250,250 px =",px_g)

px_r=img[250,250,2]

print("red color value at 250,250 px =",px_r)

#>>>>>>>>>>>> after px rgb value <<<<<<<<<<<<<

img[250,250]=[45,26,35]

px_b=img[250,250,0]

print("bule color value at 250,250 px =",px_b)

px_g=img[250,250,1]

print("green color value at 250,250 px =",px_g)

px_r=img[250,250,2]

print("red color value at 250,250 px =",px_r)

print(img.shape)
print(img.dtype)
print(img.size)
