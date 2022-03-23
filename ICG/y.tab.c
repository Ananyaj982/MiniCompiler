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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"hashtbl.h"
#define YYSTYPE char*
int yylex();
void yyerror(char *s);
int top=-1;
int temp_i=0;
char tmp_i[3];
char temp[2]="t";
int ltop=0;
int label[20];
int lnum=0;
int l_while=0;
int l_for=0;
void push_sign();
void push_lit(char* yy);
void codegen_assign();
void codegen();
void codegen_assigna();
void codegen_un();
void if1();
void if2();
void if3();
void while1();
void while2();
void while3();


#line 98 "y.tab.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 243 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   242

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      48,    49,     2,     2,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    45,    46,    49,    50,    53,    54,    57,
      60,    61,    62,    65,    68,    69,    70,    71,    75,    75,
      75,    86,    86,    86,    95,    99,   100,   103,   104,   107,
     108,   111,   112,   116,   117,   118,   121,   122,   122,   123,
     124,   125,   126,   129,   129,   129,   130,   130,   136,   137,
     137,   138,   141,   142,   148,   149,   153,   154,   155,   156,
     157,   160,   161,   164,   165,   166,   167,   170,   173,   174,
     177,   178,   181,   182,   183,   184,   185,   188,   189,   190,
     191,   194,   195,   198,   199,   202,   205,   206,   207,   208,
     209,   210
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HEADER", "NAMESPACE", "MAIN", "T_lt",
  "T_gt", "T_lteq", "T_gteq", "T_neq", "T_eqeq", "T_pl", "T_min", "T_mul",
  "T_div", "T_and", "T_or", "T_incr", "T_decr", "T_not", "T_eq", "INT",
  "CHAR", "FLOAT", "DOUBLE", "VOID", "BOOL", "COUT", "COUTSTR", "ENDL",
  "INS", "CIN", "XTR", "IF", "ELSE", "WHILE", "DO", "FOR", "ELSE_IF",
  "T_RETURN", "ID", "NUM", "SINGLE_CHAR_VALUE", "OPB", "CLB", "OSCOPE",
  "CSCOPE", "'('", "')'", "';'", "','", "$accept", "s", "namespace",
  "header", "main", "start", "c", "empty", "stmt", "assignment", "$@1",
  "$@2", "$@3", "$@4", "multi_decl", "assign", "multidim", "array",
  "expression", "$@5", "loops", "$@6", "$@7", "$@8", "x", "$@9",
  "loopbody", "cond_stmt", "cond", "print", "more_op", "read_ip",
  "more_ip", "lit", "TYPE", "bin_arop", "bin_boolop", "un_arop",
  "un_boolop", "relop", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,    40,    41,
      59,    44
};
# endif

#define YYPACT_NINF -109

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-109)))

#define YYTABLE_NINF -22

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,  -109,    37,    79,  -109,  -109,  -109,     2,    34,    73,
    -109,     5,    21,    35,    38,    45,    62,  -109,  -109,    63,
     161,  -109,    69,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,    94,    96,    82,  -109,    -2,  -109,    77,  -109,
    -109,  -109,  -109,  -109,    83,    90,    52,    52,  -109,    48,
      92,   186,    87,    64,   115,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,    52,  -109,    11,  -109,  -109,  -109,   106,
     106,   105,  -109,    91,  -109,   223,    26,   186,   109,  -109,
      52,  -109,    64,   118,    22,  -109,  -109,  -109,   100,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,    64,    64,
     223,   101,   111,    52,  -109,   112,  -109,   106,  -109,   106,
    -109,   150,    97,     7,    64,  -109,    64,  -109,   138,  -109,
     111,    52,  -109,  -109,  -109,   114,    27,    64,  -109,    64,
    -109,   150,   116,    64,   141,  -109,   124,  -109,   150,   119,
    -109,  -109,   113,   127,  -109,   111,  -109,  -109,  -109,   117,
    -109,  -109,   186,    64,  -109,  -109,   -16,  -109,  -109,   145,
    -109,  -109,   117,    29,  -109,  -109,  -109,   -16,   150,  -109,
      27,  -109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,     0,     4,     1,     5,     3,     0,     0,     0,
       2,     0,     0,     0,     0,     0,     0,    13,    13,     0,
       9,    12,     0,     7,    83,    84,    85,    72,    73,    74,
      75,    76,     0,     0,     0,    43,    70,    71,     0,    14,
      15,    11,    16,    17,    36,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,    10,    77,    78,    79,    80,
      81,    82,    37,     0,    40,    24,    70,    41,    42,    13,
      13,    13,    54,     0,    55,    36,     0,     0,     0,    19,
       0,    39,     0,     0,     0,    66,    61,    62,     0,    69,
      67,    46,    86,    87,    88,    89,    90,    91,     0,     0,
      36,     0,    13,     0,    38,     0,    22,    13,    65,    13,
      68,     0,    56,     0,     0,    44,     0,    28,     0,    20,
      13,     0,    63,    64,    13,     0,    13,     0,    60,     0,
      59,     0,     0,     0,    13,    23,     0,    53,     0,     0,
      51,    47,     0,     0,    45,    13,    26,    29,    30,    13,
      52,    48,     0,     0,    58,    27,     0,    32,    25,     0,
      57,    33,    13,     0,    49,    31,    34,     0,     0,    35,
      13,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,  -109,  -109,  -109,   169,    66,   -17,   -18,  -109,
    -109,  -109,  -109,  -109,   -98,  -109,    36,    32,   -42,  -109,
    -109,  -109,  -109,  -109,    30,  -109,  -108,   -71,  -109,  -109,
     -59,  -109,  -109,   -41,  -109,  -109,    89,   -35,   -48,   -93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     3,    10,    19,    20,    85,   125,    39,
      54,   103,    83,   121,   118,   149,   158,   162,    40,    80,
      41,    52,   131,   111,   141,   168,   126,    73,    74,    42,
      86,    43,    90,    44,    45,    62,    63,    46,    47,    98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    21,    38,    76,    67,    68,   101,   114,    70,    64,
      75,    87,    78,    92,    93,    94,    95,    96,    97,   -18,
     129,    81,   134,   144,     8,    66,    37,     1,     9,    76,
     151,   161,   -21,    72,    68,   100,    75,     4,   104,    11,
      64,   105,    53,   109,    24,    25,    26,   155,   122,   153,
     123,   107,   108,    13,    89,    82,   128,   112,   113,    72,
     170,   119,   138,    66,    37,    64,   139,    66,    37,    14,
      24,    25,    26,   130,    99,   132,   166,    69,    12,   135,
     167,   159,     5,     6,    15,   117,   142,    16,   143,    66,
      37,    17,   146,    66,    37,    56,    57,    58,    59,    60,
      61,    24,    25,   117,    76,    66,    37,    21,    18,   140,
      23,    75,   160,    60,    61,   163,    48,   148,    38,    92,
      93,    94,    95,    96,    97,    49,   163,    55,   117,    50,
      51,    65,   157,    71,    72,    77,    79,    84,    88,   106,
      91,   110,    24,    25,    26,   157,    27,    28,    29,    30,
     115,    31,    32,   140,   102,   116,    33,   120,    34,   133,
      35,   145,   147,   156,   137,    36,    37,   152,    24,    25,
      26,   150,    27,    28,    29,    30,   154,    31,    32,    24,
      25,    26,    33,    27,    28,    29,    30,    22,    31,    32,
     136,    36,    37,    33,   164,    34,   124,    35,   165,   169,
     171,   127,    36,    37,    24,    25,    26,     0,    27,    28,
      29,    30,     0,    31,    32,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    37,    92,
      93,    94,    95,    96,    97,    56,    57,    58,    59,    60,
      61,    24,    25
};

static const yytype_int16 yycheck[] =
{
      17,    18,    20,    51,    46,    47,    77,   100,    49,    44,
      51,    70,    53,     6,     7,     8,     9,    10,    11,    21,
     113,    63,   120,   131,    22,    41,    42,     3,    26,    77,
     138,    47,    21,    51,    76,    76,    77,     0,    80,     5,
      75,    82,    44,    84,    18,    19,    20,   145,   107,   142,
     109,    29,    30,    48,    71,    44,    49,    98,    99,    77,
     168,   103,    35,    41,    42,   100,    39,    41,    42,    48,
      18,    19,    20,   114,    48,   116,    47,    29,     5,   121,
      51,   152,     3,     4,    49,   102,   127,    49,   129,    41,
      42,    46,   133,    41,    42,    12,    13,    14,    15,    16,
      17,    18,    19,   120,   152,    41,    42,   124,    46,   126,
      47,   152,   153,    16,    17,   156,    47,   134,   136,     6,
       7,     8,     9,    10,    11,    31,   167,    50,   145,    33,
      48,    41,   149,    41,   152,    48,    21,    31,    33,    21,
      49,    41,    18,    19,    20,   162,    22,    23,    24,    25,
      49,    27,    28,   170,    45,    44,    32,    45,    34,    21,
      36,    45,    21,    46,    50,    41,    42,    48,    18,    19,
      20,    47,    22,    23,    24,    25,    49,    27,    28,    18,
      19,    20,    32,    22,    23,    24,    25,    18,    27,    28,
     124,    41,    42,    32,    49,    34,    46,    36,   162,   167,
     170,   112,    41,    42,    18,    19,    20,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    55,     0,     3,     4,    54,    22,    26,
      56,     5,     5,    48,    48,    49,    49,    46,    46,    57,
      58,    59,    57,    47,    18,    19,    20,    22,    23,    24,
      25,    27,    28,    32,    34,    36,    41,    42,    60,    61,
      70,    72,    81,    83,    85,    86,    89,    90,    47,    31,
      33,    48,    73,    44,    62,    50,    12,    13,    14,    15,
      16,    17,    87,    88,    89,    41,    41,    70,    70,    29,
      85,    41,    60,    79,    80,    85,    90,    48,    85,    21,
      71,    70,    44,    64,    31,    59,    82,    82,    33,    59,
      84,    49,     6,     7,     8,     9,    10,    11,    91,    48,
      85,    79,    45,    63,    70,    85,    21,    29,    30,    85,
      41,    75,    85,    85,    91,    49,    44,    59,    66,    70,
      45,    65,    82,    82,    46,    60,    78,    88,    49,    91,
      85,    74,    85,    21,    66,    70,    58,    50,    35,    39,
      59,    76,    85,    85,    78,    45,    85,    21,    59,    67,
      47,    78,    48,    91,    49,    66,    46,    59,    68,    79,
      85,    47,    69,    85,    49,    68,    47,    51,    77,    69,
      78,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    56,    56,    57,
      58,    58,    58,    59,    60,    60,    60,    60,    62,    63,
      61,    64,    65,    61,    61,    61,    61,    66,    66,    67,
      67,    68,    68,    69,    69,    69,    70,    71,    70,    70,
      70,    70,    70,    73,    74,    72,    75,    72,    76,    77,
      76,    76,    78,    78,    79,    79,    80,    80,    80,    80,
      80,    81,    81,    82,    82,    82,    82,    83,    84,    84,
      85,    85,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    91,    91,    91,    91,
      91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     0,     2,     1,     7,     7,     1,
       3,     2,     1,     0,     1,     1,     1,     1,     0,     0,
       5,     0,     0,     6,     2,     8,     7,     4,     1,     1,
       1,     3,     1,     1,     2,     3,     1,     0,     4,     3,
       2,     2,     2,     0,     0,     7,     0,     7,     2,     0,
       7,     1,     3,     2,     1,     1,     3,     7,     6,     4,
       4,     4,     4,     3,     3,     2,     1,     4,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
        case 18:
#line 75 "syntax.y" /* yacc.c:1646  */
    {push_lit(yylval);}
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 75 "syntax.y" /* yacc.c:1646  */
    {push_sign();}
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 76 "syntax.y" /* yacc.c:1646  */
    {
              codegen_assign();
              check_update(yylineno,name,value,type,scope);
          }
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 86 "syntax.y" /* yacc.c:1646  */
    {push_lit(yylval);}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 86 "syntax.y" /* yacc.c:1646  */
    {push_sign();}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 87 "syntax.y" /* yacc.c:1646  */
    {
              codegen_assign();
              add_update_node(yylineno,name,value,type,scope);
          }
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 96 "syntax.y" /* yacc.c:1646  */
    {
              add_update_node(yylineno,name,"",type,scope);
          }
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 122 "syntax.y" /* yacc.c:1646  */
    {push_sign();}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 122 "syntax.y" /* yacc.c:1646  */
    {codegen();}
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 124 "syntax.y" /* yacc.c:1646  */
    {push_sign();codegen_un();}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 129 "syntax.y" /* yacc.c:1646  */
    {while1();}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 129 "syntax.y" /* yacc.c:1646  */
    {while2();}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 129 "syntax.y" /* yacc.c:1646  */
    {while3();}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 130 "syntax.y" /* yacc.c:1646  */
    {if1();}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 130 "syntax.y" /* yacc.c:1646  */
    {if3();}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 137 "syntax.y" /* yacc.c:1646  */
    {if2();}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 153 "syntax.y" /* yacc.c:1646  */
    {codegen_assigna();}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 177 "syntax.y" /* yacc.c:1646  */
    {push_lit(yylval);}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 178 "syntax.y" /* yacc.c:1646  */
    {push_lit(value);}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 205 "syntax.y" /* yacc.c:1646  */
    {push_sign();}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 206 "syntax.y" /* yacc.c:1646  */
    {push_sign();}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 207 "syntax.y" /* yacc.c:1646  */
    {push_sign();}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 208 "syntax.y" /* yacc.c:1646  */
    {push_sign();}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 209 "syntax.y" /* yacc.c:1646  */
    {push_sign();}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 210 "syntax.y" /* yacc.c:1646  */
    {push_sign();}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1617 "y.tab.c" /* yacc.c:1646  */
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
#line 213 "syntax.y" /* yacc.c:1906  */

#include <stdio.h>
#include <string.h>
#include"lex.yy.c"
#include<ctype.h>
int count=0;
char st[100][100];
char label_node[4];


int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	FILE *filePointer;
//FILE *filePointer= fopen("input.txt", "w"); 
filePointer = fopen("input.txt", "w");
    if(!yyparse())
    {
		print_table();
        printf("\nParsing complete\n");
         printf("---------------------Quadruples-------------------------\n\n");
    printf("Operator \t Arg1 \t\t Arg2 \t\t Result \n");
    int i;
    for(i=0;i<quadlen;i++)
    {
        printf("%-8s \t %-8s \t %-8s \t %-6s \n",q[i].op,q[i].arg1,q[i].arg2,q[i].res);
        if(q[i].arg1==NULL && q[i].arg2==NULL)
        {
        	fprintf(filePointer, "%s %s %s %s\n", q[i].op,"NULL","NULL",q[i].res);
        }
        else if(q[i].arg1==NULL)
        {
        	fprintf(filePointer, "%s %s %s %s\n", q[i].op,"NULL",q[i].arg2,q[i].res);
        }
        else if(q[i].arg2==NULL)
        {
        	fprintf(filePointer, "%s %s %s %s\n", q[i].op,q[i].arg1,"NULL",q[i].res);
        }	

        else
        {
       		fprintf(filePointer, "%s %s %s %s\n", q[i].op,q[i].arg1,q[i].arg2,q[i].res);
    	}
    }
  }
    
	else
		printf("\nParsing failed\n");
	
	fclose(yyin);
	fclose(filePointer);
    return 0;
}
         
void yyerror(char *s) {
	printf("line %d : %s %s\n", yylineno, s, yytext );
}
void push_lit(char* yy)
{
	strcpy(st[++top],yy);
}

void push_sign()
{
//printf("%s\n",yytext);
strcpy(st[++top],yytext);
}
void codegen_assign()
{
    /*for(int i=top;i>=0;i--)
    {
    	printf("%s",st[i]);
    }*/
    printf("%s = %s\n",st[top-2],st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    strcpy(q[quadlen].op,"=");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,st[top-2]);
    quadlen++;
    top=-1;
}
void codegen_un()
{
    //printf("hi");
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //printf("temporaries\n");
    temp_add_update_node(temp, "-", "temporary",scope);
     //void add_update_node(int line,char* name,char* value,char* type, int scope)
     //char st_t=st[top][0];
     char* add="1";
     char* st_op;
     //printf("op%s",st[top]);
     if(strcmp(st[top],"++")==0)
     {
     	st_op="+";
     }
     else if(strcmp(st[top],"--")==0)
     {
     	st_op="-";
     }
    printf("%s =  %s %s %s\n",temp,st[top-1],st_op,add);//creating temp=i+1
    q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st_op));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(add));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    //printf("%s",st[top-2]);
    strcpy(q[quadlen].op,st_op);
    strcpy(q[quadlen].arg1,st[top-1]);
    strcpy(q[quadlen].arg2,add);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    printf("%s = %s\n", st[top-1],temp);
     q[quadlen].op = (char*)malloc(sizeof(char)*strlen("="));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    strcpy(q[quadlen].op,"=");
    strcpy(q[quadlen].arg1,temp);
    strcpy(q[quadlen].res,st[top-1]);
    quadlen++;
    top-=2;
    strcpy(st[top],temp);
    temp_i++;
    //printf("%s = %s\n", st[top-1],temp);
    
    
    /*q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    //char* value_1=temporary_update( q[quadlen].arg1,scope);
    //printf("value 1: %s\n",value_1);
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top[0]]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    
    strcpy(q[quadlen].op,st[top-1]);
    strcpy(q[quadlen].arg1,st[top-2]);
    strcpy(q[quadlen].arg2,st[top]);
    strcpy(q[quadlen].res,temp);
    //printf("temporaries");
    quadlen++;
    top-=2;
    strcpy(st[top],temp);

temp_i++;*/
}
void codegen()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //printf("temporaries\n");
    temp_add_update_node(temp, "-", "temporary",scope);
     //void add_update_node(int line,char* name,char* value,char* type, int scope)
    printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    //char* value_1=temporary_update( q[quadlen].arg1,scope);
    //printf("value 1: %s\n",value_1);
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    
    strcpy(q[quadlen].op,st[top-1]);
    strcpy(q[quadlen].arg1,st[top-2]);
    strcpy(q[quadlen].arg2,st[top]);
    strcpy(q[quadlen].res,temp);
    //printf("temporaries");
    quadlen++;
    top-=2;
    strcpy(st[top],temp);

temp_i++;
}
/*void return_code()//for the if clause
{
	//printf("here");
 lnum++;
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 temp_add_update_node(temp, "-", "temporary",scope);
 printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
 strcpy(q[quadlen].op,"not");
 strcpy(q[quadlen].arg1,st[top]);
 strcpy(q[quadlen].res,temp);
 quadlen++;
 printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
 strcpy(q[quadlen].op,"if");
 strcpy(q[quadlen].arg1,temp);
 char x[10];
 sprintf(x,"%d",lnum);
 char l[]="L";
 strcpy(q[quadlen].res,strcat(l,x));
 quadlen++;

 temp_i++;
 label[++ltop]=lnum;
}*/

void if1()//for the if clause
{
	//printf("here");
 lnum++;
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 temp_add_update_node(temp, "-", "temporary",scope);
 printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
 strcpy(q[quadlen].op,"not");
 strcpy(q[quadlen].arg1,st[top]);
 strcpy(q[quadlen].res,temp);
 quadlen++;
 printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
 strcpy(q[quadlen].op,"if");
 strcpy(q[quadlen].arg1,temp);
 char x[10];
 sprintf(x,"%d",lnum);
 char l[]="L";
 strcpy(q[quadlen].res,strcat(l,x));
 //printf("HI");
 label_add_update_node(q[quadlen].res, "-", "label",scope);
 quadlen++;

 temp_i++;
 label[++ltop]=lnum;
    

}
void if2()
{
int y=label[ltop--];
 printf("L%d: \n",y);
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 temp_add_update_node(temp, "-", "temporary",scope);
 printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
 strcpy(q[quadlen].op,"not");
 strcpy(q[quadlen].arg1,st[top]);
 strcpy(q[quadlen].res,temp);
 quadlen++;
 printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
 strcpy(q[quadlen].op,"if");
 strcpy(q[quadlen].arg1,temp);
 char x[10];
 sprintf(x,"%d",lnum);
 char l[]="L";
 strcpy(q[quadlen].res,strcat(l,x));
 //printf("HI");
 label_add_update_node(q[quadlen].res, "-", "label",scope);
 quadlen++;
	
 temp_i++;
 label[++ltop]=lnum;
}

void codegen_assigna()//for  conditions
{
	strcpy(temp,"T");
	sprintf(tmp_i, "%d", temp_i);
	strcat(temp,tmp_i);
	temp_add_update_node(temp, "-", "temporary",scope);
	printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
	//printf("%d\n",strlen(st[top]));
	//if(strlen(st[top])==1)
	if(1)
	{
		//printf("hello");
	
    	char t[20];
		//printf("hello");
		strcpy(t,st[top-1]);
		//strcat(t,st[top-1]);
		q[quadlen].op = (char*)malloc(sizeof(char)*strlen(t));
    	q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    	q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
    	q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    	strcpy(q[quadlen].op,t);
    	strcpy(q[quadlen].arg1,st[top-2]);
    	strcpy(q[quadlen].arg2,st[top]);
    	strcpy(q[quadlen].res,temp);
    	quadlen++;
    
	}
	else
	{
		q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    	q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    	q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    	q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    	strcpy(q[quadlen].op,st[top-2]);
    	strcpy(q[quadlen].arg1,st[top-3]);
    	strcpy(q[quadlen].arg2,st[top-1]);
    	strcpy(q[quadlen].res,temp);
    	quadlen++;
	}
	top-=4;

	temp_i++;
	strcpy(st[++top],temp);
}
void if3()//after if clause body
{
    int y;
    y=label[ltop--];
    printf("L%d: \n",y);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(y+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}
 
void while1()
{

    l_while = lnum;
    printf("L%d: \n",lnum++);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",lnum-1);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    label_add_update_node(q[quadlen].res, "-", "label",scope);
    quadlen++;
}

void while2()
{
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 temp_add_update_node(temp, "-", "temporary",scope);
 printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
     label_add_update_node(q[quadlen].res, "-", "label",scope);
    quadlen++;

 temp_i++;
 }

void while3()
{

printf("goto L%d \n",l_while);
q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(l_while+2));
    strcpy(q[quadlen].op,"goto");
    char x[10];
    sprintf(x,"%d",l_while);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
     label_add_update_node(q[quadlen].res, "-", "label",scope);
    quadlen++;
    printf("L%d: \n",lnum++);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x1[10];
    sprintf(x1,"%d",lnum-1);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,x1));
     label_add_update_node(q[quadlen].res, "-", "label",scope);
    quadlen++;
}

