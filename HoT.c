#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i=0,j=0;
    char name[10];
    printf("Who are you?\n")0;
    scanf("%s",name);
    printf("Hello!%s\n",name);
    srand(time(NULL));
    printf("Tossing a coin...¥n");
    printf("round1:");
    if(rand()%2==0){
        i++;
        printf("Heads¥n");
    } else {
        j++;
        printf("Tails¥n");
    }
    printf("round2:");
    if(rand()%2==0){
        i++;
        printf("Heads¥n");
    } else {
        j++;
        printf("Tails¥n");
    }
    printf("round3:");
    if(rand()%2==0){
        i++;
        printf("Heads¥n");
    } else {
        j++;
        printf("Tails¥n");
    }
    printf("Head: %d, Tails: %d¥n",i,j);
    return 0;
}
