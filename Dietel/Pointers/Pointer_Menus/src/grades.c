// Enter Choice:
// 0 Print the array of grades
// 1 Find the minimum grade
// 2 Find the maximum grades
// 3 print the average on all tsts for each student
// 4 end program

// pointers to functions(in arrays) must have the same return type and same paramerters
// min/max should print and not return
// output averge for each student (not a specific) and return nothing - same parm as printarray, min and maximum
// Store pointers in array processGrades -> choice is the subscript
//


//todo: finish implmentation of remaining functions


#include <stdio.h>
#include <limits.h>
#define STUDENTS 3
#define EXAMS 4


void minimum(const int grades[][EXAMS], int pupils, int tests);
void maximum(const int grades[][EXAMS], int pupils, int tests);
void average(const int grades[][EXAMS], int pupils, int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);


int main(void){

    void (*processGrades[4])(const int grades[][EXAMS], int pupils, int tests) =
     {printArray, minimum, maximum, average};


     int student;

     const int studentGrades[STUDENTS][EXAMS] =
     {{77, 68, 86, 73},
      {96, 87, 89, 78},
      {50, 90, 86, 81}};


    int userInput;
    do{
        puts("1. Print the array of grades");
        puts("2. Find the minimum grade");
        puts("3. Find the maximum grade");
        puts("4. Print the average for all students");
        puts("5. Exit Program");
        scanf("%d", &userInput);

        (*processGrades[userInput - 1])(studentGrades, STUDENTS, EXAMS);

    } while(userInput >= 1 && userInput < 5);

    puts("Program Terminated. Have a nice day :) ");

}


void minimum(const int grades[][EXAMS], int pupils, int tests){
    int minGrade = INT_MAX;
    int minStudent;
    for(int i = 0; i < pupils; ++i){
        for(int j = 0; j < tests; ++j){
            if(grades[i][j] < minGrade){
                minGrade = grades[i][j];
                minStudent = i;
            }
        }
    } // End for

    printf("\nMinimum Grade: Student %d -> %d\n\n", minStudent, minGrade );

}
void maximum(const int grades[][EXAMS], int pupils, int tests){
    puts("maximum");
}
void average(const int grades[][EXAMS], int pupils, int tests){
    puts("average");
}
void printArray(const int grades[][EXAMS], int pupils, int tests){
    puts("print");
}
