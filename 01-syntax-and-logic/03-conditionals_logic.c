#include <stdio.h>
int main() {
    int attendance=80;
    if(attendance>=75){
        printf("You are allowed to sit in the exam\n");
        int score=89;
        if(score>=90) {
            printf("Excellent\n");
        }
        else if(score>=33) {
            printf("Pass\n");
        }
        else{
            printf("Fail\n");
        }
    }
    else{
        printf("You are not allowed to sit in the exam\n");
    }
    return 0;
}