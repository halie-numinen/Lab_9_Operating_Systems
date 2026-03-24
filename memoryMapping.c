#include <stdio.h>
#include <sys/resource.h>
#include <sys/time.h>
#include <stdlib.h>

int globalVariable;
char globalMessage[] = "Hello";

int main() {
    int staticVariable;
    int uninitializedVariable;
    char localChar = 's';
    float localFloat = 1.36;
    staticVariable = 10;
    printf("local variable (initialized data segment): int: %p, char: %p, float: %p\n", &staticVariable, &localChar, &localFloat);
    printf("Global message (initialized data segment): %p\n", &globalMessage);
    printf("local uninitialized variable: %p\n", &uninitializedVariable);
    printf("Global variable (uninitialized data segment): %p\n", &globalVariable);
    return 0;
}