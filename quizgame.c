#include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("**********************************\n");
    printf("        Simple Quiz Game\n");
    printf("**********************************\n");

    printf("\nQuestion 1: Which language is used to write operating systems?\n");
    printf("1. Python\n2. C\n3. HTML\n4. Java\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C.\n");
    }

    printf("\nQuestion 2: Who developed the C language?\n");
    printf("1. James Gosling\n2. Charles Babbage\n3. Dennis Ritchie\n4. Bjarne Stroustrup\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Dennis Ritchie.\n");
    }

    printf("\nQuestion 3: What is the extension of a C source file?\n");
    printf("1. .txt\n2. .exe\n3. .c\n4. .cpp\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is .c\n");
    }

    printf("\nQuestion 4: Which of the following is not a loop in C?\n");
    printf("1. for\n2. while\n3. repeat\n4. do-while\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is repeat.\n");
    }

    printf("\nQuestion 5: What does 'printf' function do?\n");
    printf("1. Takes input\n2. Displays output\n3. Defines variable\n4. Allocates memory\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Displays output.\n");
    }

    printf("\n**********************************\n");
    printf("Your final score is: %d out of 5\n", score);
    printf("**********************************\n");

    if (score == 5)
        printf("Excellent! 🎉\n");
    else if (score >= 3)
        printf("Good job! 😊\n");
    else
        printf("Keep practicing! 💪\n");

    return 0;
}
