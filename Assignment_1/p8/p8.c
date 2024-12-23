/*
 * p8.c
 *
 *  Created on: 30-Jul-2024
 *      Author: root
 */
#include <stdio.h>

#define Students 3
#define Subjects 2
#define Exams 2

void input(int marks[Students][Subjects][Exams]);
void output(int marks[Students][Subjects][Exams]);

int main() {

    int marks[Students][Subjects][Exams];

    input(marks);

    output(marks);

    return 0;
}

void input(int marks[Students][Subjects][Exams]) {

    for (int student = 0; student < Students; student++) {

        for (int subject = 0; subject < Subjects; subject++) {

            for (int exam = 0; exam <  Exams; exam++) {

                printf("Enter marks for Student %d, Subject %d, Exam %d: ", student + 1, subject + 1, exam + 1);
                scanf("%d", &marks[student][subject][exam]);
            }
            printf("\n");
        }
    }
    return ;
}

void output(int marks[Students][Subjects][Exams]) {

    for (int student = 0; student < Students; student++) {

        printf("\nStudent %d:\n", student + 1);

        for (int subject = 0; subject < Subjects; subject++) {

            printf("  Subject %d:\n", subject + 1);

            for (int exam = 0; exam <  Exams; exam++) {

                printf("    Exam %d: %d\n", exam + 1, marks[student][subject][exam]);
            }
        }
    }
    return ;
}
