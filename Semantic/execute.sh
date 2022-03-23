#!/bin/bash

lex lexical.l
yacc syntax.y
gcc y.tab.c -ll -w
./a.out < test1.cpp
