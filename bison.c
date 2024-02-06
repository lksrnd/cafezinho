/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison.y"


#include <cstdio>
#include <cstring>
#include <algorithm>
#include "semantico.h"
#define ALL(N) N.begin(), N.end()
#define TI(Y) __typeof((Y).begin())
#define FORIT(i, X) for( TI(X) i = X.begin(); i != X.end(); ++i )
#define pb push_back

using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern int lineNum;
extern string lastToken;
extern bool flagError;

void yyerror(const char *str);
int yylex(void);

bool ok = true;
Element *node;


#line 98 "bison.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_BISON_H_INCLUDED
# define YY_YY_BISON_H_INCLUDED
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
    T_INTCONST = 258,
    T_CHARCONST = 259,
    T_STR = 260,
    T_PROGRAMA = 261,
    T_RETORNE = 262,
    T_LEIA = 263,
    T_ESCREVA = 264,
    T_NOVALINHA = 265,
    T_IF = 266,
    T_THEN = 267,
    T_ELSE = 268,
    T_WHILE = 269,
    T_EXECUTE = 270,
    T_CAR = 271,
    T_INT = 272,
    T_ID = 273,
    T_AND = 274,
    T_OR = 275,
    T_GREATER_EQUAL = 276,
    T_LESS_EQUAL = 277,
    T_EQUAL = 278,
    T_DIFF = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "bison.y"

    int intValue;
    char charValue;
    string *stringValue;
    VarType varType;
    Element *node;

#line 183 "bison.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   209

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

#define YYUNDEFTOK  2
#define YYMAXUTOK   279


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,     2,    42,     2,     2,
      29,    30,    40,    38,    28,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    35,    25,
      36,    33,    37,    34,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    26,     2,    27,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    88,   115,   143,   158,   165,   189,   208,
     230,   237,   250,   254,   262,   283,   307,   328,   353,   370,
     385,   411,   440,   447,   450,   455,   463,   470,   480,   486,
     493,   500,   507,   520,   528,   534,   549,   567,   582,   588,
     594,   598,   608,   612,   630,   639,   645,   654,   660,   669,
     678,   684,   693,   702,   711,   720,   726,   735,   744,   750,
     759,   768,   777,   783,   791,   799,   805,   813,   822,   833,
     840,   848,   855,   863,   871,   877,   884
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INTCONST", "T_CHARCONST", "T_STR",
  "T_PROGRAMA", "T_RETORNE", "T_LEIA", "T_ESCREVA", "T_NOVALINHA", "T_IF",
  "T_THEN", "T_ELSE", "T_WHILE", "T_EXECUTE", "T_CAR", "T_INT", "T_ID",
  "T_AND", "T_OR", "\">=\"", "\"<=\"", "\"==\"", "\"!=\"", "';'", "'['",
  "']'", "','", "'('", "')'", "'{'", "'}'", "'='", "'?'", "':'", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "$accept", "Programa",
  "DeclFuncVar", "DeclProg", "DeclVar", "DeclFunc", "ListaParametros",
  "ListaParametrosCont", "Bloco", "ListaDeclVar", "Tipo", "ListaComando",
  "Comando", "Expr", "AssignExpr", "CondExpr", "OrExpr", "AndExpr",
  "EqExpr", "DesigExpr", "AddExpr", "MulExpr", "UnExpr", "LValueExpr",
  "PrimExpr", "ListExpr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    59,    91,    93,    44,    40,
      41,   123,   125,    61,    63,    58,    60,    62,    43,    45,
      42,    47,    37,    33
};
# endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-68)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,  -132,  -132,    44,    59,    52,  -132,    56,  -132,    84,
       6,  -132,    80,    72,     6,    73,     6,    68,    83,    78,
      -9,   104,  -132,   126,     6,  -132,  -132,  -132,    63,   134,
      30,   128,   127,   130,    23,  -132,    63,  -132,    39,    39,
    -132,   129,   123,   129,   132,  -132,  -132,    -7,   142,     8,
     -12,    70,    54,  -132,   131,  -132,    25,   135,   159,  -132,
      56,    93,  -132,   140,   141,   146,   153,   154,  -132,    63,
      63,    63,    11,   136,    10,  -132,  -132,  -132,  -132,  -132,
    -132,    85,    63,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    63,   178,   157,   158,   160,
    -132,   161,     6,  -132,    63,  -132,  -132,  -132,   155,   156,
     162,  -132,  -132,    95,  -132,    63,   142,   163,     8,   -12,
     -12,    70,    70,    70,    70,    54,    54,  -132,  -132,  -132,
    -132,   165,     6,     6,   135,   168,  -132,   167,   181,   175,
     169,    63,  -132,   172,    85,   135,  -132,  -132,  -132,     6,
    -132,   166,   166,  -132,  -132,  -132,   176,  -132,   187,  -132,
       6,   166,  -132,  -132
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,    24,    23,     0,     0,     0,     1,     0,     2,    10,
      22,     7,     0,     0,    13,     0,     6,     0,     0,     0,
      10,     0,    12,     0,     6,     5,    73,    72,     0,     0,
       0,     0,     0,     0,    71,    28,     0,    19,     0,     0,
      38,     0,     0,    26,     0,    39,    40,    42,    45,    47,
      50,    55,    58,    62,     0,    65,    10,    10,     0,     8,
       0,    14,     3,     0,    67,     0,     0,     0,    34,     0,
       0,     0,     0,     0,    71,    63,    64,    25,    18,    27,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,    30,     0,    31,    32,    33,     0,     0,
       0,    69,    75,     0,    74,     0,    44,     0,    46,    48,
      49,    53,    54,    51,    52,    56,    57,    59,    60,    61,
      41,     0,    22,     6,    10,    15,    16,     0,     0,     0,
      70,     0,    68,     0,     0,    10,    20,     4,     9,     0,
      66,     0,     0,    76,    70,    43,     0,    17,    35,    37,
      22,     0,    21,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,   -13,  -132,   -19,  -132,  -132,   -94,     0,   -10,
       2,    86,  -131,   -24,   -67,    60,  -132,   122,   124,    46,
     -25,    51,    24,   177,   110,  -132
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     8,    15,    16,    21,    22,    40,    41,
      18,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,    59,     5,    25,    63,   112,    67,    11,   136,    86,
      87,    62,    73,    81,    26,    27,    23,    58,     5,    13,
     158,   159,     1,     2,    88,    89,     5,    82,   130,    34,
     163,    84,    85,    26,    27,    66,   115,    97,    98,    72,
      36,   111,    26,    27,     6,   108,   109,   110,    34,    71,
      38,    96,    72,    13,    39,   157,   -67,    74,   117,    36,
     100,   121,   122,   123,   124,     7,    26,    27,    36,    38,
       9,    26,    27,    39,   153,    28,    29,    30,    31,    32,
     137,    34,    33,    19,     1,     2,    34,    10,    26,    27,
      20,   143,    36,    35,    92,    93,    94,    36,    24,    10,
      37,    56,    38,    74,    23,    57,    39,    38,    90,    91,
      12,    39,    13,    14,    36,   148,   127,   128,   129,   101,
     147,   102,   146,   141,    38,   142,   156,    77,    39,    79,
     119,   120,    26,    27,    60,     5,    28,    29,    30,    31,
      32,   125,   126,    33,    61,     1,     2,    34,    75,    76,
     162,    23,    64,    68,    35,    78,    69,    80,    36,    70,
      10,    83,    99,    13,    95,   103,   114,   104,    38,    26,
      27,   105,    39,    28,    29,    30,    31,    32,   106,   107,
      33,   131,   132,   133,    34,   138,   139,   134,   135,   140,
     152,    35,   145,   151,   150,    36,   149,    10,   144,   154,
     161,   160,   -66,   116,   155,    38,    65,   118,     0,    39
};

static const yytype_int16 yycheck[] =
{
      10,    20,     0,    16,    28,    72,    30,     7,   102,    21,
      22,    24,    36,    20,     3,     4,    14,    26,    16,    28,
     151,   152,    16,    17,    36,    37,    24,    34,    95,    18,
     161,    23,    24,     3,     4,     5,    26,    56,    57,    29,
      29,    30,     3,     4,     0,    69,    70,    71,    18,    26,
      39,    26,    29,    28,    43,   149,    33,    18,    82,    29,
      60,    86,    87,    88,    89,     6,     3,     4,    29,    39,
      18,     3,     4,    43,   141,     7,     8,     9,    10,    11,
     104,    18,    14,     3,    16,    17,    18,    31,     3,     4,
      18,   115,    29,    25,    40,    41,    42,    29,    25,    31,
      32,    18,    39,    18,   102,    27,    43,    39,    38,    39,
      26,    43,    28,    29,    29,   134,    92,    93,    94,    26,
     133,    28,   132,    28,    39,    30,   145,    41,    43,    43,
      84,    85,     3,     4,    30,   133,     7,     8,     9,    10,
      11,    90,    91,    14,    18,    16,    17,    18,    38,    39,
     160,   149,    18,    25,    25,    32,    29,    25,    29,    29,
      31,    19,     3,    28,    33,    25,    30,    26,    39,     3,
       4,    25,    43,     7,     8,     9,    10,    11,    25,    25,
      14,     3,    25,    25,    18,    30,    30,    27,    27,    27,
      15,    25,    27,    12,    27,    29,    28,    31,    35,    27,
      13,    25,    33,    81,   144,    39,    29,    83,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    17,    45,    46,    54,     0,     6,    47,    18,
      31,    52,    26,    28,    29,    48,    49,    53,    54,     3,
      18,    50,    51,    54,    25,    46,     3,     4,     7,     8,
       9,    10,    11,    14,    18,    25,    29,    32,    39,    43,
      52,    53,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    18,    27,    26,    48,
      30,    18,    46,    57,    18,    67,     5,    57,    25,    29,
      29,    26,    29,    57,    18,    68,    68,    55,    32,    55,
      25,    20,    34,    19,    23,    24,    21,    22,    36,    37,
      38,    39,    40,    41,    42,    33,    26,    48,    48,     3,
      52,    26,    28,    25,    26,    25,    25,    25,    57,    57,
      57,    30,    58,    69,    30,    26,    61,    57,    62,    63,
      63,    64,    64,    64,    64,    65,    65,    66,    66,    66,
      58,     3,    25,    25,    27,    27,    51,    57,    30,    30,
      27,    28,    30,    57,    35,    27,    53,    46,    48,    28,
      27,    12,    15,    58,    27,    59,    48,    51,    56,    56,
      25,    13,    53,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    46,    47,    48,    48,
      48,    49,    50,    50,    51,    51,    51,    51,    52,    52,
      53,    53,    53,    54,    54,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      62,    63,    63,    63,    63,    63,    64,    64,    64,    65,
      65,    65,    65,    66,    66,    66,    67,    67,    68,    68,
      68,    68,    68,    68,    68,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     5,     8,     4,     0,     2,     3,     6,
       0,     4,     1,     0,     2,     4,     4,     6,     4,     3,
       5,     8,     0,     1,     1,     2,     1,     2,     1,     2,
       3,     3,     3,     3,     2,     6,     8,     6,     1,     1,
       1,     3,     1,     5,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     1,     4,     1,     4,     3,
       4,     1,     1,     1,     3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 75 "bison.y"
    {
        //$1 - Statement_List
        //$2 - Statement

        node = new Element();
        node->lineNum = lineNum;
        node->nodeType = BLOCK;
        reverse( ALL((yyvsp[-1].node)->list) );
        node->list.pb((yyvsp[-1].node));
        node->list.pb((yyvsp[0].node));
    }
#line 1483 "bison.c"
    break;

  case 3:
#line 89 "bison.y"
    {
        //$1 - Tipo
        //$2 - T_ID
        //$3 - DeclVar
        //$4 - ';'
        //$5 - DeclFuncVar

        FORIT(i, (yyvsp[-2].node)->list)
            (*i)->varType = (yyvsp[-4].varType);

        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->nodeType = IDENTIFIER;
        aux->name = (yyvsp[-3].stringValue);

        Element *var = new Element();
        var->lineNum = lineNum;
        var->nodeType = VARIABLE;
        var->varType = (yyvsp[-4].varType);
        var->id = aux;

        (yyvsp[-2].node)->list.pb(var);
        (yyval.node) = (yyvsp[0].node);
        (yyval.node)->list.pb((yyvsp[-2].node));

    }
#line 1514 "bison.c"
    break;

  case 4:
#line 116 "bison.y"
    {
        //$1 - Tipo
        //$2 - T_ID
        //$3 - '['
        //$4 - T_INTCONST
        //$5 - ']'
        //$6 - DeclVar
        //$7 - ';'
        //$8 - DeclFuncVar

        FORIT(i, (yyvsp[-2].node)->list)
            (*i)->varType = (yyvsp[-7].varType);

        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->name = (yyvsp[-6].stringValue);

        Element *var = new Element();
        var->varType = (yyvsp[-7].varType);
        var->lineNum = lineNum;
        var->nodeType = ARRAY_VARIABLE;
        var->id = aux;

        (yyvsp[-2].node)->list.pb(var);
        (yyval.node) = (yyvsp[0].node);
        (yyval.node)->list.pb((yyvsp[-2].node));
    }
#line 1546 "bison.c"
    break;

  case 5:
#line 144 "bison.y"
    {
        //$1 - Tipo
        //$2 - T_ID
        //$3 - DeclFund
        //$4 - DeclFuncVar

        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->name = (yyvsp[-2].stringValue);
        (yyvsp[-1].node)->id = aux;
        (yyvsp[-1].node)->varType = (yyvsp[-3].varType);
        (yyvsp[0].node)->list.pb((yyvsp[-1].node));
        (yyval.node) = (yyvsp[0].node);
    }
#line 1565 "bison.c"
    break;

  case 6:
#line 158 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = LIST_VARIABLE;
    }
#line 1575 "bison.c"
    break;

  case 7:
#line 166 "bison.y"
    {
        //$1 - T_PROGRAMA
        //#2 - Bloco

        Element *aux = new Element();
        aux->nodeType = IDENTIFIER;
        aux->name = new string("Programa");
        aux->lineNum = lineNum;

        Element *var = new Element();
        var->lineNum = lineNum;
        var->nodeType = EMPTY;

        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = FUNC_DECLARATION;
        (yyval.node)->id = aux;
        (yyval.node)->list.pb(var);
        (yyval.node)->list.pb((yyvsp[0].node));
        (yyval.node)->varType = VAR_EMPTY;
    }
#line 1601 "bison.c"
    break;

  case 8:
#line 190 "bison.y"
    {
        //$1 - ','
        //$2 - T_ID
        //$3 - DeclVar

        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->nodeType = IDENTIFIER;
        aux->name = (yyvsp[-1].stringValue);

        Element *var = new Element();
        var->lineNum = lineNum;
        var->nodeType = VARIABLE;
        var->id = aux;
        (yyval.node) = (yyvsp[0].node);
        (yyval.node)->list.pb(var);

    }
#line 1624 "bison.c"
    break;

  case 9:
#line 209 "bison.y"
    {
        //$1 - ','
        //$2 - T_ID
        //$3 - '['
        //$4 - T_INTCONST
        //$5 - ']'
        //$6 - DeclVar

        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->nodeType = IDENTIFIER;
        aux->name = (yyvsp[-4].stringValue);

        Element *var = new Element();
        var->lineNum = lineNum;
        var->nodeType = ARRAY_VARIABLE;
        var->id = aux;

        (yyval.node) = (yyvsp[0].node);
        (yyval.node)->list.pb(var);
    }
#line 1650 "bison.c"
    break;

  case 10:
#line 230 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = LIST_VARIABLE;
    }
#line 1660 "bison.c"
    break;

  case 11:
#line 238 "bison.y"
    {
        //$1 - '('
        //$2 - ListaParametros
        //$3 - ')'
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = FUNC_DECLARATION;
        (yyval.node)->list.pb((yyvsp[-2].node));
        (yyval.node)->list.pb((yyvsp[0].node));
    }
#line 1675 "bison.c"
    break;

  case 12:
#line 251 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 1683 "bison.c"
    break;

  case 13:
#line 254 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = EMPTY;
    }
#line 1693 "bison.c"
    break;

  case 14:
#line 263 "bison.y"
    {
        //$1 - Tipo
        //$2 - T_ID

        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->nodeType = IDENTIFIER;
        aux->name = (yyvsp[0].stringValue);

        Element *var = new Element();
        var->lineNum = lineNum;
        var->nodeType = VARIABLE;
        var->varType = (yyvsp[-1].varType);
        var->id = aux;

        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = LIST_VARIABLE;
        (yyval.node)->list.pb(var);
    }
#line 1718 "bison.c"
    break;

  case 15:
#line 284 "bison.y"
    {
        //$1 - Tipo
        //$2 - T_ID
        //$3 - '['
        //$4 - ']'

        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->nodeType = IDENTIFIER;
        aux->name = (yyvsp[-2].stringValue);

        Element *var = new Element();
        var->lineNum = lineNum;
        var->nodeType = ARRAY_VARIABLE;
        var->varType = (yyvsp[-3].varType);
        var->id = aux;

        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = LIST_VARIABLE;
        (yyval.node)->list.pb(var);

    }
#line 1746 "bison.c"
    break;

  case 16:
#line 308 "bison.y"
    {
        //$1 - Tipo
        //$2 - T_ID
        //$3 - ','
        //$4 - ListaParametrosCont

        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->nodeType = IDENTIFIER;
        aux->name = (yyvsp[-2].stringValue);

        Element *var = new Element();
        var->lineNum = lineNum;
        var->nodeType = VARIABLE;
        var->varType = (yyvsp[-3].varType);
        var->id = aux;

        (yyvsp[0].node)->list.push_back(var);
        (yyval.node) = (yyvsp[0].node);
    }
#line 1771 "bison.c"
    break;

  case 17:
#line 329 "bison.y"
    {
        //$1 - Tipo
        //$2 - T_ID
        //$3 - '['
        //$4 - ']'
        //$5 - ','
        //$6 - ListaParametrosCont

        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->nodeType = IDENTIFIER;
        aux->name = (yyvsp[-4].stringValue);

        Element *var = new Element();
        var->lineNum = lineNum;
        var->nodeType = ARRAY_VARIABLE;
        var->varType = (yyvsp[-5].varType);
        var->id = aux;

        (yyvsp[0].node)->list.pb(var);
        (yyval.node) = (yyvsp[0].node);
    }
#line 1798 "bison.c"
    break;

  case 18:
#line 354 "bison.y"
    {
        //$1 - '{'
        //$2 - ListaDeclVar
        //$3 - ListaComando
        //$4 - '}'

        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BLOCK;

        reverse( ALL((yyvsp[-1].node)->list) );
        reverse( ALL((yyvsp[-2].node)->list) );
       
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[-1].node) );
    }
#line 1819 "bison.c"
    break;

  case 19:
#line 371 "bison.y"
    {
        //$1 - '{'
        //$2 - ListaDeclVar
        //$3 - '}'

        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BLOCK;

        reverse( ALL((yyvsp[-1].node)->list) );        
        (yyval.node)->list.pb( (yyvsp[-1].node) );
    }
#line 1836 "bison.c"
    break;

  case 20:
#line 386 "bison.y"
    {
        //$1 - Tipo
        //$2 - T_ID
        //$3 - DeclVar
        //$4 - ';'
        //$5 - ListaDeclVar

        FORIT(i,(yyvsp[-2].node)->list)
            (*i)->varType = (yyvsp[-4].varType);
        
        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->nodeType = IDENTIFIER;
        aux->name = (yyvsp[-3].stringValue);

        Element *var = new Element();
        var->lineNum = lineNum;
        var->nodeType = VARIABLE;
        var->varType = (yyvsp[-4].varType);
        var->id = aux;

        (yyvsp[-2].node)->list.pb(var);
        (yyval.node) = (yyvsp[0].node);
        (yyval.node)->list.pb( (yyvsp[-2].node) );
    }
#line 1866 "bison.c"
    break;

  case 21:
#line 412 "bison.y"
    {
        //$1 - Tipo
        //$2 - T_ID
        //$3 - '['
        //$4 - INTCONST
        //$5 - ']'
        //$6 - DeclVar
        //$7 - ';'
        //$8 - ListaDeclVar

        FORIT(i,(yyvsp[-2].node)->list)
            (*i)->varType = (yyvsp[-7].varType);

        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->nodeType = IDENTIFIER;
        aux->name = (yyvsp[-6].stringValue);

        Element *var = new Element();
        var->lineNum = lineNum;
        var->nodeType = ARRAY_VARIABLE;
        var->varType = (yyvsp[-7].varType);
        var->id = aux;

        (yyvsp[-2].node)->list.pb(var);
        (yyval.node) = (yyvsp[0].node);
        (yyval.node)->list.pb( (yyvsp[-2].node) );
    }
#line 1899 "bison.c"
    break;

  case 22:
#line 440 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = LIST_VARIABLE;
    }
#line 1909 "bison.c"
    break;

  case 23:
#line 447 "bison.y"
         {
        (yyval.varType) = VAR_INTEGER;
    }
#line 1917 "bison.c"
    break;

  case 24:
#line 450 "bison.y"
         {
        (yyval.varType) = VAR_CHAR;
    }
#line 1925 "bison.c"
    break;

  case 25:
#line 456 "bison.y"
    {
        //$1 - ListaDeclVar
        //$2 - ListaComando

        (yyval.node) = (yyvsp[0].node);
        (yyval.node)->list.pb( (yyvsp[-1].node) );
    }
#line 1937 "bison.c"
    break;

  case 26:
#line 464 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = STATEMENT;
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 1948 "bison.c"
    break;

  case 27:
#line 471 "bison.y"
    {
        //$1 - Comando
        //$2 - ListaComando

        (yyval.node) = (yyvsp[0].node);
        (yyval.node)->list.pb( (yyvsp[-1].node) );
    }
#line 1960 "bison.c"
    break;

  case 28:
#line 481 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = STATEMENT;
    }
#line 1970 "bison.c"
    break;

  case 29:
#line 487 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = EXPRESSION;
        (yyval.node)->list.pb( (yyvsp[-1].node) );        
    }
#line 1981 "bison.c"
    break;

  case 30:
#line 494 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = RETURN;
        (yyval.node)->list.pb( (yyvsp[-1].node) );
    }
#line 1992 "bison.c"
    break;

  case 31:
#line 501 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = READ;
        (yyval.node)->list.pb( (yyvsp[-1].node) );
    }
#line 2003 "bison.c"
    break;

  case 32:
#line 508 "bison.y"
    {
        Element *aux = new Element();
        aux->lineNum = lineNum;
        aux->nodeType = STRING;
        aux->name = (yyvsp[-1].stringValue);

        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = WRITE;
        (yyval.node)->varType = VAR_CHAR;
        (yyval.node)->list.pb(aux);
    }
#line 2020 "bison.c"
    break;

  case 33:
#line 521 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = WRITE;
        (yyval.node)->varType = VAR_INTEGER;
        (yyval.node)->list.pb( (yyvsp[-1].node) );
    }
#line 2032 "bison.c"
    break;

  case 34:
#line 529 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = NEW_LINE;
    }
#line 2042 "bison.c"
    break;

  case 35:
#line 535 "bison.y"
    {
        //$1 - T_IF
        //$2 - '('
        //$3 - Expr
        //$4 - ')'
        //$5 - T_THEN
        //$6 - Comando

        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = IF;
        (yyval.node)->list.pb( (yyvsp[-3].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2061 "bison.c"
    break;

  case 36:
#line 550 "bison.y"
    {
        //$1 - T_IF
        //$2 - '('
        //$3 - Expr
        //$4 - ')'
        //$5 - T_THEN
        //$6 - Comando
        //$7 - T_ELSE
        //$8 - Comando

        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = ELSE;
        (yyval.node)->list.pb((yyvsp[-5].node));
        (yyval.node)->list.pb((yyvsp[-2].node));
        (yyval.node)->list.pb((yyvsp[0].node));
    }
#line 2083 "bison.c"
    break;

  case 37:
#line 568 "bison.y"
    {
        //$1 - T_WHILE
        //$2 - '('
        //$3 - Expr
        //$4 - ')'
        //$5 - T_EXECUTE
        //$6 - Comando

        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = WHILE;
        (yyval.node)->list.pb( (yyvsp[-3].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2102 "bison.c"
    break;

  case 38:
#line 583 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2110 "bison.c"
    break;

  case 39:
#line 589 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2118 "bison.c"
    break;

  case 40:
#line 595 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2126 "bison.c"
    break;

  case 41:
#line 599 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = ASSIGN;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2138 "bison.c"
    break;

  case 42:
#line 609 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2146 "bison.c"
    break;

  case 43:
#line 613 "bison.y"
    {
        //$1 - OrExpr
        //$2 - '?'
        //$3 - Expr
        //$4 - ':'
        //$5 - CondExpr

        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = TERNARY;
        (yyval.node)->operatorType = CONDITIONAL;
        (yyval.node)->list.pb( (yyvsp[-4].node) );
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2166 "bison.c"
    break;

  case 44:
#line 631 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = OR;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2179 "bison.c"
    break;

  case 45:
#line 640 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node); 
    }
#line 2187 "bison.c"
    break;

  case 46:
#line 646 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = AND;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2200 "bison.c"
    break;

  case 47:
#line 655 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node); 
    }
#line 2208 "bison.c"
    break;

  case 48:
#line 661 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = EQUAL;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2221 "bison.c"
    break;

  case 49:
#line 670 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = DIFFERENT;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2234 "bison.c"
    break;

  case 50:
#line 679 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2242 "bison.c"
    break;

  case 51:
#line 685 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = MINOR;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2255 "bison.c"
    break;

  case 52:
#line 694 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = MORE;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2268 "bison.c"
    break;

  case 53:
#line 703 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = GREATER_EQUAL;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2281 "bison.c"
    break;

  case 54:
#line 712 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = LESS_EQUAL;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2294 "bison.c"
    break;

  case 55:
#line 721 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2302 "bison.c"
    break;

  case 56:
#line 727 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = SUM;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2315 "bison.c"
    break;

  case 57:
#line 736 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = SUB;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2328 "bison.c"
    break;

  case 58:
#line 745 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2336 "bison.c"
    break;

  case 59:
#line 751 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = MULTIPLY;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2349 "bison.c"
    break;

  case 60:
#line 760 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = DIVIDE;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2362 "bison.c"
    break;

  case 61:
#line 769 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = BINARY;
        (yyval.node)->operatorType = REST;
        (yyval.node)->list.pb( (yyvsp[-2].node) );
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2375 "bison.c"
    break;

  case 62:
#line 778 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2383 "bison.c"
    break;

  case 63:
#line 784 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = UNARY;
        (yyval.node)->operatorType = NEGATIVE;
        (yyval.node)->list.pb( (yyvsp[0].node) ); 
    }
#line 2395 "bison.c"
    break;

  case 64:
#line 792 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = UNARY;
        (yyval.node)->operatorType = NEGATE;
        (yyval.node)->list.pb( (yyvsp[0].node) ); 
    }
#line 2407 "bison.c"
    break;

  case 65:
#line 800 "bison.y"
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2415 "bison.c"
    break;

  case 66:
#line 806 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;;
        (yyval.node)->nodeType = ID_ARRAY;
        (yyval.node)->name = (yyvsp[-3].stringValue);
        (yyval.node)->list.pb( (yyvsp[-1].node) ); 
    }
#line 2427 "bison.c"
    break;

  case 67:
#line 814 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = IDENTIFIER;
        (yyval.node)->name = (yyvsp[0].stringValue);
    }
#line 2438 "bison.c"
    break;

  case 68:
#line 823 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = FUNC_CALL;

        reverse( ALL((yyvsp[-1].node)->list) ); 
        
        (yyval.node)->list.pb( (yyvsp[-1].node) );
        (yyval.node)->name = (yyvsp[-3].stringValue);
    }
#line 2453 "bison.c"
    break;

  case 69:
#line 834 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = FUNC_CALL;
        (yyval.node)->name = (yyvsp[-2].stringValue);
    }
#line 2464 "bison.c"
    break;

  case 70:
#line 841 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = ID_ARRAY;
        (yyval.node)->name = (yyvsp[-3].stringValue);
        (yyval.node)->list.pb( (yyvsp[-1].node) );  
    }
#line 2476 "bison.c"
    break;

  case 71:
#line 849 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = IDENTIFIER;
        (yyval.node)->name = (yyvsp[0].stringValue);
    }
#line 2487 "bison.c"
    break;

  case 72:
#line 856 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = CHAR;
        (yyval.node)->varType = VAR_CHAR;
        (yyval.node)->charValue = (yyvsp[0].charValue);
    }
#line 2499 "bison.c"
    break;

  case 73:
#line 864 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = INTEGER;
        (yyval.node)->varType = VAR_INTEGER;
        (yyval.node)->intValue = (yyvsp[0].intValue);
    }
#line 2511 "bison.c"
    break;

  case 74:
#line 872 "bison.y"
    {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2519 "bison.c"
    break;

  case 75:
#line 878 "bison.y"
    {
        (yyval.node) = new Element();
        (yyval.node)->lineNum = lineNum;
        (yyval.node)->nodeType = EXPRESSION_LIST;
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2530 "bison.c"
    break;

  case 76:
#line 885 "bison.y"
    {
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->list.pb( (yyvsp[0].node) );
    }
#line 2539 "bison.c"
    break;


#line 2543 "bison.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 889 "bison.y"


void yyerror( const char *str )
{
    if ( flagError ) cout << str << "\n";
    else cout << "ERRO SINTATICO EM " << lastToken << " (LINHA " << lineNum << ")\n";
    flagError = false;
    ok = false;
    exit(1);
}


int main(int argc, char *argv[])
{ 
    if ( argc != 2 )
    {
        flagError = true;
        yyerror("PARA EXECUTAR O PROGRAMA, DIGITE: ./cafezinho nome_arquivo_entrada");
        return -1;
    }
    
    FILE *f;
    if ( (f = fopen(argv[1], "r")) == NULL )
    {
        flagError = true;
        yyerror("NAO FOI POSSIVEL ABRIR O ARQUIVO.");
        return -1;
    }
    
    yyin = f;
    do
    {
        yyparse();
    }while ( !feof(yyin) );

    if ( ok == true )
    {
        cout << ( !checkSemantic() ? "NENHUM ERRO ENCONTRADO!\n" : "");
        /*map< string, stack<Element*> >::iterator it;
        for ( it = symbols.begin(); it != symbols.end(); it++ )
        {
            cout << it->first << " " << it->second.top()->varType << endl;
            stack<Element*> st = it->second;
            while ( !st.empty() )
            {
                Element* a = st.top();
                st.pop();
            }
        }*/
    }
    
    return 0;
}
