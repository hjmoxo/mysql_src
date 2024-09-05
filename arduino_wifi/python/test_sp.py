import serial
#import time 얘는 time 전체를 가져옴 난 sleep만 사용할거
from time import sleep

sp = serial.Serial( port='COM3', baudrate=9600, timeout=0) # com3,\ \는 이 줄이 끝나지 않았다는 뜻 

while True:
    sp.write(b'1') 
    #time.sleep(1)
    sleep(1)
    sp.write(b'0') 
    #time.sleep(1)
    sleep(1) #sleep 만 사용할거면 앞에 time. 쓰면 X
    

