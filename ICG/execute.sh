#!/bin/bash

yacc -d syntax.y
lex lexical.l
gcc y.tab.c -ll
./a.out < input.cpp

