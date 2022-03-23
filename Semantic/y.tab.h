/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    T_ID = 258,
    DEC_CONSTANT = 259,
    HEX_CONSTANT = 260,
    T_FCONST = 261,
    STRING = 262,
    T_CCONST = 263,
    T_MAIN = 264,
    T_VOID = 265,
    T_CLASS = 266,
    T_PUBLIC = 267,
    T_PRIVATE = 268,
    T_STATIC = 269,
    LOGICAL_AND = 270,
    LOGICAL_OR = 271,
    LS_EQ = 272,
    GR_EQ = 273,
    T_AEQ = 274,
    NOT_EQ = 275,
    T_pl = 276,
    T_min = 277,
    T_mul = 278,
    T_div = 279,
    T_LT = 280,
    T_GT = 281,
    EQ = 282,
    MUL_ASSIGN = 283,
    DIV_ASSIGN = 284,
    MOD_ASSIGN = 285,
    ADD_ASSIGN = 286,
    SUB_ASSIGN = 287,
    LEFT_ASSIGN = 288,
    RIGHT_ASSIGN = 289,
    AND_ASSIGN = 290,
    XOR_ASSIGN = 291,
    OR_ASSIGN = 292,
    R_CURL = 293,
    L_CURL = 294,
    T_not = 295,
    INCREMENT = 296,
    DECREMENT = 297,
    T_TRUE = 298,
    T_FALSE = 299,
    T_CIN = 300,
    T_COUT = 301,
    T_IPREDIR = 302,
    T_OPREDIR = 303,
    SHORT = 304,
    INT = 305,
    FLOAT = 306,
    LONG = 307,
    LONG_LONG = 308,
    SIGNED = 309,
    UNSIGNED = 310,
    CONST = 311,
    IF = 312,
    FOR = 313,
    T_WHILE = 314,
    CONTINUE = 315,
    BREAK = 316,
    RETURN = 317,
    T_HEADER1 = 318,
    T_HEADER2 = 319,
    DEFINE = 320,
    CHAR = 321,
    UMINUS = 322,
    LOWER_THAN_ELSE = 323,
    ELSE = 324
  };
#endif
/* Tokens.  */
#define T_ID 258
#define DEC_CONSTANT 259
#define HEX_CONSTANT 260
#define T_FCONST 261
#define STRING 262
#define T_CCONST 263
#define T_MAIN 264
#define T_VOID 265
#define T_CLASS 266
#define T_PUBLIC 267
#define T_PRIVATE 268
#define T_STATIC 269
#define LOGICAL_AND 270
#define LOGICAL_OR 271
#define LS_EQ 272
#define GR_EQ 273
#define T_AEQ 274
#define NOT_EQ 275
#define T_pl 276
#define T_min 277
#define T_mul 278
#define T_div 279
#define T_LT 280
#define T_GT 281
#define EQ 282
#define MUL_ASSIGN 283
#define DIV_ASSIGN 284
#define MOD_ASSIGN 285
#define ADD_ASSIGN 286
#define SUB_ASSIGN 287
#define LEFT_ASSIGN 288
#define RIGHT_ASSIGN 289
#define AND_ASSIGN 290
#define XOR_ASSIGN 291
#define OR_ASSIGN 292
#define R_CURL 293
#define L_CURL 294
#define T_not 295
#define INCREMENT 296
#define DECREMENT 297
#define T_TRUE 298
#define T_FALSE 299
#define T_CIN 300
#define T_COUT 301
#define T_IPREDIR 302
#define T_OPREDIR 303
#define SHORT 304
#define INT 305
#define FLOAT 306
#define LONG 307
#define LONG_LONG 308
#define SIGNED 309
#define UNSIGNED 310
#define CONST 311
#define IF 312
#define FOR 313
#define T_WHILE 314
#define CONTINUE 315
#define BREAK 316
#define RETURN 317
#define T_HEADER1 318
#define T_HEADER2 319
#define DEFINE 320
#define CHAR 321
#define UMINUS 322
#define LOWER_THAN_ELSE 323
#define ELSE 324

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "syntax1.y"

 char *string;
	double dval;
	//double value;
	float floating;
	char character;
	entry_t* entry;
	int ival;
	bool boolean;

#line 206 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

