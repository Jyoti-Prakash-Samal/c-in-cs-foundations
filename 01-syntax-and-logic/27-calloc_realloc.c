#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int plist;
    char name[50];
} Client;
int main(){
    int n,old_n,k,i,j;
    printf("Enter the number of clients: \n");
    scanf("%d", &n);
    Client *clients=(Client*)calloc(n,sizeof(Client));
    if(clients==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter client details (plist and name):\n");
    for(i=0;i<n;i++){
        scanf("%d %s", &clients[i].plist, clients[i].name);
    }
    old_n=n;
    printf("Do you want to extend the list? Press 1 for yes and 0 for no\n");
    scanf("%d", &k);
    if(k==1){
        printf("Enter new size\n");
        scanf("%d", &n);
       Client *temp=(Client*)realloc(clients, n*sizeof(Client));
       if(temp==NULL){
       printf("Memory allocation failed");
       return 1;
       }
       clients=temp;
       printf("Enter client details (plist and name):\n");
       printf("The client details are as follows: \n");
    for(i=old_n;i<n;i++){
        scanf("%d %s", &clients[i].plist, clients[i].name);
    }
}
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++)
    if(clients[j].plist>clients[j+1].plist)
    {
        Client temp=clients[j];
        clients[j]=clients[j+1];
        clients[j+1]=temp;
    }
}
    for(i=0;i<n;i++){
    printf("Client name: %s \n", clients[i].name);
    }
 free(clients);
    return 0;
}
