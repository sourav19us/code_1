
import cv2

# vde = cv2.VideoCapture(0)

# while (True):
#     ret, fram = vde.read()
#     cv2.imshow('live video of web camera', fram)
#     print("came working")
#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# vde.release()

# cv2.destroyAllWindows()


# video recording <<<<<<<<<<<<<<<<<<<

# recv=cv2.VideoCapture(0)

# fou=cv2.VideoWriter_fourcc(*'XVID')

# vidout=cv2.VideoWriter('camevideo.MP4',fou,30,(680,480))

# while(recv.isOpened()):
#     ret,fram=recv.read()
#     if ret==True:          
#         cv2.imshow('video',fram)
#         print("recording")
        
#         if (cv2.waitKey(2) & 0xFF == ord('q')): # must waitkey grater then 1
#             break
#     else:
#         print("comera not working")
#         break

# recv.release()
# cv2.destroyAllWindows()        
    
    
#play video file <<<<<<<<<<<<<<<<<<<

movie=cv2.VideoCapture('Introduction.mp4')  

while(True):
    rat,fram=movie.read()
    
    cv2.imshow('movie',fram)  
    print("movie runing")
    if cv2.waitKey(1) & 0xFF ==ord('q'):
        break
    
movie.release()
cv2.destroyAllWindows()    
    