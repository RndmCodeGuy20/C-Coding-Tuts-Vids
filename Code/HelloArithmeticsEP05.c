#include <stdio.h>

int main()
{
    /**
     * @brief C can be used as a simple calculator, arithmetic calculations like :-
     * - Addition
     * - Subtraction
     * - Multiplication
     * - Division,
     * can be accomplished using arithmetic operators in c.
     * 
     * `+-----------+---------+-----------------------------------------------------------+
     * `| @Operator | @Syntax |                         @Operation                        |
     * `+===========+=========+===========================================================+
     * `|     +     |  a + b  | Adds two or more numbers separated by this operator       |
     * `+-----------+---------+-----------------------------------------------------------+
     * `|     -     |  a - b  | Subtracts two or more numbers separated by this operator  |
     * `+-----------+---------+-----------------------------------------------------------+
     * `|     *     |  a * b  | Multiplies two or more numbers separated by this operator |
     * `+-----------+---------+-----------------------------------------------------------+
     * `|     /     |  a / b  | Divides two or more numbers separated by this operator    |
     * `+-----------+---------+-----------------------------------------------------------+
     * `|     %     |  a % b  | Gives remainder of a / b                                  |
     * `+-----------+---------+-----------------------------------------------------------+  
     * 
     * $ There are various other types of operators such as logical, relational etc. which we will discuss in  *   the upcoming videos.
     */

    int a, b;
    float result;

    a = 58;
    b = 6;

    //$ Since C is a procedural language, the code is executed line by line. Therefore, the value of any variable can get altered if any operation is performed on it and the new value can be used later in the program.

    result = a + b; //? value of `result` now becomes 64.0
    printf("Value of 'result' : %f\n", result);

    result = a - b; //? value of `result now becomes 52.0
    printf("Value of 'result' : %f\n", result);

    result = a * b; //? value of `result now becomes 348.0
    printf("Value of 'result' : %f\n", result);

    result = a / b; //? value of `result now becomes 9.66667
    printf("Value of 'result' : %lf\n", result);

    result = a % b; //? value of `result now becomes 4.0
    printf("Value of 'result' : %f\n", result);

    //! Value of `a` and `b` remains unchanged!

    return 0;
}