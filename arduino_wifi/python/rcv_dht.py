import serial
import pymysql

sp = serial.Serial( port='COM3', baudrate=9600, timeout=1) 
conn = pymysql.connect(host='172.16.0.17', user='user1', password='1234', db='dht11', charset='utf8')
cur = conn.cursor() #localhost 120.0.0.1이 자기자신을 가르킴
pr = cur.execute("select * from location1")

while True:
    if sp.readable():
        rcv = sp.readline()
       
        if (rcv.decode()[0:4]=="humi"):
            humi = int(rcv.decode()[4:6])
            print(humi)
        if (rcv.decode()[0:4]=="temp"):
            temp = int(rcv.decode()[4:6])
            print(temp)
            print(rcv.decode() [4:6])
        #print(rcv.decode() [:len(rcv)-1])
        #print(rcv.decode() [0:4]) #0부터 ~ 4번째 글자까지 프린트
    

