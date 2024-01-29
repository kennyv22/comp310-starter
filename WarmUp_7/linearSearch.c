#include <stdio.h>

int linearSearch(int arr [], int size, int target) {
    for (int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main (int argc, char *argv[]) {
    int arr[] = {1, 4, 7, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    printf("Enter element to find: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);

    if (result != -1 ) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}