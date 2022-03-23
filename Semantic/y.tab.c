/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "syntax.y" /* yacc.c:339  */

	#include <stdlib.h>
	#include <stdio.h>
	#include "hashtbl.h"
 	#include<stdbool.h>
 	#include<math.h>
	entry_t** symbol_table;
 	entry_t** constant_table;
 	entry_t* finding;

	double Evaluate (double lhs_value,int assign_type,double rhs_value);
	void type_check(char *, char*,int);
	int current_dtype;
	char type[10];
	char typ1[10];
	int yyerror(char *msg);
	int scope; 
	int error_no=0;
	char* className[26];
	int counter=0;

#line 88 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
#line 24 "syntax.y" /* yacc.c:355  */

 char *string;
	double dval;
	//double value;
	float floating;
	char character;
	entry_t* entry;
	int ival;
	bool boolean;

#line 274 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 291 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1148

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,     2,     2,    75,     2,     2,
      80,    81,    73,    71,    67,    72,    84,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    82,
      69,    68,    70,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    85,     2,    86,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,     2,    88,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    77,    78,    79
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    91,    92,    93,    95,    96,    97,    98,
      99,   105,   106,   110,   111,   114,   115,   116,   117,   118,
     122,   125,   128,   129,   130,   131,   133,   134,   135,   136,
     137,   139,   143,   144,   145,   147,   148,   151,   152,   155,
     156,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   175,   176,   179,   180,   184,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   199,   204,   205,   206,   207,
     210,   211,   214,   215,   218,   221,   222,   223,   224,   225,
     226,   228,   230,   232,   234,   235,   237,   238,   239,   240,
     241,   242,   244,   245,   246,   247,   252,   253,   254,   255,
     259,   260,   261,   264,   267,   268,   271,   272,   276,   277,
     278,   280,   281,   286,   287,   292,   293,   296,   297,   298,
     301,   302,   303,   304,   305,   306,   309,   311,   314,   315,
     316,   317,   320,   321,   322,   323,   326,   326,   331,   332,
     333,   338,   339,   340,   341,   342,   348,   349,   350,   351,
     352,   353,   354,   357,   358,   361,   362,   363,   370,   371,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   393,   394,   395,   396,   397,   400,
     401,   402,   403,   405,   409,   410,   411,   412,   413,   414,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   428,
     429,   430,   431,   434,   435,   438,   439,   443,   444,   447,
     448
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ID", "DEC_CONSTANT", "HEX_CONSTANT",
  "T_FCONST", "STRING", "T_CCONST", "T_MAIN", "T_VOID", "T_CLASS",
  "T_PUBLIC", "T_PRIVATE", "T_STATIC", "LOGICAL_AND", "LOGICAL_OR",
  "LS_EQ", "GR_EQ", "T_AEQ", "NOT_EQ", "T_pl", "T_min", "T_mul", "T_div",
  "T_LT", "T_GT", "EQ", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "R_CURL", "L_CURL", "T_not", "INCREMENT",
  "DECREMENT", "T_TRUE", "T_FALSE", "T_CIN", "T_COUT", "T_IPREDIR",
  "T_OPREDIR", "SHORT", "INT", "FLOAT", "LONG", "LONG_LONG", "SIGNED",
  "UNSIGNED", "CONST", "IF", "FOR", "T_WHILE", "CONTINUE", "BREAK",
  "RETURN", "T_HEADER1", "T_HEADER2", "DEFINE", "CHAR", "','", "'='",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS",
  "LOWER_THAN_ELSE", "ELSE", "'('", "')'", "';'", "':'", "'.'", "'['",
  "']'", "'{'", "'}'", "$accept", "start", "header", "builder", "main",
  "builder1", "function", "class", "type1", "class_stuff", "object",
  "object_call", "type", "pointer", "data_type", "sign_specifier",
  "type_specifier", "argument_list", "arguments", "arg", "expression_1",
  "lit", "bin_arop", "bin_boolop", "un_arop", "un_boolop", "relop",
  "assignment", "stmt", "loops", "x", "empty", "assign", "multidim",
  "array", "multi_decl", "loopbody", "cond_stmt", "cond_stmt_for", "cond",
  "input_stmt", "output_stmt", "i_var", "o_var", "compound_stmt", "$@1",
  "statements", "single_stmt", "declaration", "declaration_list",
  "sub_decl", "expression", "sub_expr", "assignment_expr", "unary_expr",
  "lhs", "assign_op", "arithmetic_expr", "constant", "array_counter",
  "function_call", "parameter_list", "parameter", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    44,    61,    60,
      62,    43,    45,    42,    47,    37,    33,   322,   323,   324,
      40,    41,    59,    58,    46,    91,    93,   123,   125
};
# endif

#define YYPACT_NINF -272

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-272)))

#define YYTABLE_NINF -199

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1076,  -272,    31,    -3,    16,    21,    21,    -1,    66,  -272,
      59,   100,  -272,  -272,  -272,  -272,  -272,  -272,   647,   169,
    -272,   732,   993,  -272,  -272,    55,    57,   116,    97,   429,
    -272,  -272,    -4,  -272,  -272,   209,   738,  -272,   113,   201,
     358,   144,   205,  -272,  -272,  -272,  -272,   146,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,   732,  -272,  -272,  -272,
    -272,  -272,    58,   121,   870,    97,  -272,  -272,   208,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,   244,  -272,  -272,
     194,  -272,   163,   789,  -272,  -272,  -272,  -272,   188,   358,
     188,   -19,   290,  -272,   870,   861,   219,   170,  -272,   179,
     192,   429,  -272,  -272,    87,  -272,  -272,   234,   145,  -272,
     861,  -272,  -272,  -272,  -272,  -272,  -272,  -272,   856,   358,
     264,   358,   358,   358,   358,   358,   358,   358,   358,   188,
     188,   188,   188,   188,   205,  -272,  -272,   205,   295,   231,
     247,  -272,   176,  -272,   290,   237,   663,   500,  -272,  -272,
     106,   106,  -272,  -272,   329,   329,  -272,  -272,  -272,  -272,
     750,  -272,  -272,   205,   429,  -272,  -272,   290,   186,  -272,
     358,  -272,   310,  -272,  -272,  -272,  -272,   280,   284,   255,
     257,   267,   291,   294,    79,  -272,   275,  -272,    55,    57,
     376,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,   315,
     164,   209,   304,  -272,  -272,   364,  -272,    -2,   276,   525,
      52,   111,   831,   912,   831,  -272,  -272,  -272,   507,   732,
      51,  -272,  -272,  -272,  -272,  -272,  -272,  -272,   276,   298,
     833,   276,   276,  -272,  1062,   301,  -272,  -272,   -40,  -272,
    -272,    12,   982,   667,    13,  -272,   312,  -272,  -272,  -272,
     307,  -272,   316,  -272,  1019,  1019,   276,  -272,   388,   405,
    -272,  -272,  -272,  -272,  -272,   388,  -272,  -272,   276,   276,
    -272,   700,   700,   311,   308,  -272,   323,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,   862,   388,   667,   411,   912,   665,
    -272,  -272,   328,   321,  -272,  -272,   700,   700,   388,  -272,
     382,  -272,  -272,  -272,  -272,   285,  -272,   190,   388,  -272,
     331,   341,   349,   331,  -272,  -272,   311,   346,   388,   388,
    -272,   388,  -272,   499,  -272,   580,  -272,  -272,   831,   422,
     311,   360,   667,   362,  -272,   365,  -272,   366,  -272,  -272,
     359,  -272,  -272,   388,  -272,   831,   665,     1,  -272,   369,
    -272,   373,  -272,  -272,    75,   359,  -272,   665,     1,  -272,
    -272,   341,  -272,  -272
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    10,   183,    50,     0,     0,     0,    44,    41,    42,
      45,    47,    39,    40,     8,     9,     4,    49,     0,     3,
       5,    19,     0,    15,   146,     0,     0,     0,    34,     0,
      38,    16,     0,   154,   155,     0,     0,   157,     0,     0,
       0,     0,     0,   183,   182,   181,    43,     0,    46,    48,
       1,     2,     7,     6,    50,    41,    11,    12,    17,    18,
     150,   151,   183,     0,     0,    36,    33,    37,     0,   148,
     184,   187,   188,   189,   185,   186,   149,     0,   179,   180,
       0,    31,     0,   172,   199,   200,   201,   202,     0,     0,
       0,     0,   159,   170,   171,   169,   173,     0,   136,     0,
       0,    52,   147,    35,   183,   153,   178,     0,   197,   177,
     174,   198,   175,   176,    32,   197,   196,   168,     0,     0,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,    21,     0,     0,     0,
      51,    54,     0,   195,   158,     0,   166,   167,   164,   165,
     162,   163,   161,   160,   190,   191,   192,   193,   194,    13,
       0,    14,    55,     0,     0,   210,   206,   209,     0,   208,
       0,    95,   172,    22,    23,    24,   137,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    92,    93,    94,
      38,    88,   138,   139,    90,    91,    86,    87,    28,    89,
     170,   171,     0,    20,    53,     0,   205,     0,     0,     0,
       0,     0,     0,     0,     0,   143,   144,   142,     0,   152,
       0,   141,   207,   203,    65,    74,    72,    73,     0,     0,
      64,     0,     0,    56,   172,     0,   130,   131,     0,   134,
     135,     0,   183,     0,     0,   116,     0,   115,   117,   119,
       0,   118,     0,   145,    30,    30,     0,    83,     0,     0,
      66,    67,    68,    69,    81,     0,    70,    71,     0,     0,
      61,    62,    63,   103,     0,   126,     0,   127,    77,    78,
      79,    80,    75,    76,     0,     0,     0,     0,     0,     0,
      26,    27,     0,     0,    59,    58,    57,    60,     0,   112,
       0,   128,   129,   132,   133,   120,   121,     0,     0,   140,
      99,   103,     0,     0,    96,    82,   103,     0,     0,     0,
     125,     0,   124,     0,   114,     0,    98,   102,     0,   103,
     103,     0,     0,     0,   113,     0,   101,     0,   104,   105,
     103,   111,    85,     0,   123,     0,     0,     0,   107,     0,
     122,     0,    97,   108,     0,   103,    84,     0,     0,   109,
     106,   103,   110,   100
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,  -272,  -272,   437,   436,   438,    25,  -272,  -272,    89,
      15,    23,  -272,   402,  -272,  -272,    10,  -272,  -272,   320,
     380,    90,   245,   171,   258,  -200,  -159,  -272,  -122,  -272,
     124,  -199,  -272,   119,   131,   -58,  -179,  -211,  -271,  -193,
    -272,  -272,  -272,  -272,   -37,  -272,   181,  -272,    40,   465,
     428,   -38,   -20,     8,     0,    67,   461,   484,   -79,   421,
     426,  -272,   303
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,   185,    24,   186,   187,
     188,   189,    27,    66,    28,    29,   190,   139,   140,   141,
     229,   230,   265,   269,   231,   232,   284,   191,   313,   193,
     326,   249,   340,   349,   355,   300,   311,   246,   250,   247,
     194,   195,   238,   241,   196,   135,   160,   197,   198,    32,
      33,   199,    92,    93,    94,    36,    77,    95,    96,    37,
     202,   168,   169
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,   111,    91,   252,   224,    99,    41,   274,    34,   111,
      30,   111,   244,   244,   244,    25,   224,   312,    35,    42,
     251,    35,    35,    26,    43,    23,    34,    64,    30,    34,
      34,    30,    30,    25,    38,    34,    25,    25,   192,    67,
      31,    26,   275,    23,    26,    26,    23,    58,   119,    46,
     111,   111,   111,   111,   111,   236,    35,   337,    31,   237,
     276,    31,    59,    68,    34,   119,    30,   120,    64,   117,
     256,    25,    44,    45,   299,    47,    34,   106,    69,    26,
     109,    58,    83,    84,    85,    86,   223,    87,   244,   353,
     245,   248,   245,   285,   277,   251,    59,   159,  -156,   144,
     161,   146,   147,   148,   149,   150,   151,   152,   153,    48,
     314,   138,   327,  -156,   239,    39,    40,   299,   240,    62,
       5,     6,   167,   123,   124,  -156,   203,   308,   244,   233,
     339,   299,   207,   257,   351,   251,   258,    60,   101,    61,
    -156,   348,   358,    40,   107,   244,   336,   107,   321,   233,
      49,    88,   233,   233,  -156,    89,   348,     5,     6,    90,
     201,   217,   327,   359,   218,   310,   248,   352,   200,  -156,
      65,    91,    40,   343,   138,   127,   128,   233,   361,    83,
      84,    85,    86,   165,    87,   167,  -183,  -183,    68,   233,
     233,   115,    84,    85,    86,    81,    87,   108,    84,    85,
      86,   192,    87,   102,    82,   306,   248,   278,   279,   280,
     281,   104,   201,   201,   201,   282,   283,     5,     6,    35,
     200,   200,   200,   245,    97,   142,   100,    34,    70,    30,
      40,  -155,    52,    53,    25,     5,     6,    71,    72,    73,
      74,    75,    26,    98,   254,   114,  -155,    43,    88,     5,
       6,   134,    89,   205,    35,    35,    90,   166,   329,   255,
      88,   136,    34,    34,    30,    30,    88,   206,    90,    25,
      25,   320,   341,   137,    90,    78,    79,    26,    26,   224,
      84,    85,    86,   145,    87,     5,     6,   201,   201,   201,
    -198,    76,  -198,  -198,  -198,   200,   200,   200,   162,   235,
     266,   267,   243,   243,   243,   121,   122,   123,   124,   125,
     126,   301,   163,    38,   164,   302,   225,   226,   227,   260,
     261,   262,   263,   201,   170,   201,   303,   210,   201,   208,
     304,   200,   211,   200,   286,   212,   200,   213,  -183,  -183,
    -183,  -183,  -183,   290,   291,   201,   201,   214,   293,   260,
     261,   262,   263,   200,   200,   295,   228,   201,   219,   127,
     128,    83,    84,    85,    86,   200,    87,    83,    84,    85,
      86,   165,    87,   215,   305,   307,   216,  -156,   243,   220,
     264,  -197,   119,  -197,  -197,  -197,   221,   273,   317,   288,
     142,   224,  -156,   287,    39,   209,   298,   289,   322,     5,
       6,   318,   131,   132,   133,     5,     6,   316,   331,   332,
     315,   333,   171,   324,   172,    84,    85,    86,   243,    87,
     325,    54,     4,   173,   174,   175,   260,   261,   262,   263,
      88,   328,   330,   350,    89,   243,    88,   354,    90,    54,
      89,   338,   342,   344,    90,   345,   347,   346,   354,    98,
     -30,   356,     5,     6,   357,    51,   177,   178,    57,    56,
       7,    55,     9,    10,    11,    12,    13,   103,   -30,   -30,
     -30,   182,   183,   184,   360,   268,   319,    17,     7,    55,
       9,    10,    11,    88,   204,   363,   294,    89,   270,   362,
     323,    90,    63,   -30,   -25,    17,   105,    80,   309,   -30,
     171,   112,   172,    84,    85,    86,   113,    87,   222,    54,
       4,   173,   174,   175,     0,   121,     0,   123,   124,   125,
     126,     0,   121,   122,   123,   124,   125,   126,   234,    84,
      85,    86,     0,    87,     0,     0,     0,    98,     0,     0,
       5,     6,     0,     0,   177,   178,     0,     0,     7,    55,
       9,    10,    11,    12,    13,     0,   179,   180,   181,   182,
     183,   184,     0,     0,   110,    17,     5,     6,     0,   127,
     128,    88,   116,     0,   118,    89,   127,   128,     0,    90,
       0,   171,   -25,   172,    84,    85,    86,   334,    87,   253,
      54,     4,   173,   174,   175,     0,     0,    88,     0,     0,
       0,    89,     0,     0,     0,    90,     0,     0,   259,     0,
       0,   271,   272,   154,   155,   156,   157,   158,    98,     0,
       0,     5,     6,     0,     0,   177,   178,     0,     0,     7,
      55,     9,    10,    11,    12,    13,   292,   335,     0,     0,
     182,   183,   184,     0,     0,     0,    17,    50,   296,   297,
       2,     0,    88,     0,     0,     0,    89,     3,     4,     0,
      90,     0,   -30,   -25,     0,     0,   171,   309,   172,    84,
      85,    86,     0,    87,     0,    54,     4,   173,   174,   175,
     123,   124,   125,   126,   278,   279,   280,   281,     5,     6,
       0,     0,   282,   283,     0,     0,     7,     8,     9,    10,
      11,    12,    13,    98,     0,     0,     5,     6,     0,     0,
     177,   178,     0,    17,     7,    55,     9,    10,    11,    12,
      13,   260,   261,   262,   263,   182,   183,   184,     0,     0,
       0,    17,   127,   128,     0,     2,     0,    88,     0,     0,
       0,    89,    54,     4,     0,    90,     0,   -30,   -25,     0,
       0,   171,   309,   172,    84,    85,    86,    70,    87,     0,
      54,     4,   173,   174,   175,     0,    71,    72,    73,    74,
      75,     0,     0,     5,     6,     0,     0,     0,     0,    78,
      79,     7,    55,     9,    10,    11,    12,    13,    98,   176,
       0,     5,     6,     0,     0,   177,   178,     0,    17,     7,
      55,     9,    10,    11,    12,    13,     0,   179,   180,   181,
     182,   183,   184,     0,     0,     0,    17,  -183,  -183,  -183,
    -183,  -183,    88,     0,     0,     0,    89,     0,     0,     0,
      90,     0,   171,   -25,   242,    84,    85,    86,     0,    87,
       0,    54,     4,   173,   174,   175,     0,     0,   266,   267,
       0,     0,     0,     0,   260,   261,   262,   263,     0,     0,
    -197,     0,  -197,  -197,  -197,   224,    84,    85,    86,    98,
      87,   225,     5,     6,   226,   227,   177,   178,     0,     0,
       7,    55,     9,    10,    11,    12,    13,     0,     0,    70,
       0,   182,   183,   184,     0,     0,     0,    17,    71,    72,
      73,    74,    75,    88,     0,     0,     0,    89,     0,     0,
       0,    90,   -30,   171,   -25,   242,    84,    85,    86,     0,
      87,     0,    54,     4,   173,   174,   175,   129,   130,   131,
     132,   133,   129,   130,   131,   132,   133,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,   225,     5,     6,     0,     0,   177,   178,     0,
       0,     7,    55,     9,    10,    11,    12,    13,     0,     0,
       0,     0,   182,   183,   184,     0,     0,     0,    17,     0,
       0,     0,     0,     0,    88,    38,     0,     0,    89,     0,
       0,     0,    90,     0,   -30,   -25,     2,  -172,  -172,   -65,
     -65,   208,   -65,     3,     4,     0,     0,   -65,   -65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,    54,
       4,   173,   174,   175,     5,     6,     0,     0,     0,     0,
       0,     0,     7,     8,     9,    10,    11,    12,    13,  -156,
       0,  -172,  -172,  -197,  -197,  -197,  -197,  -197,     0,    17,
       5,     6,   142,  -172,  -156,     0,    39,   209,     7,    55,
       9,    10,    11,    12,    13,     0,     0,     1,     0,     2,
       0,     0,     0,     0,     0,    17,     3,     4,     0,     0,
    -183,  -183,  -183,  -183,  -183,     0,     0,     0,     0,     0,
       0,     0,   -25,  -183,  -183,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     0,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,     0,  -197,  -197,  -197,  -197,  -197,     0,    14,
      15,    16,    17,     0,     0,     0,     0,     0,   -65
};

static const yytype_int16 yycheck[] =
{
       0,    80,    40,   214,     3,    42,     9,    47,     0,    88,
       0,    90,   212,   213,   214,     0,     3,   288,    18,     3,
     213,    21,    22,     0,     3,     0,    18,    27,    18,    21,
      22,    21,    22,    18,     3,    27,    21,    22,   160,    29,
       0,    18,    82,    18,    21,    22,    21,    22,    67,    50,
     129,   130,   131,   132,   133,     3,    56,   328,    18,     7,
      48,    21,    22,    67,    56,    67,    56,    86,    68,    89,
      19,    56,     5,     6,   273,     9,    68,    77,    82,    56,
      80,    56,     3,     4,     5,     6,    88,     8,   288,    88,
     212,   213,   214,    80,    82,   288,    56,   134,    67,   119,
     137,   121,   122,   123,   124,   125,   126,   127,   128,    50,
     289,   101,   311,    82,     3,    84,    85,   316,     7,     3,
      41,    42,   142,    17,    18,    67,   163,   286,   328,   208,
     329,   330,   170,    82,   345,   328,    85,    82,    80,    82,
      82,   340,    67,    85,    77,   345,   325,    80,   307,   228,
      50,    72,   231,   232,    67,    76,   355,    41,    42,    80,
     160,    82,   361,    88,   184,   287,   288,   346,   160,    82,
      73,   209,    85,   332,   164,    69,    70,   256,   357,     3,
       4,     5,     6,     7,     8,   205,    41,    42,    67,   268,
     269,     3,     4,     5,     6,    82,     8,     3,     4,     5,
       6,   323,     8,    82,     3,   284,   328,    17,    18,    19,
      20,     3,   212,   213,   214,    25,    26,    41,    42,   219,
     212,   213,   214,   345,    80,    80,    80,   219,    19,   219,
      85,    67,    63,    64,   219,    41,    42,    28,    29,    30,
      31,    32,   219,    38,   219,    82,    82,     3,    72,    41,
      42,    81,    76,    67,   254,   255,    80,    81,   316,   219,
      72,    82,   254,   255,   254,   255,    72,    81,    80,   254,
     255,    81,   330,    81,    80,    41,    42,   254,   255,     3,
       4,     5,     6,    19,     8,    41,    42,   287,   288,   289,
      71,    82,    73,    74,    75,   287,   288,   289,     3,   209,
      15,    16,   212,   213,   214,    15,    16,    17,    18,    19,
      20,     3,    81,     3,    67,     7,    40,    41,    42,    21,
      22,    23,    24,   323,    87,   325,     3,    47,   328,    19,
       7,   323,    48,   325,   244,    80,   328,    80,    28,    29,
      30,    31,    32,   254,   255,   345,   346,    80,   258,    21,
      22,    23,    24,   345,   346,   265,    80,   357,    83,    69,
      70,     3,     4,     5,     6,   357,     8,     3,     4,     5,
       6,     7,     8,    82,   284,   285,    82,    67,   288,     3,
      82,    71,    67,    73,    74,    75,    82,    86,   298,    82,
      80,     3,    82,    81,    84,    85,    85,    81,   308,    41,
      42,    19,    73,    74,    75,    41,    42,    86,   318,   319,
      82,   321,     1,    82,     3,     4,     5,     6,   328,     8,
      79,    10,    11,    12,    13,    14,    21,    22,    23,    24,
      72,    82,    86,   343,    76,   345,    72,   347,    80,    10,
      76,    19,    82,    81,    80,    80,    87,    81,   358,    38,
      39,    82,    41,    42,    81,    18,    45,    46,    22,    21,
      49,    50,    51,    52,    53,    54,    55,    65,    57,    58,
      59,    60,    61,    62,   355,   230,   305,    66,    49,    50,
      51,    52,    53,    72,   164,   361,    81,    76,   230,   358,
     309,    80,    27,    82,    83,    66,    68,    36,    87,    88,
       1,    80,     3,     4,     5,     6,    80,     8,   205,    10,
      11,    12,    13,    14,    -1,    15,    -1,    17,    18,    19,
      20,    -1,    15,    16,    17,    18,    19,    20,     3,     4,
       5,     6,    -1,     8,    -1,    -1,    -1,    38,    -1,    -1,
      41,    42,    -1,    -1,    45,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    80,    66,    41,    42,    -1,    69,
      70,    72,    88,    -1,    90,    76,    69,    70,    -1,    80,
      -1,     1,    83,     3,     4,     5,     6,    88,     8,    82,
      10,    11,    12,    13,    14,    -1,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,   228,    -1,
      -1,   231,   232,   129,   130,   131,   132,   133,    38,    -1,
      -1,    41,    42,    -1,    -1,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,   256,    57,    -1,    -1,
      60,    61,    62,    -1,    -1,    -1,    66,     0,   268,   269,
       3,    -1,    72,    -1,    -1,    -1,    76,    10,    11,    -1,
      80,    -1,    82,    83,    -1,    -1,     1,    87,     3,     4,
       5,     6,    -1,     8,    -1,    10,    11,    12,    13,    14,
      17,    18,    19,    20,    17,    18,    19,    20,    41,    42,
      -1,    -1,    25,    26,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    38,    -1,    -1,    41,    42,    -1,    -1,
      45,    46,    -1,    66,    49,    50,    51,    52,    53,    54,
      55,    21,    22,    23,    24,    60,    61,    62,    -1,    -1,
      -1,    66,    69,    70,    -1,     3,    -1,    72,    -1,    -1,
      -1,    76,    10,    11,    -1,    80,    -1,    82,    83,    -1,
      -1,     1,    87,     3,     4,     5,     6,    19,     8,    -1,
      10,    11,    12,    13,    14,    -1,    28,    29,    30,    31,
      32,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    41,
      42,    49,    50,    51,    52,    53,    54,    55,    38,    39,
      -1,    41,    42,    -1,    -1,    45,    46,    -1,    66,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    66,    28,    29,    30,
      31,    32,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,     1,    83,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    -1,
      71,    -1,    73,    74,    75,     3,     4,     5,     6,    38,
       8,    40,    41,    42,    41,    42,    45,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    19,
      -1,    60,    61,    62,    -1,    -1,    -1,    66,    28,    29,
      30,    31,    32,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    81,     1,    83,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    13,    14,    71,    72,    73,
      74,    75,    71,    72,    73,    74,    75,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,     3,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    82,    83,     3,    15,    16,    17,
      18,    19,    20,    10,    11,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    -1,    66,
      41,    42,    80,    81,    82,    -1,    84,    85,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,     1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    66,    10,    11,    -1,    -1,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    -1,    71,    72,    73,    74,    75,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    10,    11,    41,    42,    49,    50,    51,
      52,    53,    54,    55,    63,    64,    65,    66,    90,    91,
      92,    93,    94,    95,    96,    99,   100,   101,   103,   104,
     105,   137,   138,   139,   142,   143,   144,   148,     3,    84,
      85,     9,     3,     3,   144,   144,    50,     9,    50,    50,
       0,    92,    63,    64,    10,    50,    94,    93,    95,   137,
      82,    82,     3,   138,   143,    73,   102,   105,    67,    82,
      19,    28,    29,    30,    31,    32,    82,   145,    41,    42,
     145,    82,     3,     3,     4,     5,     6,     8,    72,    76,
      80,   140,   141,   142,   143,   146,   147,    80,    38,   133,
      80,    80,    82,   102,     3,   139,   143,   144,     3,   143,
     146,   147,   148,   149,    82,     3,   146,   141,   146,    67,
      86,    15,    16,    17,    18,    19,    20,    69,    70,    71,
      72,    73,    74,    75,    81,   134,    82,    81,   105,   106,
     107,   108,    80,    81,   141,    19,   141,   141,   141,   141,
     141,   141,   141,   141,   146,   146,   146,   146,   146,   133,
     135,   133,     3,    81,    67,     7,    81,   141,   150,   151,
      87,     1,     3,    12,    13,    14,    39,    45,    46,    57,
      58,    59,    60,    61,    62,    95,    97,    98,    99,   100,
     105,   116,   117,   118,   129,   130,   133,   136,   137,   140,
     142,   143,   149,   133,   108,    67,    81,   140,    19,    85,
      47,    48,    80,    80,    80,    82,    82,    82,   141,    83,
       3,    82,   151,    88,     3,    40,    41,    42,    80,   109,
     110,   113,   114,   147,     3,   110,     3,     7,   131,     3,
       7,   132,     3,   110,   114,   117,   126,   128,   117,   120,
     127,   128,   126,    82,    95,   137,    19,    82,    85,   109,
      21,    22,    23,    24,    82,   111,    15,    16,   111,   112,
     113,   109,   109,    86,    47,    82,    48,    82,    17,    18,
      19,    20,    25,    26,   115,    80,   110,    81,    82,    81,
      98,    98,   109,   110,    81,   110,   109,   109,    85,   120,
     124,     3,     7,     3,     7,   110,   147,   110,   115,    87,
     117,   125,   127,   117,   125,    82,    86,   110,    19,   112,
      81,   115,   110,   135,    82,    79,   119,   120,    82,   124,
      86,   110,   110,   110,    88,    57,   125,   127,    19,   120,
     121,   124,    82,   115,    81,    80,    81,    87,   120,   122,
     110,   126,   125,    88,   110,   123,    82,    81,    67,    88,
     122,   125,   123,   119
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    92,    92,    93,    93,    94,    94,    94,    94,    94,
      95,    96,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    99,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   107,   107,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   111,   111,   111,   111,
     112,   112,   113,   113,   114,   115,   115,   115,   115,   115,
     115,   116,   116,   116,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   118,
     119,   119,   119,   120,   121,   121,   122,   122,   123,   123,
     123,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     128,   128,   128,   128,   128,   128,   129,   130,   131,   131,
     131,   131,   132,   132,   132,   132,   134,   133,   135,   135,
     135,   136,   136,   136,   136,   136,   137,   137,   137,   137,
     137,   137,   137,   138,   138,   139,   139,   139,   140,   140,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   142,   142,   142,   142,   142,   143,
     143,   143,   143,   144,   145,   145,   145,   145,   145,   145,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   147,
     147,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     2,     2,     1,     1,
       1,     2,     2,     5,     5,     1,     1,     2,     2,     0,
       6,     4,     1,     1,     1,     0,     4,     4,     1,     1,
       0,     3,     4,     2,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     1,     2,     1,
       1,     1,     0,     3,     1,     2,     1,     3,     3,     3,
       3,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     5,     3,     9,     8,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     9,     6,     5,
       7,     2,     1,     0,     1,     1,     3,     1,     1,     2,
       3,     4,     1,     3,     2,     1,     1,     1,     1,     1,
       3,     3,     7,     6,     4,     4,     4,     4,     3,     3,
       1,     1,     3,     3,     1,     1,     0,     4,     2,     2,
       0,     2,     2,     2,     2,     3,     1,     3,     2,     2,
       2,     2,     0,     3,     1,     1,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     8,     4,     4,     3,     3,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 10:
#line 99 "syntax.y" /* yacc.c:1646  */
    {
    		yyerrok;
    		yyclearin;}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 125 "syntax.y" /* yacc.c:1646  */
    {strcpy((yyvsp[-2].entry)->type,"class");}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 140 "syntax.y" /* yacc.c:1646  */
    { strcpy((yyvsp[-1].entry)->type,(yyvsp[-2].entry)->lexeme); }
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 159 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"int");}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 160 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"float");}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 161 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"short int");}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 162 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"short");}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 163 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"short");}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 164 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"LONG INT");}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 165 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"LONG_LONG");}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 166 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"LONG_LONG INT");}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 167 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"char");}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 168 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"VOID");}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 184 "syntax.y" /* yacc.c:1646  */
    {strcpy((yyvsp[0].entry)->type,type);}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 188 "syntax.y" /* yacc.c:1646  */
    { (yyval.dval)=(yyvsp[0].dval);}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 189 "syntax.y" /* yacc.c:1646  */
    {type_check((yyvsp[-2].entry)->type,typ1,0); (yyval.dval)=(yyvsp[0].dval);}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 190 "syntax.y" /* yacc.c:1646  */
    { type_check(typ1,(yyvsp[0].entry)->type,0);(yyval.dval)=(yyvsp[-2].dval);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 191 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval)=(yyvsp[-1].dval);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 192 "syntax.y" /* yacc.c:1646  */
    {type_check((yyvsp[-2].entry)->type,typ1,0); (yyval.dval) = (yyvsp[0].dval); }
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 193 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval)=(yyvsp[-1].entry)->value;}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 194 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval); }
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 195 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval); }
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 196 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval)=(yyvsp[0].entry)->value; strcpy(typ1,(yyvsp[0].entry)->type);}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 199 "syntax.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);if(search_entry(symbol_table,(yyvsp[0].entry)->lexeme,scope)==0){strcpy((yyvsp[0].entry)->type,type);}}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 228 "syntax.y" /* yacc.c:1646  */
    {(yyvsp[-3].entry)->value=(yyvsp[-1].dval);}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 230 "syntax.y" /* yacc.c:1646  */
    { strcpy((yyvsp[-3].entry)->type,type);(yyvsp[-3].entry)->value=(yyvsp[-1].dval);}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 232 "syntax.y" /* yacc.c:1646  */
    { strcpy((yyvsp[-1].entry)->type,type);}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 247 "syntax.y" /* yacc.c:1646  */
    {
    		yyerrok;
    		yyclearin;}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 316 "syntax.y" /* yacc.c:1646  */
    {(yyvsp[0].entry)->scope=scope;}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 326 "syntax.y" /* yacc.c:1646  */
    { printf("\nScope is %d\n",scope);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 362 "syntax.y" /* yacc.c:1646  */
    {strcpy((yyvsp[0].entry)->type,type); }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 370 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval),(yyvsp[0].dval);}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 371 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 375 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) > (yyvsp[0].dval));}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 376 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) < (yyvsp[0].dval));}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 377 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) == (yyvsp[0].dval));}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 378 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) != (yyvsp[0].dval));}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 379 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) <= (yyvsp[0].dval));}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 380 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) >= (yyvsp[0].dval));}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 381 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) && (yyvsp[0].dval));}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 382 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) || (yyvsp[0].dval));}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 383 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (!(yyvsp[0].dval));}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 384 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 385 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 386 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 387 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].entry)->value;}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 388 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 393 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].entry)->value = Evaluate((yyvsp[-2].entry)->value,(yyvsp[-1].ival),(yyvsp[0].dval));}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 394 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = 0;}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 395 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = 0;}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 396 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].entry)->value = Evaluate((yyvsp[-2].entry)->value,(yyvsp[-1].ival),(yyvsp[0].dval));}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 397 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = 0;}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 400 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-1].entry)->value = ((yyvsp[-1].entry)->value)++;}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 401 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-1].entry)->value = ((yyvsp[-1].entry)->value)--;}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 402 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].entry)->value = --((yyvsp[0].entry)->value);}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 403 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].entry)->value = ++((yyvsp[0].entry)->value);}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 405 "syntax.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);if(search_entry(symbol_table,(yyvsp[0].entry)->lexeme,scope)==0){strcpy((yyvsp[0].entry)->type,type);}}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 409 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = T_AEQ;}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 410 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = ADD_ASSIGN;}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 411 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = SUB_ASSIGN;}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 412 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = MUL_ASSIGN;}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 413 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = DIV_ASSIGN;}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 414 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = MOD_ASSIGN;}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 417 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval) + (yyvsp[0].dval);}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 418 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval) - (yyvsp[0].dval);}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 419 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval) * (yyvsp[0].dval);}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 420 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[0].dval) == 0) ? yyerror("Divide by 0!") : ((yyvsp[-2].dval) / (yyvsp[0].dval));}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 421 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (int)(yyvsp[-2].dval) % (int)(yyvsp[0].dval);}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 422 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-1].dval);}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 423 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = -(yyvsp[0].dval);}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 424 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].entry) -> value;}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 425 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 428 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 429 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 430 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].floating);}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 431 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].character);}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 434 "syntax.y" /* yacc.c:1646  */
    {strcpy((yyvsp[-7].entry)->type,type); (yyvsp[-7].entry)->value=(yyvsp[-5].dval);}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 435 "syntax.y" /* yacc.c:1646  */
    {strcpy((yyvsp[-3].entry)->type,type); (yyvsp[-3].entry)->value=(yyvsp[-1].dval);}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2275 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 451 "syntax.y" /* yacc.c:1906  */


#include "lex.yy.c"
#include <ctype.h>

double Evaluate (double lhs_value,int assign_type,double rhs_value)
{
	switch(assign_type)
	{
	case T_AEQ: return rhs_value;
	case ADD_ASSIGN: return (lhs_value + rhs_value);
	case SUB_ASSIGN: return (lhs_value - rhs_value);
	case MUL_ASSIGN: return (lhs_value * rhs_value);
	case DIV_ASSIGN: return (lhs_value / rhs_value);
	case MOD_ASSIGN: return ((int)lhs_value % (int)rhs_value);
	}
}

int main(int argc, char *argv[])
{
symbol_table = create_table();
	constant_table = create_table();

	yyin = fopen(argv[1], "r");
	

	if(!yyparse())
	{
	printf("\nParsing complete\n");
	}
	else
	{
	printf("\nParsing failed\n");
	}


	
	display(symbol_table);


	fclose(yyin);
	
	return 0;
}

int yyerror(char *msg)
{
error_no++;
	printf("Line no: %d Error message: %s\n", yylineno, msg);
}

void type_check(char * left, char * right, int flag)
{
	if(strcmp(left,right))
	{
		switch(flag)
		{
			case 0: yyerror("Type mismatch in arithmetic expression"); break;
			case 1: yyerror("Type mismatch in assignment expression"); break;
			case 2: yyerror("Type mismatch in logical expression"); break;
		}
	}
}

