#include <stdio.h>

int main()
{
    int a, b, result;

    printf("========================================\n");
    printf("PRE-INCREMENT vs POST-INCREMENT DEMO\n");
    printf("========================================\n\n");

    printf("POST-INCREMENT (a++) \n");
    a = 5;
    printf("Initial value: a = %d\n", a);
    result = a++;
    printf("After 'result = a++'\n");
    printf("  result = %d (used old value of a)\n", result);
    printf("  a = %d (incremented after assignment)\n\n", a);

    printf("PRE-INCREMENT (++b) \n");
    b = 5;
    printf("Initial value: b = %d\n", b);
    result = ++b;
    printf("After 'result = ++b'\n");
    printf("  result = %d (used new value of b)\n", result);
    printf("  b = %d (incremented before assignment)\n\n", b);

    

    

    return 0;
}