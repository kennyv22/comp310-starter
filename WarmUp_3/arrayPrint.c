#include <stdio.h>

int main(int argc, char argv[]) {
    int nums [] = {1, 2, 3, 4, 5,};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
    sum += nums[i];
}

    double avg = (double) sum / 5;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;

}