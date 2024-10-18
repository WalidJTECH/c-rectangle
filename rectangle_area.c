
#include <stdio.h>

int main() {
    float length, width, area;

    printf("Please enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Please enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;

    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
