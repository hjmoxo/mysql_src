# import test_package.module_a as a
# import test_package.module_b as b

# from test_package import *
# import test_package.abc.module_abc as abc

import test_package

def main():
    # print(a.variable_a)
    # print(b.variable_b)
    # print(module_a.variable_a)
    # print(module_b.variable_b)
    # print(abc.variable_abc)
    # abc.abc_funcstion()

    print(test_package.variable_a)
    print(test_package.variable_b)
    print(test_package.variable_abc)

if __name__ == "__main__":
    main()