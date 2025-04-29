#include<stdio.h>

int main(){
    char name[255]={};
    printf("input your name: ");
    scanf("%^[\n]\n",name);
    
    printf("Program: Hello %s\n", name);
    return 0;
}