#include <stdio.h>
#include "utils.h"

char caesar_encrypt(char c, int shift){
    if(is_upper_letter(c)){
        return ((c - 'A' + shift) % 26) + 'A';
    }else if(is_lower_letter(c)){
        return ((c - 'a' + shift) % 26) + 'a';
    }
    return c;
}


char caesar_decrypt(char c, int shift){
    if(is_upper_letter(c)){
        return ((c - 'A' - shift + 26) % 26) + 'A';
    }else if(is_lower_letter(c)){
        return ((c - 'a' - shift + 26) % 26) + 'a';
    }
    return c;
}