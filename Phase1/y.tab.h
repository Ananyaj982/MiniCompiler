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
    EQ = 274,
    NOT_EQ = 275,
    MUL_ASSIGN = 276,
    DIV_ASSIGN = 277,
    MOD_ASSIGN = 278,
    ADD_ASSIGN = 279,
    SUB_ASSIGN = 280,
    LEFT_ASSIGN = 281,
    RIGHT_ASSIGN = 282,
    AND_ASSIGN = 283,
    XOR_ASSIGN = 284,
    OR_ASSIGN = 285,
    R_CURL = 286,
    L_CURL = 287,
    INCREMENT = 288,
    DECREMENT = 289,
    T_TRUE = 290,
    T_FALSE = 291,
    T_CIN = 292,
    T_COUT = 293,
    T_IPREDIR = 294,
    T_OPREDIR = 295,
    SHORT = 296,
    INT = 297,
    FLOAT = 298,
    LONG = 299,
    LONG_LONG = 300,
    SIGNED = 301,
    UNSIGNED = 302,
    CONST = 303,
    IF = 304,
    FOR = 305,
    T_WHILE = 306,
    CONTINUE = 307,
    BREAK = 308,
    RETURN = 309,
    T_HEADER1 = 310,
    T_HEADER2 = 311,
    DEFINE = 312,
    CHAR = 313,
    UMINUS = 314,
    LOWER_THAN_ELSE = 315,
    ELSE = 316
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
#define EQ 274
#define NOT_EQ 275
#define MUL_ASSIGN 276
#define DIV_ASSIGN 277
#define MOD_ASSIGN 278
#define ADD_ASSIGN 279
#define SUB_ASSIGN 280
#define LEFT_ASSIGN 281
#define RIGHT_ASSIGN 282
#define AND_ASSIGN 283
#define XOR_ASSIGN 284
#define OR_ASSIGN 285
#define R_CURL 286
#define L_CURL 287
#define INCREMENT 288
#define DECREMENT 289
#define T_TRUE 290
#define T_FALSE 291
#define T_CIN 292
#define T_COUT 293
#define T_IPREDIR 294
#define T_OPREDIR 295
#define SHORT 296
#define INT 297
#define FLOAT 298
#define LONG 299
#define LONG_LONG 300
#define SIGNED 301
#define UNSIGNED 302
#define CONST 303
#define IF 304
#define FOR 305
#define T_WHILE 306
#define CONTINUE 307
#define BREAK 308
#define RETURN 309
#define T_HEADER1 310
#define T_HEADER2 311
#define DEFINE 312
#define CHAR 313
#define UMINUS 314
#define LOWER_THAN_ELSE 315
#define ELSE 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "syntax.y" /* yacc.c:1909  */

 char *string;
	double dval;
	float floating;
	char character;
	entry_t* entry;
	int ival;
	bool boolean;

#line 186 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
