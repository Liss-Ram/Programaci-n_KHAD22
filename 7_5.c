/*
 ============================================================================
 Name        : 7_5.c
 Author      : Liss&Karla co.
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;

    printf("Introduce tu palabra:");
    scanf("%s", string1);

    length = strlen(string1);

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}

    if (flag) {
        printf("%s no es un palindromo", string1);
    }
    else {
        printf("%s es un palindromo ", string1);
    }
    return 0;
}
