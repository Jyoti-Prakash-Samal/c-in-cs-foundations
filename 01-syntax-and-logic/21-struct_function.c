#include <stdio.h>
typedef struct {
    char name[50];
    int id;
    float gpa;
} Student;

void ID(Student s)
{
    printf("Student ID: %d\n", s.id);
    printf("Student Name: %s\n", s.name);
    printf("Student GPA: %.2f\n", s.gpa);
}
int main(void){
    Student s1;
    printf("Enter student name:\n");
scanf(" %[^\n]", s1.name);
    printf("Enter student ID:\n");
    scanf("%d", &s1.id);
    printf("Enter student GPA:\n");
    scanf("%f", &s1.gpa);
    ID(s1);
    return 0;
}