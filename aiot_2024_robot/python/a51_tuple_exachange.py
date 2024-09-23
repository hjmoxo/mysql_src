def main():
    a, b = 10, 20
    print(f"a: {a}, b: {b}")
    a, b = b, a
    print(f"a: {a}, b: {b}")

if __name__ == "__main__":
    main()