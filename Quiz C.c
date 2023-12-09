#include <stdio.h>
#include <string.h>
#include <time.h>

void wait(int seconds) {
    clock_t endwait;
    endwait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < endwait) {}
}

int main() {
    char name[30];
    int correctAns = 0;

    printf("Enter your full name: ");
    scanf("%s", name);

    printf("\nHello %s, your C programming quiz is now starting .\n\n", name);
    printf("on each correct answer you get one point.\n\n");

    // Question 1
    printf("Ques1: What does the 'scanf' function do in C?\n");
    printf("a) Read input from the user\nb) Print text on the screen\nc) Perform mathematical calculations\nd) Declare a variable\n");
    char ans1;
    time_t start1 = time(NULL);
    printf("you choose : ");
    scanf(" %c", &ans1);
    if (ans1 == 'a' && difftime(time(NULL), start1) <= 60) {
        correctAns++;
    }

    // Question 2
    printf("Que2: How do you declare a decimal variable in C?\n");
    printf("a) float a;\nb) flo a;\nc) a float;\nd) char a;\n");
    char ans2;
    time_t start2 = time(NULL);
     printf("you choose : ");
    scanf(" %c", &ans2);
    if (ans2 == 'a' && difftime(time(NULL), start2) <= 60) {
        correctAns++;
    }

    // Question 3
    printf("Ques3: What is the purpose of the 'strcmp' function in C?\n");
    printf("a) Compare two strings\nb) Concatenate two strings\nc) Copy a string\nd) Find the length of a string\n");
    char ans3;
    time_t start3 = time(NULL);
     printf("you choose : ");
    scanf(" %c", &ans3);
    if (ans3 == 'a' && difftime(time(NULL), start3) <= 60) {
        correctAns++;
    }

    // Question 4
    printf("Que4: In C, what is the role of '--' operator?\n");
    printf("a) Add 1 to the variable\nb) Subtract 1 from the variable\nc) Multiply the variable by 2\nd) Divide the variable by 2\n");
    char ans4;
    time_t start4 = time(NULL);
     printf("you choose : ");
    scanf(" %c", &ans4);
    if (ans4 == 'b' && difftime(time(NULL), start4) <= 60) {
        correctAns++;
    }

    // Question 5
    printf("Que5: What is the output of 'printf(helloworld)' in C?\n");
    printf("a) hello\nb) helloworld\n c) world\n d) Error\n");
    char ans5;
    time_t start5 = time(NULL);
     printf("you choose : ");
    scanf(" %c", &ans5);
    if (ans5 == 'd' && difftime(time(NULL), start5) <= 60) {
        correctAns++;
    }

    printf("\n%s, you got %d out of 5 questions correct!\n", name, correctAns);
    printf("good jod and thank you for your response");

    return 0;
}
