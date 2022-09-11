import cv2
import numpy as np

img=cv2.imread('img6.png')
gray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)

_, thesholed=cv2.threshold(gray,127,255,cv2.THRESH_BINARY)

conteres,_=cv2.findContours(thesholed, cv2.RETR_TREE,cv2.CHAIN_APPROX_SIMPLE)
# print(conteres)

i=0

for conter in conteres:
    if i==0:
        i=1
        continue
    appox=cv2.approxPolyDP(conter, 0.01*cv2.arcLength(conter,True),True)
    
    drawcon=cv2.drawContours(img,[conter],0,(250,250),1)
    
    # print(appox)
    # print(len(appox))
    
    
    m=cv2.moments(conter)
    if m['m00']!=0.0:
        x=int(m['m10']/m['m00'])
        y=int(m['m01']/m['m00'])
        
    if len(appox)==3:
        cv2.putText(img,"trianle",(x,y),cv2.FONT_HERSHEY_SIMPLEX,.4,(0,250,250),2)    
    elif len(appox)==4:
        cv2.putText(img,"Quadrilaterla",(x,y),cv2.FONT_HERSHEY_SIMPLEX,.4,(0,250,250),2)    
    elif len(appox)==5:
        cv2.putText(img,"pentagon",(x,y),cv2.FONT_HERSHEY_SIMPLEX,.4,(0,250,250),2)    
    elif len(appox)==6:
        cv2.putText(img,"hexagon",(x,y),cv2.FONT_HERSHEY_SIMPLEX,.4,(0,250,250),2)  
    else:
        cv2.putText(img,"cirlce",(x,y),cv2.FONT_HERSHEY_SIMPLEX,.4,(0,250,250),2)  
          
cv2.imshow("shapes",img)     
cv2.waitKey(0)
cv2.destroyAllWindows()         
            