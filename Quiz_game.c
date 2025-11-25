#include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("Simple Quiz Game\n\n");

    printf("1. What is the capital of India?\n");
    printf("1) Mumbai\n2) New Delhi\n3) Chennai\n4) Kolkata\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The right answer is New Delhi.\n\n");
    }

    printf("2. Which language is used for system programming?\n");
    printf("1) Python\n2) Java\n3) C\n4) HTML\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The right answer is C.\n\n");
    }

    printf("3. Who invented the telephone?\n");
    printf("1) Edison\n2) Bell\n3) Tesla\n4) Einstein\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The right answer is Bell.\n\n");
    }

    printf("Your total score is %d out of 3.\n", score);

    return 0;
}
