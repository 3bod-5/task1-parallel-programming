#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char name[20];
    char password[20] ;
    int age;
    printf("press num 1 if you want to login\npress num 2 if you want to register \n");
    scanf("%d",&number);
    if(number == 1){
        printf("fill the next field to login : \n");
        printf("please write your name : ");
        scanf("%s",&name);
        printf("\nplease write your password : ");
        scanf("%s",&password);

    }else{
        printf("fill the next field to register : \n");
        printf("please write your name : ");
        scanf("%s",&name);
        printf("\nplease write your password : ");
        scanf("%s",&password);
        printf("\nplease write your age : ");
        scanf("%d",&age);
    }printf("Thank you for your time");
    return 0;
}
