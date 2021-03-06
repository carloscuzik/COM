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
#line 1 "expr.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include "com.h"
#define YYSTYPE Atributo

#line 73 "expr.tab.c" /* yacc.c:339  */

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
   by #include "expr.tab.h".  */
#ifndef YY_YY_EXPR_TAB_H_INCLUDED
# define YY_YY_EXPR_TAB_H_INCLUDED
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
    TADD = 258,
    TMUL = 259,
    TSUB = 260,
    TDIV = 261,
    TAPAR = 262,
    TFPAR = 263,
    TMENIGUAL = 264,
    TMAIIGUAL = 265,
    TMEN = 266,
    TMAI = 267,
    TDIF = 268,
    TIG = 269,
    TAND = 270,
    TNUM = 271,
    TIF = 272,
    TWHILE = 273,
    TELSE = 274,
    TPRINT = 275,
    TREAD = 276,
    TOR = 277,
    TNOT = 278,
    TACHAVES = 279,
    TIGUAL = 280,
    TFCHAVES = 281,
    TINT = 282,
    TSTRING = 283,
    TVOID = 284,
    TLITERAL = 285,
    TID = 286,
    TVIR = 287,
    TPVIR = 288,
    TRET = 289,
    TCONST = 290,
    TMAISIG = 291,
    TDO = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_EXPR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 162 "expr.tab.c" /* yacc.c:358  */

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
#define YYLAST   211

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    12,    12,    12,    12,    13,    13,    13,    15,    16,
      18,    18,    19,    19,    21,    22,    24,    25,    27,    29,
      30,    32,    33,    35,    37,    38,    40,    41,    43,    45,
      46,    48,    49,    50,    51,    52,    53,    54,    55,    57,
      59,    60,    62,    64,    66,    68,    69,    70,    71,    72,
      74,    75,    77,    78,    80,    81,    83,    84,    86,    87,
      88,    90,    91,    92,    94,    95,    96,    97,    99,   100,
     101,   102,   103,   104,   106,   107,   108,   110,   111,   112,
     114
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TADD", "TMUL", "TSUB", "TDIV", "TAPAR",
  "TFPAR", "TMENIGUAL", "TMAIIGUAL", "TMEN", "TMAI", "TDIF", "TIG", "TAND",
  "TNUM", "TIF", "TWHILE", "TELSE", "TPRINT", "TREAD", "TOR", "TNOT",
  "TACHAVES", "TIGUAL", "TFCHAVES", "TINT", "TSTRING", "TVOID", "TLITERAL",
  "TID", "TVIR", "TPVIR", "TRET", "TCONST", "TMAISIG", "TDO", "$accept",
  "Programa", "$@1", "$@2", "$@3", "$@4", "ListaFuncoes", "Funcao", "$@5",
  "$@6", "TipoRetorno", "DeclParametros", "Parametro", "BlocoPrincipal",
  "Declaracoes", "Declaracao", "Tipo", "ListaId", "BLoco", "ListaCmd",
  "Comando", "Retorno", "CmdSe", "CmdEnquanto", "Y", "CmdDo", "CmdAtrib",
  "CmdEscrita", "M", "CmdLeitura", "ChamadaFuncao", "ListaParametros",
  "Expr", "Termo", "Fator", "ExpressaoRelacional", "ExpressaoLogica",
  "ExpressaoLogica2", "K", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -44

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,     8,   164,  -110,  -110,  -110,  -110,  -110,   164,  -110,
     -19,  -110,     6,     6,  -110,    35,    91,  -110,  -110,    50,
      52,  -110,  -110,    61,     0,    86,  -110,    91,  -110,    -5,
     106,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,    15,  -110,    39,    21,    73,    78,    83,    32,    34,
      86,    86,  -110,  -110,  -110,    10,    18,  -110,    92,  -110,
     113,  -110,   -28,  -110,  -110,     6,  -110,    76,  -110,    21,
      21,   185,  -110,    98,  -110,    21,    65,   121,   118,    19,
      94,   125,   156,    13,    16,    68,    86,    86,  -110,    86,
      86,   135,   155,  -110,   139,  -110,  -110,     6,  -110,   173,
     149,  -110,    86,    86,    86,    86,    86,    86,  -110,  -110,
    -110,   152,   169,   102,   146,  -110,   147,    86,  -110,    30,
    -110,  -110,  -110,    18,    18,  -110,  -110,   128,   182,  -110,
    -110,  -110,    94,    94,    94,    94,    94,    94,    92,    86,
      86,  -110,   167,   168,  -110,  -110,    94,   170,    47,  -110,
      21,   183,  -110,  -110,    92,  -110,  -110,  -110,   171,   153,
     186,  -110,  -110,   174,  -110,  -110,    92,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     6,     1,    24,    25,    15,     3,     9,
       0,    14,     0,     0,     8,     0,     0,     7,     4,     0,
       0,    80,    52,     0,     0,     0,    80,     0,    22,     0,
       0,    30,    38,    31,    32,    33,    34,    35,    36,    37,
      12,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    66,    67,     0,    60,    63,     0,    21,
       0,    27,     0,    20,    29,     0,    10,     0,    18,     0,
       0,     0,    79,     0,    76,     0,     0,     0,     0,     0,
      57,     0,    66,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,    19,     0,    23,    13,     0,    16,     0,
       0,    77,     0,     0,     0,     0,     0,     0,    80,    80,
      80,     0,     0,     0,     0,    55,     0,     0,    47,     0,
      45,    46,    65,    58,    59,    61,    62,     0,     0,    26,
      11,    78,    68,    69,    71,    70,    73,    72,     0,     0,
       0,    80,     0,     0,    53,    54,    56,     0,     0,    28,
       0,    40,    74,    75,     0,    51,    50,    49,     0,     0,
       0,    42,    48,     0,    80,    44,     0,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,  -110,  -110,  -110,   198,  -110,  -110,
    -110,  -110,   141,    -3,  -110,   184,   -13,    90,  -109,   -25,
     -29,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,   -16,   -12,    46,     2,   -58,   140,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    13,     3,    12,     8,     9,    97,    65,
      10,    41,    42,    17,    27,    28,    11,    62,    92,    30,
      31,    32,    33,    34,   160,    35,    36,    37,    46,    38,
      39,    79,    71,    56,    57,    72,    73,    74,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    64,    60,    29,    94,    95,    43,    48,     4,    55,
      18,   100,    15,    86,    29,    87,    86,   111,    87,    86,
      -5,    87,    89,    66,    90,    49,    61,   116,    69,   151,
      16,    64,    80,    83,    84,    85,    50,    52,   147,    51,
      78,    51,    19,    88,    70,   161,   120,    67,    52,   121,
      52,   117,    53,    99,    43,   158,    54,   167,    40,    44,
     113,    61,    96,    53,    81,    82,   127,    54,    47,    54,
      68,    86,    51,    87,   123,   124,   122,     5,     6,    94,
      75,    52,   138,   139,   140,    76,   132,   133,   134,   135,
     136,   137,   159,    51,   130,   112,    53,    86,    64,    87,
      54,   146,    52,     5,     6,    86,   108,    87,    20,    21,
     143,    22,    23,   109,    77,   154,    91,    53,     5,     6,
     110,    54,    24,    20,    21,    25,    22,    23,    26,   114,
      20,    21,    63,    22,    23,   125,   126,    24,   166,    93,
      25,   152,   153,    26,    24,    20,    21,    25,    22,    23,
      26,   115,    20,    21,   149,    22,    23,   131,   118,    24,
     141,   163,    25,   119,   109,    26,    24,   109,   109,    25,
     129,   110,    26,   128,   110,   110,    86,   142,    87,   144,
     145,   122,   102,   103,   104,   105,   106,   107,    86,   150,
      87,     5,     6,     7,   102,   103,   104,   105,   106,   107,
     155,   156,   -43,   157,   162,   164,    14,   165,    98,   148,
     101,    59
};

static const yytype_uint8 yycheck[] =
{
      26,    30,    27,    16,    32,    33,    19,     7,     0,    25,
      13,    69,    31,     3,    27,     5,     3,    75,     5,     3,
      24,     5,     4,     8,     6,    25,    31,     8,     7,   138,
      24,    60,    48,    49,    50,    51,    36,    16,     8,     7,
       8,     7,     7,    33,    23,   154,    33,    32,    16,    33,
      16,    32,    31,    69,    67,     8,    35,   166,     8,     7,
      76,    31,    65,    31,    30,    31,    91,    35,     7,    35,
      31,     3,     7,     5,    86,    87,     8,    27,    28,    32,
       7,    16,   108,   109,   110,     7,   102,   103,   104,   105,
     106,   107,   150,     7,    97,    30,    31,     3,   127,     5,
      35,   117,    16,    27,    28,     3,     8,     5,    17,    18,
       8,    20,    21,    15,    31,   141,    24,    31,    27,    28,
      22,    35,    31,    17,    18,    34,    20,    21,    37,     8,
      17,    18,    26,    20,    21,    89,    90,    31,   164,    26,
      34,   139,   140,    37,    31,    17,    18,    34,    20,    21,
      37,    33,    17,    18,    26,    20,    21,     8,    33,    31,
       8,     8,    34,     7,    15,    37,    31,    15,    15,    34,
      31,    22,    37,    18,    22,    22,     3,     8,     5,    33,
      33,     8,     9,    10,    11,    12,    13,    14,     3,     7,
       5,    27,    28,    29,     9,    10,    11,    12,    13,    14,
      33,    33,    19,    33,    33,    19,     8,    33,    67,   119,
      70,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    40,    42,     0,    27,    28,    29,    44,    45,
      48,    54,    43,    41,    45,    31,    24,    51,    51,     7,
      17,    18,    20,    21,    31,    34,    37,    52,    53,    54,
      57,    58,    59,    60,    61,    63,    64,    65,    67,    68,
       8,    49,    50,    54,     7,    76,    66,     7,     7,    25,
      36,     7,    16,    31,    35,    70,    71,    72,    76,    53,
      57,    31,    55,    26,    58,    47,     8,    32,    31,     7,
      23,    70,    73,    74,    75,     7,     7,    31,     8,    69,
      70,    30,    31,    70,    70,    70,     3,     5,    33,     4,
       6,    24,    56,    26,    32,    33,    51,    46,    50,    70,
      74,    75,     9,    10,    11,    12,    13,    14,     8,    15,
      22,    74,    30,    70,     8,    33,     8,    32,    33,     7,
      33,    33,     8,    71,    71,    72,    72,    57,    18,    31,
      51,     8,    70,    70,    70,    70,    70,    70,    76,    76,
      76,     8,     8,     8,    33,    33,    70,     8,    55,    26,
       7,    56,    73,    73,    76,    33,    33,    33,     8,    74,
      62,    56,    33,     8,    19,    33,    76,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    40,    41,    39,    42,    43,    39,    44,    44,
      46,    45,    47,    45,    48,    48,    49,    49,    50,    51,
      51,    52,    52,    53,    54,    54,    55,    55,    56,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      60,    60,    61,    62,    63,    64,    64,    64,    64,    64,
      65,    65,    66,    67,    68,    68,    69,    69,    70,    70,
      70,    71,    71,    71,    72,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    74,    74,    74,    75,    75,    75,
      76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     4,     0,     0,     3,     2,     1,
       0,     7,     0,     6,     1,     1,     3,     1,     2,     4,
       3,     2,     1,     3,     1,     1,     3,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       6,    10,     7,     0,     8,     4,     4,     4,     7,     6,
       6,     6,     0,     5,     5,     4,     3,     1,     3,     3,
       1,     3,     3,     1,     1,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     4,     4,     1,     2,     3,     1,
       0
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
        case 2:
#line 12 "expr.y" /* yacc.c:1646  */
    {gera_cabecalho();}
#line 1364 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 12 "expr.y" /* yacc.c:1646  */
    {gera_main();}
#line 1370 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 12 "expr.y" /* yacc.c:1646  */
    {fecha_funcao();}
#line 1376 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 13 "expr.y" /* yacc.c:1646  */
    {gera_cabecalho();}
#line 1382 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 13 "expr.y" /* yacc.c:1646  */
    {gera_main();}
#line 1388 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 13 "expr.y" /* yacc.c:1646  */
    {fecha_funcao();}
#line 1394 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 15 "expr.y" /* yacc.c:1646  */
    {insere_na_lista_de_funcoes((yyvsp[0]).id,(yyvsp[0]).tipo,(yyvsp[0]).lista_de_par);}
#line 1400 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 16 "expr.y" /* yacc.c:1646  */
    {insere_na_lista_de_funcoes((yyvsp[0]).id,(yyvsp[0]).tipo,(yyvsp[0]).lista_de_par);}
#line 1406 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 18 "expr.y" /* yacc.c:1646  */
    {gera_cabecalho_func((yyvsp[-4]).tipo,(yyvsp[-3]).id,(yyvsp[-1]).lista_de_par);}
#line 1412 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 18 "expr.y" /* yacc.c:1646  */
    {zera_parametros(); fecha_funcao(); (yyval).lista_de_par = (yyvsp[-3]).lista_de_par; strcpy((yyval).id,(yyvsp[-5]).id);}
#line 1418 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 19 "expr.y" /* yacc.c:1646  */
    {gera_cabecalho_func((yyvsp[-3]).tipo,(yyvsp[-2]).id,NULL);}
#line 1424 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 19 "expr.y" /* yacc.c:1646  */
    {zera_parametros(); fecha_funcao();}
#line 1430 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 21 "expr.y" /* yacc.c:1646  */
    {(yyval).tipo = (yyvsp[0]).tipo;}
#line 1436 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 22 "expr.y" /* yacc.c:1646  */
    {(yyval).tipo = 2;}
#line 1442 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 24 "expr.y" /* yacc.c:1646  */
    {(yyval).lista_de_par = insere_lista_parametros((yyvsp[-2]).lista_de_par,(yyvsp[0]).tipo);}
#line 1448 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 25 "expr.y" /* yacc.c:1646  */
    {(yyval).lista_de_par = cria_lista_parametros((yyvsp[0]).tipo);}
#line 1454 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 27 "expr.y" /* yacc.c:1646  */
    {insere_na_tabela_de_simbolos((yyvsp[-1]).tipo,(yyvsp[0]).id);}
#line 1460 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 29 "expr.y" /* yacc.c:1646  */
    {imprime_Tabela();}
#line 1466 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 30 "expr.y" /* yacc.c:1646  */
    {imprime_Tabela();}
#line 1472 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 35 "expr.y" /* yacc.c:1646  */
    {insereNaTabela((yyvsp[-1]).listaid,(yyvsp[-2]).tipo);}
#line 1478 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 37 "expr.y" /* yacc.c:1646  */
    {(yyval).tipo = 0;}
#line 1484 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 38 "expr.y" /* yacc.c:1646  */
    {(yyval).tipo = 1;}
#line 1490 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 41 "expr.y" /* yacc.c:1646  */
    {(yyval).listaid = inicializa_lista_INT((yyvsp[0]).id);}
#line 1496 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 59 "expr.y" /* yacc.c:1646  */
    {corrigir((yyvsp[-3]).listav,(yyvsp[-1]).label); corrigir((yyvsp[-3]).listaf, novolabel());}
#line 1502 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 60 "expr.y" /* yacc.c:1646  */
    {corrigir((yyvsp[-7]).listav, (yyvsp[-5]).label); corrigir((yyvsp[-7]).listaf, (yyvsp[-1]).label); corrigir((yyvsp[-3]).listav, novolabel());}
#line 1508 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 62 "expr.y" /* yacc.c:1646  */
    {corrigir((yyvsp[-3]).listav, (yyvsp[-1]).label);gerar_goto_l((yyvsp[-5]).label);corrigir((yyvsp[-3]).listaf,novolabel());}
#line 1514 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 64 "expr.y" /* yacc.c:1646  */
    {(yyval).listav = cria_lista(ultimo()); gerar_goto();}
#line 1520 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 66 "expr.y" /* yacc.c:1646  */
    {corrigir((yyvsp[-2]).listav, (yyvsp[-6]).label);corrigir((yyvsp[-2]).listaf,novolabel());}
#line 1526 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 68 "expr.y" /* yacc.c:1646  */
    {geraStore(posTabSim((yyvsp[-3]).id));}
#line 1532 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 69 "expr.y" /* yacc.c:1646  */
    {gerarLoad(posTabSim((yyvsp[-3]).id));geraAdd();geraStore(posTabSim((yyvsp[-3]).id));}
#line 1538 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 70 "expr.y" /* yacc.c:1646  */
    {gera_acost((yyvsp[-1]).texto);geraaStore(posTabSim((yyvsp[-3]).id));}
#line 1544 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 71 "expr.y" /* yacc.c:1646  */
    {geraStore(posTabSim((yyvsp[-6]).id));}
#line 1550 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 72 "expr.y" /* yacc.c:1646  */
    {geraStore(posTabSim((yyvsp[-5]).id));}
#line 1556 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 74 "expr.y" /* yacc.c:1646  */
    {geraInvoke((yyvsp[-2]).tipo);}
#line 1562 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 75 "expr.y" /* yacc.c:1646  */
    {geraldc((yyvsp[-2]).texto);}
#line 1568 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 77 "expr.y" /* yacc.c:1646  */
    {gera_ini_print();}
#line 1574 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 80 "expr.y" /* yacc.c:1646  */
    {chama_funcao((yyvsp[-4]).id,(yyvsp[-2]).lista_de_par);}
#line 1580 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 81 "expr.y" /* yacc.c:1646  */
    {chama_funcao((yyvsp[-3]).id,NULL);}
#line 1586 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 83 "expr.y" /* yacc.c:1646  */
    {(yyval).lista_de_par = insere_lista_parametros((yyvsp[-2]).lista_de_par,(yyvsp[0]).tipo);}
#line 1592 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 84 "expr.y" /* yacc.c:1646  */
    {(yyval).lista_de_par = cria_lista_parametros((yyvsp[0]).tipo);}
#line 1598 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 86 "expr.y" /* yacc.c:1646  */
    {geraAdd();}
#line 1604 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 87 "expr.y" /* yacc.c:1646  */
    {geraSub();}
#line 1610 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 88 "expr.y" /* yacc.c:1646  */
    {(yyval).tipo = (yyvsp[0]).tipo;}
#line 1616 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 90 "expr.y" /* yacc.c:1646  */
    {geraMul();}
#line 1622 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 91 "expr.y" /* yacc.c:1646  */
    {geraDiv();}
#line 1628 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 92 "expr.y" /* yacc.c:1646  */
    {(yyval).tipo = (yyvsp[0]).tipo;}
#line 1634 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 96 "expr.y" /* yacc.c:1646  */
    {(yyval).tipo = tipo_sim((yyvsp[0]).id); if((yyval).tipo==0){gerarLoad(posTabSim((yyvsp[0]).id));}else{geraraLoad(posTabSim((yyvsp[0]).id));}}
#line 1640 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 97 "expr.y" /* yacc.c:1646  */
    {gerarConst((yyvsp[0]).cconst);}
#line 1646 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 99 "expr.y" /* yacc.c:1646  */
    {(yyval).listav = cria_lista(ultimo()); (yyval).listaf = cria_lista(ultimo()+1); if_icmp(le); gerar_goto();}
#line 1652 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 100 "expr.y" /* yacc.c:1646  */
    {(yyval).listav = cria_lista(ultimo()); (yyval).listaf = cria_lista(ultimo()+1); if_icmp(ge); gerar_goto();}
#line 1658 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 101 "expr.y" /* yacc.c:1646  */
    {(yyval).listav = cria_lista(ultimo()); (yyval).listaf = cria_lista(ultimo()+1); if_icmp(gt); gerar_goto();}
#line 1664 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 102 "expr.y" /* yacc.c:1646  */
    {(yyval).listav = cria_lista(ultimo()); (yyval).listaf = cria_lista(ultimo()+1); if_icmp(lt); gerar_goto();}
#line 1670 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 103 "expr.y" /* yacc.c:1646  */
    {(yyval).listav = cria_lista(ultimo()); (yyval).listaf = cria_lista(ultimo()+1); if_icmp(eq); gerar_goto();}
#line 1676 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 104 "expr.y" /* yacc.c:1646  */
    {(yyval).listav = cria_lista(ultimo()); (yyval).listaf = cria_lista(ultimo()+1); if_icmp(ne); gerar_goto();}
#line 1682 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 106 "expr.y" /* yacc.c:1646  */
    {corrigir((yyvsp[-3]).listav,(yyvsp[-1]).label); (yyval).listaf = merge((yyvsp[-3]).listaf, (yyvsp[0]).listaf); (yyval).listav = (yyvsp[0]).listav;}
#line 1688 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 107 "expr.y" /* yacc.c:1646  */
    {corrigir((yyvsp[-3]).listaf,(yyvsp[-1]).label); (yyval).listav = merge((yyvsp[-3]).listav, (yyvsp[0]).listav); (yyval).listaf = (yyvsp[0]).listaf;}
#line 1694 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 108 "expr.y" /* yacc.c:1646  */
    {(yyval).listav = (yyvsp[0]).listav; (yyval).listaf = (yyvsp[0]).listaf;}
#line 1700 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 110 "expr.y" /* yacc.c:1646  */
    {(yyval).listav = (yyvsp[0]).listaf; (yyval).listaf = (yyvsp[0]).listav;}
#line 1706 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 111 "expr.y" /* yacc.c:1646  */
    {(yyval).listav = (yyvsp[-1]).listav; (yyval).listaf = (yyvsp[-1]).listaf;}
#line 1712 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 112 "expr.y" /* yacc.c:1646  */
    {(yyval).listav = (yyvsp[0]).listav; (yyval).listaf = (yyvsp[0]).listaf;}
#line 1718 "expr.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 114 "expr.y" /* yacc.c:1646  */
    {(yyval).label = novolabel();}
#line 1724 "expr.tab.c" /* yacc.c:1646  */
    break;


#line 1728 "expr.tab.c" /* yacc.c:1646  */
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
#line 117 "expr.y" /* yacc.c:1906  */

#include "lex.yy.c"

int yyerror (char *str){
	printf("%s - antes %s\n", str, yytext);
	return 0;
} 		 

int yywrap(){
	return 1;
}
