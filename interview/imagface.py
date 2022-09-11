import cv2
import sys

# Get user supplied values
# imagePath = sys.argv[1]
imagePath =r"img12.jpg"
# cascPath = sys.argv[2]
# cascPath =r'haarcascade_frontalface_default.xml'

# Create the haar cascade
faceCascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')

eye_cascade = cv2.CascadeClassifier('haarcascade_eye.xml')


# Read the image
image = cv2.imread(imagePath)
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
cv2.imshow('gray',gray)
# cv2.waitKey(5)
# Detect faces in the image
faces = faceCascade.detectMultiScale(
    gray,
    scaleFactor=1.1,
    minNeighbors=5,
    minSize=(30, 30)
)


# faces = faceCascade.detectMultiScale(
#     gray,
#     scaleFactor=1.1,
#     minNeighbors=5,
#     minSize=(30, 30)
#     #flags = cv2.CV_HAAR_SCALE_IMAGE
# )

# Detects eyes of different sizes in the input image
eyes = eye_cascade.detectMultiScale(gray,1.1,5)

print(faces)

print( "Found {0} faces!".format(len(faces)))

# Draw a rectangle around the faces
for (x, y, w, h) in faces:
    cv2.rectangle(image, (x, y), (x+w, y+h), (0, 255, 0), 2)
for (x, y, w, h) in eyes:
    cv2.rectangle(image, (x, y), (x+w, y+h), (0, 255, 0), 2)
    
cv2.imshow("Faces found", image)
cv2.waitKey(0)    
cv2.destroyAllWindows()    
    