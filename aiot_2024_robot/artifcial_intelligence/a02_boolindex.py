import numpy as np

def main():
    x_1 = np.random.randint(1, 50, 10) # 1 부터 50까지의 숫자를 10개 뽑아내라 
    x_2 = np.random.randint(1, 50, 10)
    print(x_1)
    print(x_2)
    print(x_1 > x_2)
    print(x_1[x_1>x_2])

if __name__ == "__main__":
    main()