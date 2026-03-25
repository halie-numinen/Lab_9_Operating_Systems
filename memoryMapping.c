#include <stdio.h>
#include <sys/resource.h>
#include <sys/time.h>
#include <stdlib.h>

int globalVariable;
char globalMessage[] = "Hello";

void printFunc() {
    int localVarible = 20;
    printf("local variable: %d, %p\n", localVarible, &localVarible);
}

int factorial(int number) {
    if(number == 0) {
        return 1;
    }
    else {
        printf("Direction of growth stack (down): %p\n", &number);
        return number * factorial(number -1);
    }
}

int main() {
    int staticVariable;
    int uninitializedVariable;
    char localChar = 's';
    float localFloat = 1.36;
    staticVariable = 10;
    int *ptr = (int*) malloc(sizeof(int) * 10);
    *intPtr = 50;
    char *charPtr = (char*) malloc(sizeof(char) * 10);
    *charPtr = 'w';
    float *floatPtr = (float*) malloc(sizeof(float) * 10);
    *floatPtr= 1.90;
    printf("local variable (initialized data segment): int: %p, char: %p, float: %p\n", &staticVariable, &localChar, &localFloat);
    printf("Global message (initialized data segment): %p\n", &globalMessage);
    printf("local uninitialized variable: %p\n", &uninitializedVariable);
    printf("Global variable (uninitialized data segment): %p\n", &globalVariable);
    printf("Heap addresses: %p, %p, %p\n",(void*)intPtr, (void*)charPtr, (void*)floatPtr);
    printFunc();
    free(intPtr);
    free(charPtr);
    free(floatPtr);
    factorial(4);
    return 0;
}