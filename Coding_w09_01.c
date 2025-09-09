#include <stdio.h>

int main(void) {
    int start, stop;

    // ลูปถามจนกว่าจะได้ start < stop
    while (1) {
        printf("Enter start number: ");
        scanf("%d", &start);
        printf("Enter stop number: ");
        scanf("%d", &stop);

        if (start < stop) {
            break; // เงื่อนไขถูกต้อง ออกจากลูปไปรันต่อ
        } else if (start == stop) {
            printf("Your Start number is equal to Stop number, please try again!\n");
        } else { // start > stop
            printf("Your Start number is greater than Stop number, please try again!\n");
        }
    }

    // ทำงานตาม w08-02
    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("Sequence from start to stop: ");
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }
    printf("\nThank you.\n");
    return 0;
}