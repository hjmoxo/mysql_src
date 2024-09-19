def main():
    bo = bool()
    bo1 = True
    bo1 = [0] # no element is False
    bo1 = 0.1
    bo1 = ""
    if bo1:
        print("bo1 is True")
    else:
        print("bo1 is False")

    # c (!true) -> false
    # python (not ture) - > False
    # c ( ACondition && BCondition )
    # python ( ACondition and BCondition )
    # c ( ACondition || BCondition )
    # python ( ACondition or BCondition )

if __name__ == "__main__":
    main()