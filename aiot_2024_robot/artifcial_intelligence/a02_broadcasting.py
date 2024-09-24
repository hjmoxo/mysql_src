import numpy as np

def main():
   x = np.arange(1, 10).reshape(3, 3)
   print(x)
   y = np.full((3, 3), 10)
   z = np.array([10, 20, 30]).reshape(-1, 1) # (3, 1) 원래는 이렇게 써야하지만 -1하면 컴퓨터가 알아서 넣어주세요
   print(y)
   print(x + y)
   print(x + 10) # broadcasting
   print(x + z)

if __name__ == "__main__":
    main()