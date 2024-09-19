class Abc:
    pass

def main():
    print(type(10))
    print(type(object()))
    print(issubclass(str, int)) #issubclass (A, B) A는 B의 상속을 받음?!
    print(issubclass(int, object))
    print(issubclass(Abc, int))
    print(issubclass(Abc, object))

if __name__ == "__main__":
    main()