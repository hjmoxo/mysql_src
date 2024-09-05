import serial
#import time 얘는 time 전체를 가져옴 난 sleep만 사용할거
#from time import sleep

sp = serial.Serial( port='COM3', baudrate=9600, timeout=0) # com3,\ \는 이 줄이 끝나지 않았다는 뜻 

while True:
    if sp.readable():
        rcv = sp.readline() #통신된게 있으면 읽어와서 rcv에 가져옴
        print(rcv.decode()[:len(rcv)-1])
    

