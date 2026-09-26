#include <stdio.h>
typedef struct {
    char name[50];
    int id;
    float gpa;
} Student;
int main(void){
    Student students[3];
    for(int i = 0; i < 3; i++){
        printf("Enter student name:\n");
        scanf(" %[^\n]", students[i].name);
        printf("Enter student ID:\n");
        scanf("%d", &students[i].id);
        printf("Enter student GPA:\n");
        scanf("%f", &students[i].gpa);
    }
 int s;
 printf("Enter an id to search for:\n");
 scanf("%d", &s);
 
    for(int i = 0; i < 3; i++){
        if(students[i].id == s){
            printf("\nStudent found:\n");
            printf("Name: %s\n", students[i].name);
            printf("ID: %d\n", students[i].id);
            printf("GPA: %.2f\n", students[i].gpa);
            return 0;
        }
    }
    printf("Student with ID %d not found.\n", s);
    return 0;