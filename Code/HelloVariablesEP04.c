#include <stdio.h> //? Contains meta information

int main()
{
    /**
     * @brief Each variable in C has an associated data type. Each data type requires different amounts of memory and has some specific operations which can be performed over it.
     * 
     * 
     * +---------+--------+--------------------------------------------------------------+
     * | @Format |  @Type |                             @Info                            |
     * +=========+========+==============================================================+
     * |    %d   |   int  | An int variable is used to store an integer                  |
     * +---------+--------+--------------------------------------------------------------+
     * |    %f   |  float | It is used to store decimal numbers with single precision    |
     * +---------+--------+--------------------------------------------------------------+
     * |    %c   |  char  | Stores single character and requires a single byte of memory |
     * +---------+--------+--------------------------------------------------------------+
     * |   %lf   | double | It is used to store decimal numbers with double precision    |
     * +---------+--------+--------------------------------------------------------------+
     */

    int a;
    float b;
    char c;
    double d;

    a = 20;

    b = 20.032002;

    c = 's';

    d = 20.0320022018;

    printf("%d %f %c %lf", a, b, c, d);
}
