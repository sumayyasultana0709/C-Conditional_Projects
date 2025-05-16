#include <stdio.h>

int main() {
    int colour;
    printf("Enter the colour (1=Red, 2=Yellow, 3=Green): ");
    scanf("%d", &colour);

    if (colour == 1) {
        printf("Stop\n");
    } else if (colour == 2) {
        printf("Get ready\n");
    } else if (colour == 3) {
        printf("Go\n");
    } else {
        printf("Not a valid colour\n");
    }

    return 0;
}
