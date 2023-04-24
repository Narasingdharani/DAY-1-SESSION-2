#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("You are eligible to vote!\n");
    } else {
        int years_remaining = 18 - age;
        printf("You are not eligible to vote yet. You need to wait %d more year(s).\n", years_remaining);
    }

    return 0;
}
