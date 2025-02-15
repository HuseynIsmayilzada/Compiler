#include "libs/lexer.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

Lexer* init_lexer(char* content) {
    Lexer* lexer = (Lexer*)malloc(sizeof(Lexer));

    lexer->content = content;
    lexer->c = lexer->content[0];
    lexer->index = 0;

    return lexer;
}

void advance_lexer_with_string(Lexer* lexer) {
    if(lexer->c == 32) {

    }
}

void lexer_skip_whitespace(Lexer* lexer) {
    while(lexer->c == 20 || lexer->c == 23) {
        advance_lexer(lexer);
    }
}

void advance_lexer(Lexer* lexer) {
    if(lexer->c != '\0') {
        lexer->index++;
        lexer->c = lexer->content[lexer->index];
        return;
    }

    else {
        fprintf(stderr,"NULL character detected, not advancing");
        return;
    }
}

void run_lexer(Lexer* lexer) {
    Lexer* lexer = init_lexer;

    while(true) {
        lexer_skip_whitespace(lexer);
        advance_lexer(lexer);
    }
}
