from dataclasses import dataclass

@dataclass

class Student:       
        name: str 
        korea: int
        math: int 
        english: int
        science: int
        
def main():
    students = [
        Student("윤인성", 87, 98, 88, 95),
        Student("안쿠", 70, 70, 76, 78),
        Student("아돌프", 87, 98, 88, 95),
        Student("시안", 99, 100, 100, 100),
        Student("류카", 80, 70, 60, 50),
        Student("마티스", 100, 80, 70, 60)
    ]
    

    print("이름/t총점/t평균")
    for student in students:
        score_sum = (student.korea + student.math + student.english + student.science)
        score_average = score_sum/4
        print(f"{student.name}\t{score_sum}\t{score_average:.2f}")
    a_student = Student("A", 11, 22, 33, 44) # self 는 a_student로 치환 
    print(a_student.name)

if __name__ == "__main__":
    main()