#include <stdio.h>
int main(){
    char name[64];
    printf("What's your name?");
    scanf("%s",name);
    printf("hello, %s",name);
}