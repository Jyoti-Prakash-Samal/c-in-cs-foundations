//to creat a container called student and take date then display it
#include <stdio.h>
    struct Address {
        char city[50];
        int pincode;
    };
     struct Student {
        char name[50];
        int id;
        float cgpa;
        struct Address addr;
    };
int main(void){
   printf("Enter the number of students: \n");
    int n,i;
    scanf("%d", &n);
    struct Student students[n];
    for(i=0;i<n;i++)
{
    printf("Enter the name of the %d student: \n", i+1);
    scanf(" %[^\n]", students[i].name);
    printf("Enter the ID of the %d student: \n", i+1);
    scanf("%d", &students[i].id);
    printf("Enter the CGPA of the %d student: \n", i+1);
    scanf("%f", &students[i].cgpa);
    printf("Enter the city of the %d student: \n", i+1);
    scanf(" %[^\n]", students[i].addr.city);
    printf("Enter the pincode of the %d student: \n", i+1);
    scanf("%d", &students[i].addr.pincode);
}
    printf("The student details are: \n");
    for(i=0;i<n;i++)
{
    printf("Name: %s, ID: %d, CGPA: %.2f, City: %s, Pincode: %d \n", students[i].name, students[i].id, students[i].cgpa, students[i].addr.city, students[i].addr.pincode);

}
    return 0;
}