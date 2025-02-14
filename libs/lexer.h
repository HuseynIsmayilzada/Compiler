#ifndef LEXER_H
#define LEXER_H

#include "token.h"

typedef struct Lexer{
    char *content;
    char c;
    int index;
}Lexer;

Lexer *init_lexer(char *content);

void advance_lexer(Lexer *lexer);

void lexer_skip_whitespace(Lexer *lexer);

void advance_lexer_with_string(Lexer *lexer);

void run_lexer(Lexer *lexer);

#endif