#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void password(int length){
    char result[length];
    char word[] = "abcdefghijklmnopqrstuvwxyz1234567890!@#$^&*"; //length 43
    srand(time(NULL));
    for (int i = 0; i < length; i++)
    {
        result[i] = word[rand() % 43];
        printf("%c" , result[i]);
    }
    printf("\n");
    printf("\n");
    
}

int main(){
    printf("Random Password Generator.......\n");
    printf("\n");
    int passLength;
    printf("Enter length of password..  \n");
    scanf("%d" , &passLength);
    printf("\n");
    // call function
    password(passLength);
    printf("\n");
}