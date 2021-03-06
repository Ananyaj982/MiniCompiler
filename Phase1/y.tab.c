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
	int current_dtype;
	char type[10];
	int yyerror(char *msg);
	int scope; 
	int error_no=0;
	char* className[26];
	int counter=0;

#line 86 "y.tab.c" /* yacc.c:339  */

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
#line 22 "syntax.y" /* yacc.c:355  */

 char *string;
	double dval;
	float floating;
	char character;
	entry_t* entry;
	int ival;
	bool boolean;

#line 255 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 272 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   622

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  151
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  243

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,     2,     2,    67,     2,     2,
      72,    73,    65,    63,    59,    64,    76,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    75,    74,
      61,    60,    62,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,     2,    80,     2,     2,     2,     2,
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
      55,    56,    57,    58,    69,    70,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    86,    88,    89,    91,    93,    94,    95,
      96,   102,   103,   107,   108,   110,   111,   112,   113,   114,
     118,   121,   124,   125,   126,   127,   129,   130,   131,   132,
     133,   135,   138,   139,   140,   142,   143,   146,   147,   150,
     151,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   169,   170,   173,   174,   178,   182,   183,   184,   185,
     187,   188,   189,   190,   195,   197,   200,   201,   202,   203,
     206,   207,   208,   209,   212,   212,   217,   218,   223,   224,
     226,   227,   228,   229,   230,   234,   238,   239,   243,   244,
     246,   247,   248,   249,   250,   253,   254,   257,   258,   260,
     265,   270,   271,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   293,   294,   295,   296,   297,
     300,   301,   302,   303,   305,   309,   310,   311,   312,   313,
     314,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     328,   329,   330,   331,   334,   335,   338,   339,   343,   344,
     347,   348
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
  "LS_EQ", "GR_EQ", "EQ", "NOT_EQ", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "R_CURL", "L_CURL", "INCREMENT",
  "DECREMENT", "T_TRUE", "T_FALSE", "T_CIN", "T_COUT", "T_IPREDIR",
  "T_OPREDIR", "SHORT", "INT", "FLOAT", "LONG", "LONG_LONG", "SIGNED",
  "UNSIGNED", "CONST", "IF", "FOR", "T_WHILE", "CONTINUE", "BREAK",
  "RETURN", "T_HEADER1", "T_HEADER2", "DEFINE", "CHAR", "','", "'='",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS",
  "LOWER_THAN_ELSE", "ELSE", "'('", "')'", "';'", "':'", "'.'", "'['",
  "']'", "'{'", "'}'", "$accept", "start", "header", "builder", "main",
  "builder1", "function", "class", "type1", "class_stuff", "object",
  "object_call", "type", "pointer", "data_type", "sign_specifier",
  "type_specifier", "argument_list", "arguments", "arg", "stmt",
  "input_stmt", "output_stmt", "i_var", "o_var", "compound_stmt", "$@1",
  "statements", "single_stmt", "while", "if_block", "declaration",
  "declaration_list", "sub_decl", "expression_stmt", "expression",
  "sub_expr", "assignment_expr", "unary_expr", "lhs", "assign_op",
  "arithmetic_expr", "constant", "array_counter", "function_call",
  "parameter_list", "parameter", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,    44,
      61,    60,    62,    43,    45,    42,    47,    37,    33,   314,
     315,   316,    40,    41,    59,    58,    46,    91,    93,   123,
     125
};
# endif

#define YYPACT_NINF -137

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-137)))

#define YYTABLE_NINF -125

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     467,  -137,     5,     8,    22,    27,    27,    -7,    51,  -137,
      23,    25,  -137,  -137,  -137,  -137,  -137,  -137,   440,   117,
    -137,   485,   530,  -137,  -137,    13,    58,    73,    32,   133,
    -137,  -137,   -40,  -137,  -137,   175,   534,  -137,    61,   135,
     397,    76,   150,  -137,  -137,  -137,  -137,   115,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,   485,  -137,  -137,  -137,
    -137,  -137,    19,    49,   562,    32,  -137,  -137,   130,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,   134,  -137,  -137,
     433,  -137,   118,   557,  -137,  -137,  -137,  -137,   121,   397,
     121,   -52,   287,  -137,   562,   232,  -137,   122,  -137,   131,
     140,   507,  -137,  -137,    54,  -137,  -137,   182,   -20,  -137,
     232,  -137,  -137,  -137,  -137,  -137,  -137,   320,   397,   160,
     397,   397,   397,   397,   397,   397,   397,   397,   121,   121,
     121,   121,   121,   150,   226,  -137,   150,   218,   149,   169,
    -137,   355,  -137,   287,   151,    55,   227,  -137,  -137,    37,
      37,  -137,  -137,   136,   136,  -137,  -137,  -137,  -137,  -137,
     112,  -137,  -137,  -137,   209,   210,   179,   180,   181,   188,
     348,  -137,   186,  -137,    13,    58,  -137,  -137,  -137,  -137,
     280,  -137,  -137,  -137,  -137,   191,  -137,  -137,   150,   507,
    -137,  -137,   287,    85,  -137,   397,    81,    82,   397,   397,
    -137,  -137,  -137,   192,   485,  -137,  -137,  -137,  -137,  -137,
     391,  -137,   -11,  -137,  -137,   -35,  -137,  -137,   -24,    97,
     183,   215,  -137,   332,   332,  -137,  -137,   162,  -137,   187,
    -137,   108,   108,  -137,  -137,  -137,  -137,  -137,  -137,   205,
    -137,   108,  -137
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    10,   124,    50,     0,     0,     0,    44,    41,    42,
      45,    47,    39,    40,     8,     9,     4,    49,     0,     3,
       5,    19,     0,    15,    88,     0,     0,     0,    34,     0,
      38,    16,     0,    96,    97,     0,     0,    99,     0,     0,
       0,     0,     0,   124,   123,   122,    43,     0,    46,    48,
       1,     2,     7,     6,    50,    41,    11,    12,    17,    18,
      92,    93,   124,     0,     0,    36,    33,    37,     0,    90,
     128,   129,   130,   126,   127,   125,    91,     0,   120,   121,
       0,    31,     0,   138,   140,   141,   142,   143,     0,     0,
       0,     0,   102,   113,   114,   112,   139,     0,    74,     0,
       0,    52,    89,    35,   124,    95,   119,     0,   138,   118,
     115,   116,   117,    32,   138,   137,   111,     0,     0,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,    51,
      54,     0,   136,   101,     0,   109,   110,   107,   108,   105,
     106,   104,   103,   131,   132,   133,   134,   135,    13,    63,
     124,    22,    23,    24,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    60,    61,    62,    77,    58,    59,    56,
       0,    57,    79,    78,    28,     0,    14,    55,     0,     0,
     151,   147,   150,     0,   149,     0,     0,     0,     0,     0,
      82,    83,    81,     0,    94,    75,    76,    80,    20,    53,
       0,   146,     0,    68,    69,     0,    72,    73,     0,     0,
       0,   100,    84,    30,    30,   148,   144,     0,    64,     0,
      65,     0,     0,    26,    27,    66,    67,    70,    71,    86,
      85,     0,    87
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,  -137,   264,   263,   265,    10,  -137,  -137,    -6,
    -131,  -129,   -95,   222,  -137,  -137,   271,  -137,  -137,   119,
    -127,  -137,  -137,  -137,  -137,   -41,  -137,  -137,  -137,  -137,
    -137,    15,   282,   242,  -137,  -136,   -80,     2,     0,     6,
     279,   240,  -137,   236,   239,  -137,   126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,   171,    24,   172,   173,
      25,    26,    27,    66,    28,    29,    30,   138,   139,   140,
     176,   177,   178,   215,   218,   179,   134,   180,   181,   182,
     183,   184,    32,    33,   220,    91,    92,    93,    94,    36,
      77,    95,    96,    37,   185,   193,   194
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    99,    34,   174,   227,   175,   137,   118,    38,   116,
      23,    44,    45,  -124,  -124,    31,   229,    41,    35,    68,
      34,    35,    35,    34,    34,    42,   119,    64,    23,    34,
      43,    23,    58,    31,    69,    46,    31,    59,   143,   228,
     145,   146,   147,   148,   149,   150,   151,   152,   118,   174,
     230,   175,   141,   206,   122,   123,    35,    40,    34,   212,
      47,   192,   219,   221,   -98,    48,    58,    49,    64,   226,
      34,    59,   122,   123,   124,   125,    62,   106,   -98,   -98,
     109,    39,    40,   107,   213,   216,   107,    60,   214,   217,
     203,   101,   158,   -98,   137,   186,    40,    65,   126,   127,
     174,   174,   175,   175,   239,   240,     5,     6,    68,   159,
     174,   160,   175,   -98,   242,    38,   126,   127,    54,     4,
     161,   162,   163,   102,   114,    84,    85,    86,   -98,    87,
     192,    40,    61,   104,    35,    81,    34,    43,    82,    98,
     -30,     5,     6,    54,   210,   164,   165,   208,    97,     7,
      55,     9,    10,    11,    12,    13,   118,   166,   211,   167,
     168,   169,   170,     5,     6,   235,    17,     5,     6,   236,
     231,   -98,    52,    53,     7,    55,     9,    10,    11,   -30,
      35,    98,    34,   -25,   141,    88,   -98,   100,    39,    40,
     237,    17,   113,    90,   238,   133,    70,    71,    72,    73,
      74,   130,   131,   132,    35,   135,    34,   120,   121,   122,
     123,   124,   125,   136,   223,    78,    79,   233,   234,   224,
     144,   187,   188,    35,    35,    34,    34,   159,   189,   160,
     195,    35,    35,    34,    34,    75,    54,     4,   161,   162,
     163,    35,   120,    34,   122,   123,   124,   125,   196,    76,
     197,   198,   199,   126,   127,   200,   232,    98,   -30,     5,
       6,   204,   201,   164,   165,   207,   222,     7,    55,     9,
      10,    11,    12,    13,   118,   166,   241,   167,   168,   169,
     170,   159,    51,   160,    17,    57,    56,   103,   126,   127,
      54,     4,   161,   162,   163,   128,   129,   130,   131,   132,
      67,   -25,   120,   121,   122,   123,   124,   125,   209,    63,
     105,    98,   205,     5,     6,    80,   111,   164,   165,   112,
     110,     7,    55,     9,    10,    11,    12,    13,   115,   166,
     117,   167,   168,   169,   170,     2,   225,     0,    17,     0,
       0,     0,    54,     4,   161,   162,   163,     0,   126,   127,
       0,    83,    84,    85,    86,   -25,    87,     0,    83,    84,
      85,    86,   190,    87,     0,     5,     6,     0,   153,   154,
     155,   156,   157,     7,    55,     9,    10,    11,    12,    13,
       0,     5,     6,   128,   129,   130,   131,   132,     5,     6,
      17,     0,     0,   142,    83,    84,    85,    86,   190,    87,
      83,    84,    85,    86,     0,    87,     0,   -25,     0,     0,
       0,     0,    88,     0,     0,     0,    89,     0,     0,    88,
      90,     0,   202,    89,     5,     6,     0,    90,   191,     0,
       5,     6,     0,     0,     0,     0,   108,    84,    85,    86,
      50,    87,     0,     2,     0,     0,     0,     0,     0,     0,
       3,     4,     0,     0,     0,    88,     0,     0,     0,    89,
       0,    88,     0,    90,     0,    89,     5,     6,     1,    90,
       2,     0,     0,     5,     6,     0,     0,     3,     4,     0,
       0,     7,     8,     9,    10,    11,    12,    13,     2,     0,
       0,     0,     0,     0,     0,    54,     4,    88,    17,     0,
       5,     6,     0,     0,     0,    90,     0,     0,     7,     8,
       9,    10,    11,    12,    13,     0,     0,    54,     5,     6,
       0,     0,    14,    15,    16,    17,     7,    55,     9,    10,
      11,    12,    13,     2,     0,     0,     0,     0,     0,     0,
       3,     4,     0,    17,     0,     0,     0,     0,     7,    55,
       9,    10,    11,    12,    13,    70,    71,    72,    73,    74,
       0,     0,     0,     5,     6,    17,     0,    78,    79,     0,
       0,     7,     8,     9,    10,    11,    12,    13,  -124,  -124,
    -124,  -124,  -124,    70,    71,    72,    73,    74,    17,     0,
    -124,  -124,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -124,     0,     0,
       0,     0,    75
};

static const yytype_int16 yycheck[] =
{
       0,    42,     0,   134,    39,   134,   101,    59,     3,    89,
       0,     5,     6,    33,    34,     0,    40,     9,    18,    59,
      18,    21,    22,    21,    22,     3,    78,    27,    18,    27,
       3,    21,    22,    18,    74,    42,    21,    22,   118,    74,
     120,   121,   122,   123,   124,   125,   126,   127,    59,   180,
      74,   180,    72,   180,    17,    18,    56,    77,    56,   195,
       9,   141,   198,   199,    59,    42,    56,    42,    68,    80,
      68,    56,    17,    18,    19,    20,     3,    77,    59,    74,
      80,    76,    77,    77,     3,     3,    80,    74,     7,     7,
     170,    72,   133,    74,   189,   136,    77,    65,    61,    62,
     231,   232,   231,   232,   231,   232,    33,    34,    59,     1,
     241,     3,   241,    59,   241,     3,    61,    62,    10,    11,
      12,    13,    14,    74,     3,     4,     5,     6,    74,     8,
     210,    77,    74,     3,   134,    74,   134,     3,     3,    31,
      32,    33,    34,    10,    59,    37,    38,   188,    72,    41,
      42,    43,    44,    45,    46,    47,    59,    49,    73,    51,
      52,    53,    54,    33,    34,     3,    58,    33,    34,     7,
      73,    59,    55,    56,    41,    42,    43,    44,    45,    71,
     180,    31,   180,    75,    72,    64,    74,    72,    76,    77,
       3,    58,    74,    72,     7,    73,    21,    22,    23,    24,
      25,    65,    66,    67,   204,    74,   204,    15,    16,    17,
      18,    19,    20,    73,   204,    33,    34,   223,   224,   204,
      60,     3,    73,   223,   224,   223,   224,     1,    59,     3,
      79,   231,   232,   231,   232,    60,    10,    11,    12,    13,
      14,   241,    15,   241,    17,    18,    19,    20,    39,    74,
      40,    72,    72,    61,    62,    74,    73,    31,    32,    33,
      34,    75,    74,    37,    38,    74,    74,    41,    42,    43,
      44,    45,    46,    47,    59,    49,    71,    51,    52,    53,
      54,     1,    18,     3,    58,    22,    21,    65,    61,    62,
      10,    11,    12,    13,    14,    63,    64,    65,    66,    67,
      29,    75,    15,    16,    17,    18,    19,    20,   189,    27,
      68,    31,    32,    33,    34,    36,    80,    37,    38,    80,
      80,    41,    42,    43,    44,    45,    46,    47,    88,    49,
      90,    51,    52,    53,    54,     3,   210,    -1,    58,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    -1,    61,    62,
      -1,     3,     4,     5,     6,    75,     8,    -1,     3,     4,
       5,     6,     7,     8,    -1,    33,    34,    -1,   128,   129,
     130,   131,   132,    41,    42,    43,    44,    45,    46,    47,
      -1,    33,    34,    63,    64,    65,    66,    67,    33,    34,
      58,    -1,    -1,    73,     3,     4,     5,     6,     7,     8,
       3,     4,     5,     6,    -1,     8,    -1,    75,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    64,
      72,    -1,    74,    68,    33,    34,    -1,    72,    73,    -1,
      33,    34,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       0,     8,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      -1,    64,    -1,    72,    -1,    68,    33,    34,     1,    72,
       3,    -1,    -1,    33,    34,    -1,    -1,    10,    11,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    64,    58,    -1,
      33,    34,    -1,    -1,    -1,    72,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    10,    33,    34,
      -1,    -1,    55,    56,    57,    58,    41,    42,    43,    44,
      45,    46,    47,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    -1,    58,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    33,    34,    58,    -1,    33,    34,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    21,    22,
      23,    24,    25,    21,    22,    23,    24,    25,    58,    -1,
      33,    34,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    10,    11,    33,    34,    41,    42,    43,
      44,    45,    46,    47,    55,    56,    57,    58,    82,    83,
      84,    85,    86,    87,    88,    91,    92,    93,    95,    96,
      97,   112,   113,   114,   118,   119,   120,   124,     3,    76,
      77,     9,     3,     3,   120,   120,    42,     9,    42,    42,
       0,    84,    55,    56,    10,    42,    86,    85,    87,   112,
      74,    74,     3,   113,   119,    65,    94,    97,    59,    74,
      21,    22,    23,    24,    25,    60,    74,   121,    33,    34,
     121,    74,     3,     3,     4,     5,     6,     8,    64,    68,
      72,   116,   117,   118,   119,   122,   123,    72,    31,   106,
      72,    72,    74,    94,     3,   114,   119,   120,     3,   119,
     122,   124,   125,    74,     3,   122,   117,   122,    59,    78,
      15,    16,    17,    18,    19,    20,    61,    62,    63,    64,
      65,    66,    67,    73,   107,    74,    73,    93,    98,    99,
     100,    72,    73,   117,    60,   117,   117,   117,   117,   117,
     117,   117,   117,   122,   122,   122,   122,   122,   106,     1,
       3,    12,    13,    14,    37,    38,    49,    51,    52,    53,
      54,    87,    89,    90,    91,    92,   101,   102,   103,   106,
     108,   109,   110,   111,   112,   125,   106,     3,    73,    59,
       7,    73,   117,   126,   127,    79,    39,    40,    72,    72,
      74,    74,    74,   117,    75,    32,   101,    74,   106,   100,
      59,    73,   116,     3,     7,   104,     3,     7,   105,   116,
     115,   116,    74,    87,   112,   127,    80,    39,    74,    40,
      74,    73,    73,    90,    90,     3,     7,     3,     7,   101,
     101,    71,   101
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    86,    86,
      87,    88,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    91,    92,    93,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    98,    98,    99,    99,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   102,   103,   104,   104,   104,   104,
     105,   105,   105,   105,   107,   106,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   114,   114,
     115,   116,   116,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   118,   118,   118,   118,   118,
     119,   119,   119,   119,   120,   121,   121,   121,   121,   121,
     121,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     123,   123,   123,   123,   124,   124,   125,   125,   126,   126,
     127,   127
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     2,     2,     1,     1,
       1,     2,     2,     5,     5,     1,     1,     2,     2,     0,
       6,     4,     1,     1,     1,     0,     4,     4,     1,     1,
       0,     3,     4,     2,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     1,     2,     1,
       1,     1,     0,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     3,     3,     1,     1,
       3,     3,     1,     1,     0,     4,     2,     1,     1,     1,
       2,     2,     2,     2,     3,     5,     5,     7,     1,     3,
       2,     2,     2,     2,     0,     3,     1,     1,     1,     1,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       1,     1,     1,     1,     8,     4,     4,     3,     3,     1,
       1,     1
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
#line 96 "syntax.y" /* yacc.c:1646  */
    {
    		yyerrok;
    		yyclearin;}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 121 "syntax.y" /* yacc.c:1646  */
    {strcpy((yyvsp[-2].entry)->type,"class");}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 136 "syntax.y" /* yacc.c:1646  */
    { strcpy((yyvsp[-1].entry)->type,(yyvsp[-2].entry)->lexeme); }
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 154 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"int");}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 155 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"float");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 156 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"short int");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 157 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"short");}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 158 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"short");}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 159 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"LONG INT");}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 160 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"LONG_LONG");}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 161 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"LONG_LONG INT");}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 162 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"char");}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 163 "syntax.y" /* yacc.c:1646  */
    {strcpy(type,"VOID");}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 190 "syntax.y" /* yacc.c:1646  */
    {
    		yyerrok;
    		yyclearin;}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 202 "syntax.y" /* yacc.c:1646  */
    {(yyvsp[0].entry)->scope=scope;}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 212 "syntax.y" /* yacc.c:1646  */
    { printf("\nScope is %d\n",scope);}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 258 "syntax.y" /* yacc.c:1646  */
    {strcpy((yyvsp[0].entry)->type,type); }
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 270 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval),(yyvsp[0].dval);}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 271 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 275 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) > (yyvsp[0].dval));}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 276 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) < (yyvsp[0].dval));}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 277 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) == (yyvsp[0].dval));}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 278 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) != (yyvsp[0].dval));}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 279 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) <= (yyvsp[0].dval));}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 280 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) >= (yyvsp[0].dval));}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 281 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) && (yyvsp[0].dval));}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 282 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-2].dval) || (yyvsp[0].dval));}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 283 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (!(yyvsp[0].dval));}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 284 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 285 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 286 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 293 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].entry)->value = Evaluate((yyvsp[-2].entry)->value,(yyvsp[-1].ival),(yyvsp[0].dval));}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 294 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = 0;}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 295 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = 0;}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 296 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].entry)->value = Evaluate((yyvsp[-2].entry)->value,(yyvsp[-1].ival),(yyvsp[0].dval));}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 297 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = 0;}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 300 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-1].entry)->value = ((yyvsp[-1].entry)->value)++;}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 301 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-1].entry)->value = ((yyvsp[-1].entry)->value)--;}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 302 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].entry)->value = --((yyvsp[0].entry)->value);}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 303 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].entry)->value = ++((yyvsp[0].entry)->value);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 305 "syntax.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);if(search_entry(symbol_table,(yyvsp[0].entry)->lexeme,scope)==0){strcpy((yyvsp[0].entry)->type,type);}}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 309 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = '=';}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 310 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = ADD_ASSIGN;}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 311 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = SUB_ASSIGN;}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 312 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = MUL_ASSIGN;}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 313 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = DIV_ASSIGN;}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 314 "syntax.y" /* yacc.c:1646  */
    {(yyval.ival) = MOD_ASSIGN;}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 317 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval) + (yyvsp[0].dval);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 318 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval) - (yyvsp[0].dval);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 319 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval) * (yyvsp[0].dval);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 320 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[0].dval) == 0) ? yyerror("Divide by 0!") : ((yyvsp[-2].dval) / (yyvsp[0].dval));}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 321 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (int)(yyvsp[-2].dval) % (int)(yyvsp[0].dval);}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 322 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-1].dval);}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 323 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = -(yyvsp[0].dval);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 324 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].entry) -> value;}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 325 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 328 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 329 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 330 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].floating);}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 331 "syntax.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].character);}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 334 "syntax.y" /* yacc.c:1646  */
    {strcpy((yyvsp[-7].entry)->type,type); (yyvsp[-7].entry)->value=(yyvsp[-5].dval);}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 335 "syntax.y" /* yacc.c:1646  */
    {strcpy((yyvsp[-3].entry)->type,type); (yyvsp[-3].entry)->value=(yyvsp[-1].dval);}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1994 "y.tab.c" /* yacc.c:1646  */
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
#line 351 "syntax.y" /* yacc.c:1906  */


#include "lex.yy.c"
#include <ctype.h>

double Evaluate (double lhs_value,int assign_type,double rhs_value)
{
	switch(assign_type)
	{
	case '=': return rhs_value;
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
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
}
