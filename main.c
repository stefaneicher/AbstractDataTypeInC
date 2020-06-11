#include "CircularBuffer.h"
#include <stdio.h>

int main() {
    printf("Hello, Abstract Data Type!\n");

    CircularBuffer circularBuffer1 = CircularBuffer_Create(10);
    CircularBuffer circularBuffer2 = CircularBuffer_Create(10);
    int empty1 = CircularBuffer_IsEmpty(circularBuffer1);
    int empty2 = CircularBuffer_IsEmpty(circularBuffer2);

    int i = circularBuffer1->capacity;//Fails in Option 2 but is accessible in Option 1
    return 0;
}
