def main():
    list_a = [1, 2, 3]
    print(list_a)
    
    # append
    list_a.append(4)
    list_a.append(5)
    print(list_a)   

    # insert
    list_a.insert(0, 0)
    list_a.insert(2, 2.5)
    print(list_a)

    # del 
    del list_a[0] # 안의 데이터가 사라지진 않음 그걸 가르키는 포인터만 사라짐
    print(list_a)
    a = "a variable"
    list_a.insert(0, a)
    print(list_a)
    del list_a[0]    
    # del a
    # print(a) 이건 데이터(대상, 객체)가 사라져서 출력 X 

    # pop
    list_a.append("last element")
    re = list_a.pop(2)
    print(list_a, re)

    # remove by value
    list_a.remove("last element")
    print(list_a)

if __name__ == "__main__":
    main()