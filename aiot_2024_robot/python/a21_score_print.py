def main():
    score = float(input("학점 입력>"))

    try:
        if score > 4.5:
            raise
        if score < 0:
            raise
        if not score.isdigit:
            raise
        score = float(score)
    except:
        exit()


    if score == 4.5:
        print(f"신")
    elif score >= 4.2:
        print(f"교수님의 사랑")
    elif score >= 3.5:
        print(f"현 체제의 수호자")
    elif score >= 2.8:
        print(f"일반인")
    elif score >= 2.3:
        print(f"일탈을 꿈꾸는 소시민")
    elif score >= 1.75:
        print(f"아니")
    elif score >= 1.0:
        print(f"윰쿠가")
    elif score >= 0.5:
        print(f"섭종한다고")
    elif score >0:
        print(f"나 지금")
    else:
        print(f"착잡해")
        



if __name__ == "__main__":
    main()

