#include <stdio.h>
#include <stdbool.h>

bool isComposite(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int compositeCount = 0;
    int compositeArr[10];
    int index = 0;

    for (int i = 0; i < 10; i++) {
        if (isComposite(arr[i])) {
            compositeCount++;
            compositeArr[index] = arr[i]; 
            index++;
        }
    }

    printf("Number of composite numbers: %d\n", compositeCount);
    printf("Array of composite numbers: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", compositeArr[i]);
    }

    return 0;
}
