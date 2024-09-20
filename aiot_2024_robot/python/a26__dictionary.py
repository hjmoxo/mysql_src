def main():
    # 선언 
    dict_a = {'a':123}
    set_a = set()
    set_a.add(1)
    set_b = {1, 2, 3}

    print(type(dict_a))
    print(type(set_a))
    print(type(set_b))
    print(dict_a, set_a, set_b)

    # 요소 추가 
    dict_a['b'] = 456
    dict_a['a'] = '123' # 원래 있던 123이 string으로 바뀜(형변환)
    print(dict_a)

    # 요소 접근
    print(dict_a['a'], dict_a['b'])
    print(dict_a.get('c')) # 없는 요소에 안전 접근, None 이라고 뜸 

if __name__ == "__main__":
    main()