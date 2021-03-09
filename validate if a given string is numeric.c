/*Validate if a given string is numeric. 
Examples:"0" => true" 0.1 " => true"abc" => false"1 a" => false"2e10" => trueReturn 0 / 1 ( 0 for false, 1 for true ) for this problem*/

#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>
int validate_string(char *str) 
{ 
    int i = 0, j = strlen(str) - 1; 
    while(i<(strlen(str)) && str[i] == " ") 
        i++; 
    while (j >= 0 && str[j] == ' ') 
        j--; 
    if (i > j) 
        return 0; 
    if (i == j && !(str[i] >= '0' && str[i] <= '9')) 
        return 0; 
    if (str[i] != '.' && str[i] != '+'
        && str[i] != '-' && !(str[i] >= '0' && str[i] <= '9')) 
        return 0; 
    int flag = 0; 
    for (i; i <= j; i++) {
        if (str[i] != 'e' && str[i]!='E' && str[i] != '.'
            && str[i] != '+' && str[i] != '-'
            && !(str[i] >= '0' && str[i] <= '9')) 
            return 0; 
  
        if (str[i] == '.') {
            if (flag ==1) 
                return 0; 
            if (i + 1 > strlen(str)) 
                return 0; 
            if (!(str[i + 1] >= '0' && str[i + 1] <= '9')) 
                return 0; 
        } 
  
        else if (str[i] == 'e' || str[i]=='E') {  
            flag = 1;  
            if (!(str[i - 1] >= '0' && str[i - 1] <= '9')) 
                return 0; 
            if (i + 1 > strlen(str)) 
                return 0; 
            if (str[i + 1] != '+' && str[i + 1] != '-'
                && (str[i + 1] >= '0' && str[i] <= '9')) 
                return 0; 
        } 
    } 
    return 1; 
} 
int main() 
{ 
    char str[100]; 
    printf("Enter the string: ");
    gets(str);
    if (validate_string(str)) 
        printf("true"); 
    else
        printf("false"); 
    return 0; 
} 
