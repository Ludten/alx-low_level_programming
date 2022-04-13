0-print_name.c: a function that prints a name.

1-array_iterator.c: a function that executes a function given as a parameter on each element of an array.

2-int_index.c: a function that searches for an integer.

a program that performs simple operations.

    Usage: calc num1 operator num2
    You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
    operator is one of the following:
        +: addition
        -: subtraction
        *: multiplication
        /: division
        %: modulo
    The program prints the result of the operation, followed by a new line
    You can assume that the result of all operations can be stored in an int
    if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
    if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
    if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

a program that prints the opcodes of its own main function.

    Usage: ./main number_of_bytes
    Output format:
        the opcodes should be printed in hexadecimal, lowercase
        each opcode is two char long
        listing ends with a new line
