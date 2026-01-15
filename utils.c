#include "utils.h"
#include <stdio.h>

int is_upper_letter(char c){
    if(c >= 65 && c <= 90){
        return 1;
    }else{
        return 0;
    }
}

int is_lower_letter(char c){
    if(c >= 97 && c <= 122){
        return 1;
    }else{
        return 0;
    }
}

int is_letter(char c){
    if(is_lower_letter(c) || is_upper_letter(c)){
        return 1;
    }else{
        return 0;
    }
}