#include <stdio.h>

int main(void){
    int n, i, m, p = 0, q = 0;
    
    printf("Enter the number of numbers:\n");
    scanf("%d", &n);
    
    if(n < 2){
        printf("At least 2 numbers required.\n");
        return 0;
    }
    
    for(i = 1; i <= n; i++){
        printf("Enter a positive number %d:\n", i);
        scanf("%d", &m);
        
        if(m <= 0){
            printf("Invalid input\n");
            return 0; 
        }
        
        if(m > p){
            q = p;
            p = m;
        }
        else if(m > q && m < p){
            q = m;
        }
    }
    
    if(q == 0)
        printf("The second largest number is %d\n", p);
    else
        printf("The second largest number is %d\n", q);

    return 0;
}