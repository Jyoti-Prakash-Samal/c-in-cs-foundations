#include <stdio.h>
#include <stdlib.h>
int main(void){
int length;
do{
printf("Enter the length of the name without spaces(must be positive and greater than 1):\n");
scanf("%d", &length); 
}while(length<=1);
char *name=(char*)malloc((length+1)*sizeof(char));
if(name==NULL){
printf("Memory allocation failed\n");
return 1;
}
printf("Enter the name:\n");
scanf("%s", name);
printf("The name is: %s\n" , name);
free(name);
return 0;
}
