#ifndef PARSER_H
#define PARSER_H

void expr();
void term();
void factor();
void for_statement(); 
void statement(); 

extern int nextToken;
#endif