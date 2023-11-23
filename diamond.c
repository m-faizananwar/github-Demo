#include <stdio.h>

int main() {
   int base;
   printf("Enter base of diamond : ");
   scanf("%d",&base);
   int spaceCounter = base - 1;
   for(int i = 1; i <= base;i++){
    int a = 1;
    while(spaceCounter >= a ){
        printf(" ");
        a++;
    }
    for(int j = 1;j <=i;j++) {
        printf("* ");
    }
    spaceCounter--;
    printf("\n"); 
   }
   for(int i = 1;i <= base - 1;i++) {
     spaceCounter = 0;
        while (spaceCounter < i) {
            printf(" ");
            spaceCounter++;
        }
        for (int j = base - i; j != 0 ;j--) {
            printf("* ");
        }
        printf("\n");
   }
}