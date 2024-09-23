def create_stduent(name, korea, math, english, science):
    return {"name": name, 
            "korea": korea, 
            "math": math, 
            "english": english, 
            "science": science}

def main():
    students = [
        create_stduent("윤인성", 87, 98, 88, 95),
        create_stduent("안쿠", 70, 70, 76, 78),
        create_stduent("아돌프", 87, 98, 88, 95),
        create_stduent("시안", 99, 100, 100, 100),
        create_stduent("류카", 80, 70, 60, 50),
        create_stduent("마티스", 100, 80, 70, 60)
    ]
    

    print("이름/t총점/t평균")
    for student in students:
        score_sum = (student["korea"]+student["math"]+student["english"]+student["science"])
        score_average = score_sum/4
        print(f"{student['name']}\t{score_sum}\t{score_average:.2f}")

if __name__ == "__main__":
    main()