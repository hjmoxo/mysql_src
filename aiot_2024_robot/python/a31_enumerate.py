def main():
    example_list = ['요소A', '요소B', '요소C']

    print(enumerate(example_list))
    for i, v in enumerate(example_list):
        # (i, v) = ( 0, '요소A') 이게 아래 소괄호 없어도 ㄱㅊ 밑은 튜플을 i랑 v로 나눈거임 
        print(f"{i} 번째 원소는 {v}")

if __name__ == "__main__":
    main()