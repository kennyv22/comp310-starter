#include <stdio.h>

int main(int argc, char argv[]) {
    char myString[] = "Hello, World!";
    
    printf("Original: %s\n", myString);
    
    int length = 0;
    
    while (myString[length] != '\0') {
        length++;
    }
    
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        char temp = myString[start];
        myString[start] = myString[end];
        myString[end] = temp;
        
        start++;
        end--;
    }
    
    printf("Reversed: %s\n", myString);
    
    return 0;
}
