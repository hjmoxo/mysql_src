class Person:
    def __init__(self, name):
        self.name = name

    def greeting(self):
        print("안녕하세요")
    
class University:
    def __init__(self, uname):
        self.uname = uname
    
    def message_crdit(self):
        print("학점 관리")
    
class Undergraduta(Person, University):
    def __init__(self, name, uname):
        Person.__init__(self, name)
        University.__init__(self, name)
    
    def study(self):
        print("공부하기")

def main():
    student = Undergraduta("유병재", "한국대학교")

    print(student.name, student.uname)

    student.greeting()
    student.message_crdit()
    student.study()

if __name__ == "__main__":
    main()