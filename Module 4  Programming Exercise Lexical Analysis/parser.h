#ifndef PARSER_H
#define PARSER_H

void expr();
void term();
void factor();
void for_statement(); /* New function for for-statement */
void statement(); /* New function for statements */

extern int nextToken;
#endif