import numpy as np

def main():
    li1 = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    test_arry = np.array(li1, dtype=np.int8)
    print(test_arry.dtype)
    print(test_arry.shape)
    print(test_arry.ndim)
    print(test_arry.size)
    for ele in test_arry:
        print(ele)

if __name__ == "__main__":
    main()