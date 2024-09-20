import a34_exception
a34_exception.Myerror

import math as m    # 이름 바꾸고 싶을때 as 사용 
from math import cos as cs

import numpy as np

def main():
    print(m.tan(30/180*m.pi))
    print(m.sin(30/180*m.pi))
    print(cs(30/180*m.pi))
    print(np.arange(100))

if __name__ == "__main__":
    main()