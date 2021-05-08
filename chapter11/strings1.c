/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

void strings1(void){
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * ptl = "Something is pointing at me.";
    puts("Here are some string:");
    puts(MSG);
    puts(words);
    puts(ptl);
    words[8] = 'p';
    puts(words);
}