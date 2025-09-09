#include <stdio.h>

// ----------------------------
// Function: forLoopDemo()
// ใช้ for loop ร่วมกับ continue
// ----------------------------
void forLoopDemo() {
    printf("1) For loop with continue:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 6) continue;
        printf("%d ", i);
    }
    printf("\n\n");
}

// ----------------------------
// Function: whileLoopDemo()
// ใช้ while loop ร่วมกับ continue
// ----------------------------
void whileLoopDemo() {
    printf("2) While loop with continue:\n");
    int i = 1;
    while (i <= 10) {
        if (i == 6) {
            i++;  // ป้องกันลูปไม่รู้จบ
            continue;
        }
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

// ----------------------------
// Function: doWhileLoopDemo()
// ใช้ do-while loop ร่วมกับ continue
// ----------------------------
void doWhileLoopDemo() {
    printf("3) Do-While loop with continue:\n");
    int i = 1;
    do {
        if (i == 6) {
            i++;
            continue;
        }
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n\n");
}

// ----------------------------
// Main Function
// ----------------------------
int main() {
    // เรียกใช้ทั้ง 3 ฟังก์ชันเพื่อเปรียบเทียบ
    forLoopDemo();
    whileLoopDemo();
    doWhileLoopDemo();

    return 0;
}