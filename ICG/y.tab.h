/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    HEADER = 258,
    NAMESPACE = 259,
    MAIN = 260,
    T_lt = 261,
    T_gt = 262,
    T_lteq = 263,
    T_gteq = 264,
    T_neq = 265,
    T_eqeq = 266,
    T_pl = 267,
    T_min = 268,
    T_mul = 269,
    T_div = 270,
    T_and = 271,
    T_or = 272,
    T_incr = 273,
    T_decr = 274,
    T_not = 275,
    T_eq = 276,
    INT = 277,
    CHAR = 278,
    FLOAT = 279,
    DOUBLE = 280,
    VOID = 281,
    BOOL = 282,
    COUT = 283,
    COUTSTR = 284,
    ENDL = 285,
    INS = 286,
    CIN = 287,
    XTR = 288,
    IF = 289,
    ELSE = 290,
    WHILE = 291,
    DO = 292,
    FOR = 293,
    ELSE_IF = 294,
    T_RETURN = 295,
    ID = 296,
    NUM = 297,
    SINGLE_CHAR_VALUE = 298,
    OPB = 299,
    CLB = 300,
    OSCOPE = 301,
    CSCOPE = 302
  };
#endif
/* Tokens.  */
#define HEADER 258
#define NAMESPACE 259
#define MAIN 260
#define T_lt 261
#define T_gt 262
#define T_lteq 263
#define T_gteq 264
#define T_neq 265
#define T_eqeq 266
#define T_pl 267
#define T_min 268
#define T_mul 269
#define T_div 270
#define T_and 271
#define T_or 272
#define T_incr 273
#define T_decr 274
#define T_not 275
#define T_eq 276
#define INT 277
#define CHAR 278
#define FLOAT 279
#define DOUBLE 280
#define VOID 281
#define BOOL 282
#define COUT 283
#define COUTSTR 284
#define ENDL 285
#define INS 286
#define CIN 287
#define XTR 288
#define IF 289
#define ELSE 290
#define WHILE 291
#define DO 292
#define FOR 293
#define ELSE_IF 294
#define T_RETURN 295
#define ID 296
#define NUM 297
#define SINGLE_CHAR_VALUE 298
#define OPB 299
#define CLB 300
#define OSCOPE 301
#define CSCOPE 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
