def main():
    for i in range(10):
        print(f"{i}번째 반복 출력입니다")

    li1 = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    for i in li1:
        print(f"list {i}번")

    for i in range(1, 10, 2): # 1번 부터 9번까지 반복, 2씩 띄워서 
        print(f"{i}번째 반복 출력입니다")

    li2 = ["banana", "apple", "heart", "clover", "diamond", "spade"]
    for ele in li2:
        print(ele)

if __name__ == "__main__":
    main()