#include "utils.h"
#include <stdio.h>

int is_upper_letter(char c){
    if(c >= 65 && c <= 90){
        return 1;
    }
    return 0;
}

int is_lower_letter(char c){
    if(c >= 97 && c <= 122){
        return 1;
    }
    return 0;
}

int is_letter(char c){
    if(is_lower_letter(c) || is_upper_letter(c)){
        return 1;
    }
    
    return 0;
}

char to_upper(char c){
    if(is_lower_letter(c)){
        return c - 32;
    }
    
    return c;
}

char to_lower(char c){
    if(is_upper_letter(c)){
        return c + 32;
    }

    return c;
}

int string_length(char* str){
    int count = 0;
    while(*str++){
        count++;
    }

    return count;
}

void print_string(char* str){
    while(*str){
        printf("%c", *str++);
    }

    printf("\n");
}