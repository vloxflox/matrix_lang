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
#line 1 "analisador_ascendente.y"

#include <stdio.h>
#include <ctype.h>
#include "lex.yy.c"

int yylex(void);
void yyerror(char *);

#line 79 "analisador_ascendente.tab.c"

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
#ifndef YY_YY_ANALISADOR_ASCENDENTE_TAB_H_INCLUDED
# define YY_YY_ANALISADOR_ASCENDENTE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLO = 259,
    CHA = 260,
    BOO = 261,
    STR = 262,
    IF = 263,
    ELS = 264,
    FOR = 265,
    DO = 266,
    WHI = 267,
    RET = 268,
    STU = 269,
    FUN = 270,
    PRI = 271,
    REA = 272,
    LOA = 273,
    ZER = 274,
    IDE = 275,
    INV = 276,
    TRA = 277,
    EQU = 278,
    ID = 279,
    DIO = 280,
    LEQ = 281,
    LEO = 282,
    GEQ = 283,
    GRE = 284,
    APL = 285,
    AMI = 286,
    ADI = 287,
    AMU = 288,
    UAD = 289,
    USU = 290,
    OR = 291,
    VAR = 292
  };
#endif
/* Tokens.  */
#define INT 258
#define FLO 259
#define CHA 260
#define BOO 261
#define STR 262
#define IF 263
#define ELS 264
#define FOR 265
#define DO 266
#define WHI 267
#define RET 268
#define STU 269
#define FUN 270
#define PRI 271
#define REA 272
#define LOA 273
#define ZER 274
#define IDE 275
#define INV 276
#define TRA 277
#define EQU 278
#define ID 279
#define DIO 280
#define LEQ 281
#define LEO 282
#define GEQ 283
#define GRE 284
#define APL 285
#define AMI 286
#define ADI 287
#define AMU 288
#define UAD 289
#define USU 290
#define OR 291
#define VAR 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ANALISADOR_ASCENDENTE_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   506

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

#define YYUNDEFTOK  2
#define YYMAXUTOK   292


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
       2,     2,     2,    50,     2,     2,     2,    49,    46,     2,
      40,    41,    47,    44,    53,    45,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    52,
       2,    54,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
       0,    18,    18,    19,    22,    23,    24,    27,    27,    27,
      27,    30,    30,    31,    34,    34,    34,    37,    37,    37,
      38,    41,    41,    41,    41,    41,    44,    45,    48,    49,
      49,    52,    52,    55,    56,    59,    60,    61,    62,    63,
      64,    65,    68,    69,    72,    72,    73,    73,    74,    77,
      77,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      91,    94,    94,    96,    97,    97,   100,   101,   104,   104,
     104,   104,   107,   107,   107,   107,   107,   107,   110,   111,
     114,   114,   114,   114,   117,   117,   118,   118,   119,   122,
     122,   122,   122,   125,   125,   125,   128,   129,   132,   133,
     133,   135,   135,   135,   138,   138,   138,   138,   141,   142,
     143,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   156,   157,   158,   159,   160,   160,   161,   161,   162,
     162,   163,   163,   164,   164,   165,   165,   166,   166,   167,
     167,   168,   168,   169,   169,   170,   170,   171,   171,   172,
     172
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLO", "CHA", "BOO", "STR", "IF",
  "ELS", "FOR", "DO", "WHI", "RET", "STU", "FUN", "PRI", "REA", "LOA",
  "ZER", "IDE", "INV", "TRA", "EQU", "ID", "DIO", "LEQ", "LEO", "GEQ",
  "GRE", "APL", "AMI", "ADI", "AMU", "UAD", "USU", "OR", "VAR", "'{'",
  "'}'", "'('", "')'", "'['", "']'", "'+'", "'-'", "'&'", "'*'", "'/'",
  "'%'", "'!'", "'^'", "';'", "','", "'='", "$accept", "Program",
  "Definition", "Struct", "$@1", "$@2", "$@3", "Instantiations", "$@4",
  "Instantiation", "$@5", "$@6", "Matrix", "$@7", "$@8", "Function", "$@9",
  "$@10", "$@11", "$@12", "Function1", "Function_argument", "$@13",
  "Block", "$@14", "Statements", "Statement", "Assign", "OptAssign",
  "$@15", "$@16", "Assignment", "$@17", "Assignment1", "$@18", "$@19",
  "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "Matrix_line",
  "$@27", "Elements", "$@28", "Element", "Return_expr", "$@29", "$@30",
  "$@31", "For_block", "$@32", "$@33", "$@34", "$@35", "$@36",
  "For_block1", "If_block", "$@37", "$@38", "$@39", "Else_Block", "$@40",
  "$@41", "While_block", "$@42", "$@43", "$@44", "Function_call", "$@45",
  "$@46", "Function_call1", "Arguments", "$@47", "Print", "$@48", "$@49",
  "Read", "$@50", "$@51", "$@52", "Expression", "$@53", "$@54", "$@55",
  "$@56", "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64",
  "$@65", "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73",
  "$@74", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   123,   125,
      40,    41,    91,    93,    43,    45,    38,    42,    47,    37,
      33,    94,    59,    44,    61
};
# endif

#define YYPACT_NINF (-189)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-104)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,  -189,  -189,  -189,     4,    15,  -189,   -47,  -189,   -16,
     -15,    -7,  -189,  -189,  -189,  -189,  -189,  -189,    10,    11,
       8,  -189,  -189,  -189,  -189,    19,    39,    89,    26,    14,
      36,    27,  -189,  -189,  -189,  -189,  -189,  -189,  -189,    50,
      51,    57,    59,   -22,  -189,  -189,  -189,  -189,  -189,  -189,
     156,  -189,  -189,    54,  -189,    64,  -189,  -189,  -189,  -189,
    -189,    75,    89,    89,    89,    89,    89,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,    19,    39,    29,  -189,    89,    89,    89,    89,    89,
    -189,   185,     6,     6,    67,     6,    89,    89,    89,    89,
      89,    89,     8,    89,    89,    89,    89,    89,    89,    89,
    -189,  -189,  -189,  -189,   112,   212,   239,   266,   293,   320,
      89,  -189,     6,     6,     6,     6,     6,     6,  -189,     6,
       6,     6,    67,    67,    67,    67,   104,  -189,  -189,  -189,
    -189,  -189,  -189,    86,  -189,    -4,  -189,  -189,  -189,  -189,
    -189,    90,    78,    96,   104,    84,  -189,  -189,  -189,  -189,
    -189,    85,    88,   101,  -189,  -189,   103,   105,   106,   107,
     108,     8,   114,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
      89,  -189,  -189,  -189,  -189,  -189,   -20,  -189,    89,   115,
    -189,    89,   -21,    89,    89,    89,   116,   117,  -189,   118,
    -189,  -189,   121,   455,  -189,  -189,   347,  -189,  -189,    98,
     374,   401,   428,    89,   115,    89,   115,    89,    89,   115,
      89,   115,    81,  -189,  -189,  -189,  -189,  -189,   455,  -189,
     455,  -189,   455,   455,  -189,   455,  -189,  -189,   122,   123,
     455,    29,    89,    29,   128,  -189,  -189,   160,   126,  -189,
    -189,    81,   149,  -189,  -189,  -189,   181,    29,   170,  -189,
    -189,   155,  -189,    29,  -189
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     7,    21,    14,     0,     3,     5,     0,     6,     0,
       0,     0,     1,     2,     4,     8,    22,    15,     0,     0,
      20,     9,    23,    17,    16,    13,    27,     0,     0,     0,
      28,     0,    26,   118,   119,   120,   142,   121,   114,     0,
       0,     0,     0,   144,   139,   135,   133,   149,   143,   141,
       0,    10,    11,     0,    24,     0,   167,   161,   163,   165,
     169,     0,     0,     0,     0,     0,     0,   151,   153,   155,
     157,   159,   145,    18,   122,   124,   147,   126,   128,   137,
     130,    13,     0,     0,   115,     0,     0,     0,     0,     0,
     104,     0,   136,   134,   150,   132,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
      12,    30,    31,    25,     0,     0,     0,     0,     0,     0,
     107,   140,   152,   154,   156,   158,   160,   146,    19,   123,
     125,   148,   127,   129,   138,   131,    34,   116,   168,   162,
     164,   166,   170,     0,   106,   108,    90,    82,    99,    78,
     111,    49,    48,     0,    34,     0,    42,    36,    37,    38,
      39,     0,     0,     0,   105,   109,     0,     0,     0,     0,
       0,    20,    44,    43,    32,    33,    35,    40,    41,   117,
       0,    91,    83,   100,    79,   112,     0,    50,     0,     0,
     110,     0,    89,     0,     0,     0,    53,    55,    57,    59,
      69,    70,    51,    45,    71,    47,     0,    49,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    84,   101,    80,   113,    54,    64,
      56,    66,    58,    60,    68,    52,    62,    77,     0,    73,
      76,     0,     0,     0,     0,    72,    74,    98,     0,   102,
      81,     0,    94,    93,    85,    75,     0,     0,     0,    95,
      97,     0,    86,     0,    87
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,   192,  -189,  -189,  -189,  -189,  -189,   125,  -189,     2,
    -189,  -189,   -96,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,   127,  -189,  -119,  -189,    44,  -189,    24,  -189,  -189,
    -189,   -41,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -188,  -189,   -33,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,   -37,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
     -90,  -189,  -189,  -189,    40,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,   -27,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,  -189
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     9,    18,    25,    28,    81,   152,
      11,    20,    24,    27,   102,     8,    10,    19,    26,    83,
      31,    32,    53,   113,   136,   153,   154,   155,   173,   188,
     189,   156,   171,   187,   220,   213,   215,   217,   218,   221,
     214,   216,   219,   237,   222,   238,   251,   239,   157,   169,
     194,   244,   158,   167,   192,   242,   258,   263,   209,   159,
     166,   191,   241,   253,   256,   257,   160,   168,   193,   243,
      48,    61,   120,   143,   144,   180,   162,   170,   195,    49,
      55,   114,   163,   145,   103,   104,   106,   107,   109,    64,
      63,   108,    62,   101,   105,    65,    96,    97,    98,    99,
     100,    86,    87,    88,    85,    89
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,   205,     7,   207,    12,    14,   128,     7,    15,    16,
     196,   197,   198,   199,   200,   201,     3,    17,  -103,    66,
      60,    67,    68,    69,    70,    71,   229,    29,   231,     1,
       2,   234,    72,   236,   202,    91,    92,    93,    94,    95,
      74,    75,    76,    77,    78,    79,   161,    80,    21,   165,
      23,    22,     3,    77,    78,    79,     3,    80,   115,   116,
     117,   118,   119,    30,   161,    51,    52,   112,    54,   122,
     123,   124,   125,   126,   127,   186,   129,   130,   131,   132,
     133,   134,   135,    29,    33,    34,    35,    36,    37,   -29,
      56,    57,    33,    34,    35,    36,    37,    58,    38,    59,
      39,    40,    41,    42,    84,    43,    38,    82,    39,    40,
      41,    42,   146,    43,   147,    90,   148,   149,    80,   137,
     150,    44,   247,   204,   249,    45,    46,   164,   151,    44,
    -103,    47,   172,    45,    46,   174,   176,   177,   260,    47,
     178,     3,   179,   181,   264,   182,   183,   184,   185,    66,
     224,    67,    68,    69,    70,    71,   -46,   204,   -63,   -65,
     -67,   203,    72,   -61,   206,   245,   210,   211,   212,   252,
      74,    75,    76,    77,    78,    79,   246,    80,   254,    66,
     250,    67,    68,    69,    70,    71,   228,   -96,   230,   146,
     232,   233,    72,   235,   207,   240,   262,    13,   175,    73,
      74,    75,    76,    77,    78,    79,   110,    80,    66,   111,
      67,    68,    69,    70,    71,   248,   208,   261,   255,   259,
     190,    72,     0,     0,   240,     0,   121,     0,     0,    74,
      75,    76,    77,    78,    79,    66,    80,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,   138,     0,     0,    74,    75,    76,    77,
      78,    79,    66,    80,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
     139,     0,     0,    74,    75,    76,    77,    78,    79,    66,
      80,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,    72,     0,     0,     0,     0,   140,     0,     0,
      74,    75,    76,    77,    78,    79,    66,    80,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,   141,     0,     0,    74,    75,    76,
      77,    78,    79,    66,    80,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,     0,    72,     0,     0,     0,
       0,     0,     0,   142,    74,    75,    76,    77,    78,    79,
      66,    80,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,   223,     0,
       0,    74,    75,    76,    77,    78,    79,    66,    80,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
      72,     0,     0,     0,     0,   225,     0,     0,    74,    75,
      76,    77,    78,    79,    66,    80,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,   226,     0,     0,    74,    75,    76,    77,    78,
      79,    66,    80,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,   227,
       0,     0,    74,    75,    76,    77,    78,    79,    66,    80,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,     0,    80
};

static const yytype_int16 yycheck[] =
{
      27,   189,     0,    24,     0,    52,   102,     5,    24,    24,
      30,    31,    32,    33,    34,    35,    37,    24,    40,    23,
      42,    25,    26,    27,    28,    29,   214,    25,   216,    14,
      15,   219,    36,   221,    54,    62,    63,    64,    65,    66,
      44,    45,    46,    47,    48,    49,   136,    51,    38,    53,
      42,    40,    37,    47,    48,    49,    37,    51,    85,    86,
      87,    88,    89,    24,   154,    39,    52,    38,    41,    96,
      97,    98,    99,   100,   101,   171,   103,   104,   105,   106,
     107,   108,   109,    81,     3,     4,     5,     6,     7,    53,
      40,    40,     3,     4,     5,     6,     7,    40,    17,    40,
      19,    20,    21,    22,    40,    24,    17,    53,    19,    20,
      21,    22,     8,    24,    10,    40,    12,    13,    51,     7,
      16,    40,   241,    42,   243,    44,    45,    41,    24,    40,
      40,    50,    54,    44,    45,    39,    52,    52,   257,    50,
      52,    37,    41,    40,   263,    40,    40,    40,    40,    23,
      52,    25,    26,    27,    28,    29,    42,    42,    42,    42,
      42,   188,    36,    42,   191,    43,   193,   194,   195,     9,
      44,    45,    46,    47,    48,    49,    53,    51,    52,    23,
      52,    25,    26,    27,    28,    29,   213,    38,   215,     8,
     217,   218,    36,   220,    24,   222,    41,     5,   154,    43,
      44,    45,    46,    47,    48,    49,    81,    51,    23,    82,
      25,    26,    27,    28,    29,   242,   192,   258,   251,   256,
     180,    36,    -1,    -1,   251,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    23,    51,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    23,    51,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    23,
      51,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    23,    51,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    23,    51,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      23,    51,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    23,    51,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    23,    51,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    23,    51,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    23,    51,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    -1,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    15,    37,    56,    57,    58,    64,    70,    59,
      71,    65,     0,    56,    52,    24,    24,    24,    60,    72,
      66,    38,    40,    42,    67,    61,    73,    68,    62,    64,
      24,    75,    76,     3,     4,     5,     6,     7,    17,    19,
      20,    21,    22,    24,    40,    44,    45,    50,   125,   134,
     138,    39,    52,    77,    41,   135,    40,    40,    40,    40,
      42,   126,   147,   145,   144,   150,    23,    25,    26,    27,
      28,    29,    36,    43,    44,    45,    46,    47,    48,    49,
      51,    63,    53,    74,    40,   159,   156,   157,   158,   160,
      40,   138,   138,   138,   138,   138,   151,   152,   153,   154,
     155,   148,    69,   139,   140,   149,   141,   142,   146,   143,
      62,    76,    38,    78,   136,   138,   138,   138,   138,   138,
     127,    41,   138,   138,   138,   138,   138,   138,    67,   138,
     138,   138,   138,   138,   138,   138,    79,     7,    41,    41,
      41,    41,    43,   128,   129,   138,     8,    10,    12,    13,
      16,    24,    64,    80,    81,    82,    86,   103,   107,   114,
     121,   125,   131,   137,    41,    53,   115,   108,   122,   104,
     132,    87,    54,    83,    39,    80,    52,    52,    52,    41,
     130,    40,    40,    40,    40,    40,    67,    88,    84,    85,
     129,   116,   109,   123,   105,   133,    30,    31,    32,    33,
      34,    35,    54,   138,    42,    98,   138,    24,    82,   113,
     138,   138,   138,    90,    95,    91,    96,    92,    93,    97,
      89,    94,    99,    41,    52,    41,    41,    41,   138,    98,
     138,    98,   138,   138,    98,   138,    98,    98,   100,   102,
     138,   117,   110,   124,   106,    43,    53,    78,   138,    78,
      52,   101,     9,   118,    52,   100,   119,   120,   111,   114,
      78,    86,    41,   112,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    57,    59,    60,    61,
      58,    63,    62,    62,    65,    66,    64,    68,    69,    67,
      67,    71,    72,    73,    74,    70,    75,    75,    76,    77,
      76,    79,    78,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    84,    83,    85,    83,    83,    87,
      86,    89,    88,    90,    88,    91,    88,    92,    88,    93,
      88,    94,    88,    95,    88,    96,    88,    97,    88,    88,
      88,    99,    98,   100,   101,   100,   102,   102,   104,   105,
     106,   103,   108,   109,   110,   111,   112,   107,   113,   113,
     115,   116,   117,   114,   119,   118,   120,   118,   118,   122,
     123,   124,   121,   126,   127,   125,   128,   128,   129,   130,
     129,   132,   133,   131,   135,   136,   137,   134,   138,   138,
     138,   138,   139,   138,   140,   138,   141,   138,   142,   138,
     143,   138,   138,   144,   138,   145,   138,   146,   138,   147,
     138,   138,   138,   138,   138,   148,   138,   149,   138,   150,
     138,   151,   138,   152,   138,   153,   138,   154,   138,   155,
     138,   156,   138,   157,   138,   158,   138,   159,   138,   160,
     138
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     0,     0,     0,
       8,     0,     4,     0,     0,     0,     5,     0,     0,     6,
       0,     0,     0,     0,     0,    10,     1,     0,     1,     0,
       4,     0,     4,     2,     0,     2,     1,     1,     1,     1,
       2,     2,     1,     2,     0,     3,     0,     3,     0,     0,
       3,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     2,
       2,     0,     4,     1,     0,     4,     1,     1,     0,     0,
       0,     8,     0,     0,     0,     0,     0,    14,     1,     0,
       0,     0,     0,     9,     0,     3,     0,     3,     0,     0,
       0,     0,     8,     0,     0,     6,     1,     0,     1,     0,
       4,     0,     0,     6,     0,     0,     0,     7,     1,     1,
       1,     1,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     3,     0,     3,     0,     3,     0,     4,     0,
       4,     1,     1,     1,     1,     0,     4,     0,     4,     0,
       3,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     5,     0,     5,     0,     5,     0,     5,     0,
       5
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
  case 4:
#line 22 "analisador_ascendente.y"
                              { printf("; (%d %d)\n", yylineno, offset ); }
#line 1639 "analisador_ascendente.tab.c"
    break;

  case 7:
#line 27 "analisador_ascendente.y"
            { printf("STRUCT (%d %d)\n", yylineno, offset ); }
#line 1645 "analisador_ascendente.tab.c"
    break;

  case 8:
#line 27 "analisador_ascendente.y"
                                                                  { printf("ID (%d %d)\n", yylineno, offset ); }
#line 1651 "analisador_ascendente.tab.c"
    break;

  case 9:
#line 27 "analisador_ascendente.y"
                                                                                                                     { printf("{ (%d %d)\n", yylineno, offset ); }
#line 1657 "analisador_ascendente.tab.c"
    break;

  case 10:
#line 27 "analisador_ascendente.y"
                                                                                                                                                                                      { printf("} (%d %d)\n", yylineno, offset ); }
#line 1663 "analisador_ascendente.tab.c"
    break;

  case 11:
#line 30 "analisador_ascendente.y"
                                  { printf("; (%d %d)\n", yylineno, offset ); }
#line 1669 "analisador_ascendente.tab.c"
    break;

  case 14:
#line 34 "analisador_ascendente.y"
                   { printf("VAR (%d %d)\n", yylineno, offset ); }
#line 1675 "analisador_ascendente.tab.c"
    break;

  case 15:
#line 34 "analisador_ascendente.y"
                                                                      { printf("ID (%d %d)\n", yylineno, offset ); }
#line 1681 "analisador_ascendente.tab.c"
    break;

  case 17:
#line 37 "analisador_ascendente.y"
            { printf("[ (%d %d)\n", yylineno, offset ); }
#line 1687 "analisador_ascendente.tab.c"
    break;

  case 18:
#line 37 "analisador_ascendente.y"
                                                                         { printf("] (%d %d)\n", yylineno, offset ); }
#line 1693 "analisador_ascendente.tab.c"
    break;

  case 21:
#line 41 "analisador_ascendente.y"
              { printf("FUNCTION (%d %d)\n", yylineno, offset ); }
#line 1699 "analisador_ascendente.tab.c"
    break;

  case 22:
#line 41 "analisador_ascendente.y"
                                                                      { printf("ID (%d %d)\n", yylineno, offset ); }
#line 1705 "analisador_ascendente.tab.c"
    break;

  case 23:
#line 41 "analisador_ascendente.y"
                                                                                                                         { printf("( (%d %d)\n", yylineno, offset ); }
#line 1711 "analisador_ascendente.tab.c"
    break;

  case 24:
#line 41 "analisador_ascendente.y"
                                                                                                                                                                                     { printf(") (%d %d)\n", yylineno, offset ); }
#line 1717 "analisador_ascendente.tab.c"
    break;

  case 28:
#line 48 "analisador_ascendente.y"
                      { printf("ID (%d %d)\n", yylineno, offset ); }
#line 1723 "analisador_ascendente.tab.c"
    break;

  case 29:
#line 49 "analisador_ascendente.y"
         { printf("ID (%d %d)\n", yylineno, offset ); }
#line 1729 "analisador_ascendente.tab.c"
    break;

  case 31:
#line 52 "analisador_ascendente.y"
           { printf("{ (%d %d)\n", yylineno, offset ); }
#line 1735 "analisador_ascendente.tab.c"
    break;

  case 32:
#line 52 "analisador_ascendente.y"
                                                                        { printf("} (%d %d)\n", yylineno, offset ); }
#line 1741 "analisador_ascendente.tab.c"
    break;

  case 35:
#line 59 "analisador_ascendente.y"
                      { printf("; (%d %d)\n", yylineno, offset ); }
#line 1747 "analisador_ascendente.tab.c"
    break;

  case 40:
#line 64 "analisador_ascendente.y"
                        { printf("; (%d %d)\n", yylineno, offset ); }
#line 1753 "analisador_ascendente.tab.c"
    break;

  case 41:
#line 65 "analisador_ascendente.y"
                { printf("; (%d %d)\n", yylineno, offset ); }
#line 1759 "analisador_ascendente.tab.c"
    break;

  case 44:
#line 72 "analisador_ascendente.y"
               { printf("= (%d %d)\n", yylineno, offset ); }
#line 1765 "analisador_ascendente.tab.c"
    break;

  case 46:
#line 73 "analisador_ascendente.y"
          { printf("= (%d %d)\n", yylineno, offset ); }
#line 1771 "analisador_ascendente.tab.c"
    break;

  case 49:
#line 77 "analisador_ascendente.y"
               { printf("ID (%d %d)\n", yylineno, offset ); }
#line 1777 "analisador_ascendente.tab.c"
    break;

  case 51:
#line 81 "analisador_ascendente.y"
                        { printf("= (%d %d)\n", yylineno, offset ); }
#line 1783 "analisador_ascendente.tab.c"
    break;

  case 53:
#line 82 "analisador_ascendente.y"
                 { printf("+= (%d %d)\n", yylineno, offset ); }
#line 1789 "analisador_ascendente.tab.c"
    break;

  case 55:
#line 83 "analisador_ascendente.y"
                 { printf("-= (%d %d)\n", yylineno, offset ); }
#line 1795 "analisador_ascendente.tab.c"
    break;

  case 57:
#line 84 "analisador_ascendente.y"
                 { printf("/= (%d %d)\n", yylineno, offset ); }
#line 1801 "analisador_ascendente.tab.c"
    break;

  case 59:
#line 85 "analisador_ascendente.y"
                 { printf("*= (%d %d)\n", yylineno, offset ); }
#line 1807 "analisador_ascendente.tab.c"
    break;

  case 61:
#line 86 "analisador_ascendente.y"
                 { printf("= (%d %d)\n", yylineno, offset ); }
#line 1813 "analisador_ascendente.tab.c"
    break;

  case 63:
#line 87 "analisador_ascendente.y"
                 { printf("+= (%d %d)\n", yylineno, offset ); }
#line 1819 "analisador_ascendente.tab.c"
    break;

  case 65:
#line 88 "analisador_ascendente.y"
                 { printf("-= (%d %d)\n", yylineno, offset ); }
#line 1825 "analisador_ascendente.tab.c"
    break;

  case 67:
#line 89 "analisador_ascendente.y"
                 { printf("*= (%d %d)\n", yylineno, offset ); }
#line 1831 "analisador_ascendente.tab.c"
    break;

  case 69:
#line 90 "analisador_ascendente.y"
                 { printf("++ (%d %d)\n", yylineno, offset ); }
#line 1837 "analisador_ascendente.tab.c"
    break;

  case 70:
#line 91 "analisador_ascendente.y"
                 { printf("-- (%d %d)\n", yylineno, offset ); }
#line 1843 "analisador_ascendente.tab.c"
    break;

  case 71:
#line 94 "analisador_ascendente.y"
                 { printf("[ (%d %d)\n", yylineno, offset ); }
#line 1849 "analisador_ascendente.tab.c"
    break;

  case 72:
#line 94 "analisador_ascendente.y"
                                                                            { printf("] (%d %d)\n", yylineno, offset ); }
#line 1855 "analisador_ascendente.tab.c"
    break;

  case 74:
#line 97 "analisador_ascendente.y"
                  { printf(", (%d %d)\n", yylineno, offset ); }
#line 1861 "analisador_ascendente.tab.c"
    break;

  case 78:
#line 104 "analisador_ascendente.y"
                 { printf("RETURN (%d %d)\n", yylineno, offset ); }
#line 1867 "analisador_ascendente.tab.c"
    break;

  case 79:
#line 104 "analisador_ascendente.y"
                                                                        { printf("( (%d %d)\n", yylineno, offset ); }
#line 1873 "analisador_ascendente.tab.c"
    break;

  case 80:
#line 104 "analisador_ascendente.y"
                                                                                                                                     { printf(") (%d %d)\n", yylineno, offset ); }
#line 1879 "analisador_ascendente.tab.c"
    break;

  case 81:
#line 104 "analisador_ascendente.y"
                                                                                                                                                                                       { printf("; (%d %d)\n", yylineno, offset ); }
#line 1885 "analisador_ascendente.tab.c"
    break;

  case 82:
#line 107 "analisador_ascendente.y"
               { printf("FOR (%d %d)\n", yylineno, offset ); }
#line 1891 "analisador_ascendente.tab.c"
    break;

  case 83:
#line 107 "analisador_ascendente.y"
                                                                   { printf("( (%d %d)\n", yylineno, offset ); }
#line 1897 "analisador_ascendente.tab.c"
    break;

  case 84:
#line 107 "analisador_ascendente.y"
                                                                                                                                { printf("; (%d %d)\n", yylineno, offset ); }
#line 1903 "analisador_ascendente.tab.c"
    break;

  case 85:
#line 107 "analisador_ascendente.y"
                                                                                                                                                                                             { printf("; (%d %d)\n", yylineno, offset ); }
#line 1909 "analisador_ascendente.tab.c"
    break;

  case 86:
#line 107 "analisador_ascendente.y"
                                                                                                                                                                                                                                                          { printf(") (%d %d)\n", yylineno, offset ); }
#line 1915 "analisador_ascendente.tab.c"
    break;

  case 90:
#line 114 "analisador_ascendente.y"
             { printf("IF (%d %d)\n", yylineno, offset ); }
#line 1921 "analisador_ascendente.tab.c"
    break;

  case 91:
#line 114 "analisador_ascendente.y"
                                                                { printf("( (%d %d)\n", yylineno, offset ); }
#line 1927 "analisador_ascendente.tab.c"
    break;

  case 92:
#line 114 "analisador_ascendente.y"
                                                                                                                             { printf(") (%d %d)\n", yylineno, offset ); }
#line 1933 "analisador_ascendente.tab.c"
    break;

  case 94:
#line 117 "analisador_ascendente.y"
                { printf("ELSE (%d %d)\n", yylineno, offset ); }
#line 1939 "analisador_ascendente.tab.c"
    break;

  case 96:
#line 118 "analisador_ascendente.y"
          { printf("ELSE (%d %d)\n", yylineno, offset ); }
#line 1945 "analisador_ascendente.tab.c"
    break;

  case 99:
#line 122 "analisador_ascendente.y"
                 { printf("WHILE (%d %d)\n", yylineno, offset ); }
#line 1951 "analisador_ascendente.tab.c"
    break;

  case 100:
#line 122 "analisador_ascendente.y"
                                                                       { printf("( (%d %d)\n", yylineno, offset ); }
#line 1957 "analisador_ascendente.tab.c"
    break;

  case 101:
#line 122 "analisador_ascendente.y"
                                                                                                                                    { printf(") (%d %d)\n", yylineno, offset ); }
#line 1963 "analisador_ascendente.tab.c"
    break;

  case 103:
#line 125 "analisador_ascendente.y"
                  { printf("ID (%d %d)\n", yylineno, offset ); }
#line 1969 "analisador_ascendente.tab.c"
    break;

  case 104:
#line 125 "analisador_ascendente.y"
                                                                     { printf("( (%d %d)\n", yylineno, offset ); }
#line 1975 "analisador_ascendente.tab.c"
    break;

  case 105:
#line 125 "analisador_ascendente.y"
                                                                                                                                      { printf(") (%d %d)\n", yylineno, offset ); }
#line 1981 "analisador_ascendente.tab.c"
    break;

  case 109:
#line 133 "analisador_ascendente.y"
                     { printf(", (%d %d)\n", yylineno, offset ); }
#line 1987 "analisador_ascendente.tab.c"
    break;

  case 111:
#line 135 "analisador_ascendente.y"
           { printf("PRINT (%d %d)\n", yylineno, offset ); }
#line 1993 "analisador_ascendente.tab.c"
    break;

  case 112:
#line 135 "analisador_ascendente.y"
                                                                 { printf("( (%d %d)\n", yylineno, offset ); }
#line 1999 "analisador_ascendente.tab.c"
    break;

  case 113:
#line 135 "analisador_ascendente.y"
                                                                                                                              { printf(") (%d %d)\n", yylineno, offset ); }
#line 2005 "analisador_ascendente.tab.c"
    break;

  case 114:
#line 138 "analisador_ascendente.y"
          { printf("READ (%d %d)\n", yylineno, offset ); }
#line 2011 "analisador_ascendente.tab.c"
    break;

  case 115:
#line 138 "analisador_ascendente.y"
                                                               { printf("( (%d %d)\n", yylineno, offset ); }
#line 2017 "analisador_ascendente.tab.c"
    break;

  case 116:
#line 138 "analisador_ascendente.y"
                                                                                                                 { printf("STRING (%d %d)\n", yylineno, offset ); }
#line 2023 "analisador_ascendente.tab.c"
    break;

  case 117:
#line 138 "analisador_ascendente.y"
                                                                                                                                                                        { printf(") (%d %d)\n", yylineno, offset ); }
#line 2029 "analisador_ascendente.tab.c"
    break;

  case 118:
#line 141 "analisador_ascendente.y"
                { printf("INT (%d %d)\n", yylineno, offset ); }
#line 2035 "analisador_ascendente.tab.c"
    break;

  case 119:
#line 142 "analisador_ascendente.y"
          { printf("FLOAT (%d %d)\n", yylineno, offset ); }
#line 2041 "analisador_ascendente.tab.c"
    break;

  case 120:
#line 143 "analisador_ascendente.y"
          { printf("CHAR (%d %d)\n", yylineno, offset ); }
#line 2047 "analisador_ascendente.tab.c"
    break;

  case 121:
#line 144 "analisador_ascendente.y"
          { printf("STRING (%d %d)\n", yylineno, offset ); }
#line 2053 "analisador_ascendente.tab.c"
    break;

  case 122:
#line 145 "analisador_ascendente.y"
                     { printf("+ (%d %d)\n", yylineno, offset ); }
#line 2059 "analisador_ascendente.tab.c"
    break;

  case 124:
#line 146 "analisador_ascendente.y"
                     { printf("- (%d %d)\n", yylineno, offset ); }
#line 2065 "analisador_ascendente.tab.c"
    break;

  case 126:
#line 147 "analisador_ascendente.y"
                     { printf("* (%d %d)\n", yylineno, offset ); }
#line 2071 "analisador_ascendente.tab.c"
    break;

  case 128:
#line 148 "analisador_ascendente.y"
                     { printf("/ (%d %d)\n", yylineno, offset ); }
#line 2077 "analisador_ascendente.tab.c"
    break;

  case 130:
#line 149 "analisador_ascendente.y"
                     { printf("^ (%d %d)\n", yylineno, offset ); }
#line 2083 "analisador_ascendente.tab.c"
    break;

  case 133:
#line 151 "analisador_ascendente.y"
          { printf("- (%d %d)\n", yylineno, offset ); }
#line 2089 "analisador_ascendente.tab.c"
    break;

  case 135:
#line 152 "analisador_ascendente.y"
          { printf("+ (%d %d)\n", yylineno, offset ); }
#line 2095 "analisador_ascendente.tab.c"
    break;

  case 137:
#line 153 "analisador_ascendente.y"
                     { printf("MOD (%d %d)\n", yylineno, offset ); }
#line 2101 "analisador_ascendente.tab.c"
    break;

  case 139:
#line 154 "analisador_ascendente.y"
          { printf("( (%d %d)\n", yylineno, offset ); }
#line 2107 "analisador_ascendente.tab.c"
    break;

  case 140:
#line 154 "analisador_ascendente.y"
                                                                       { printf(") (%d %d)\n", yylineno, offset ); }
#line 2113 "analisador_ascendente.tab.c"
    break;

  case 142:
#line 157 "analisador_ascendente.y"
          { printf("BOOLEAN (%d %d)\n", yylineno, offset ); }
#line 2119 "analisador_ascendente.tab.c"
    break;

  case 144:
#line 159 "analisador_ascendente.y"
         { printf("ID (%d %d)\n", yylineno, offset ); }
#line 2125 "analisador_ascendente.tab.c"
    break;

  case 145:
#line 160 "analisador_ascendente.y"
                    { printf("OR (%d %d)\n", yylineno, offset ); }
#line 2131 "analisador_ascendente.tab.c"
    break;

  case 147:
#line 161 "analisador_ascendente.y"
                     { printf("AND (%d %d)\n", yylineno, offset ); }
#line 2137 "analisador_ascendente.tab.c"
    break;

  case 149:
#line 162 "analisador_ascendente.y"
          { printf("! (%d %d)\n", yylineno, offset ); }
#line 2143 "analisador_ascendente.tab.c"
    break;

  case 151:
#line 163 "analisador_ascendente.y"
                     { printf("!= (%d %d)\n", yylineno, offset ); }
#line 2149 "analisador_ascendente.tab.c"
    break;

  case 153:
#line 164 "analisador_ascendente.y"
                     { printf("<= (%d %d)\n", yylineno, offset ); }
#line 2155 "analisador_ascendente.tab.c"
    break;

  case 155:
#line 165 "analisador_ascendente.y"
                     { printf("< (%d %d)\n", yylineno, offset ); }
#line 2161 "analisador_ascendente.tab.c"
    break;

  case 157:
#line 166 "analisador_ascendente.y"
                     { printf(">= (%d %d)\n", yylineno, offset ); }
#line 2167 "analisador_ascendente.tab.c"
    break;

  case 159:
#line 167 "analisador_ascendente.y"
                     { printf("< (%d %d)\n", yylineno, offset ); }
#line 2173 "analisador_ascendente.tab.c"
    break;

  case 161:
#line 168 "analisador_ascendente.y"
              { printf("( (%d %d)\n", yylineno, offset ); }
#line 2179 "analisador_ascendente.tab.c"
    break;

  case 162:
#line 168 "analisador_ascendente.y"
                                                                           { printf(") (%d %d)\n", yylineno, offset ); }
#line 2185 "analisador_ascendente.tab.c"
    break;

  case 163:
#line 169 "analisador_ascendente.y"
              { printf("( (%d %d)\n", yylineno, offset ); }
#line 2191 "analisador_ascendente.tab.c"
    break;

  case 164:
#line 169 "analisador_ascendente.y"
                                                                           { printf(") (%d %d)\n", yylineno, offset ); }
#line 2197 "analisador_ascendente.tab.c"
    break;

  case 165:
#line 170 "analisador_ascendente.y"
              { printf("( (%d %d)\n", yylineno, offset ); }
#line 2203 "analisador_ascendente.tab.c"
    break;

  case 166:
#line 170 "analisador_ascendente.y"
                                                                           { printf(") (%d %d)\n", yylineno, offset ); }
#line 2209 "analisador_ascendente.tab.c"
    break;

  case 167:
#line 171 "analisador_ascendente.y"
              { printf("( (%d %d)\n", yylineno, offset ); }
#line 2215 "analisador_ascendente.tab.c"
    break;

  case 168:
#line 171 "analisador_ascendente.y"
                                                                           { printf(") (%d %d)\n", yylineno, offset ); }
#line 2221 "analisador_ascendente.tab.c"
    break;

  case 169:
#line 172 "analisador_ascendente.y"
             { printf("[ (%d %d)\n", yylineno, offset ); }
#line 2227 "analisador_ascendente.tab.c"
    break;

  case 170:
#line 172 "analisador_ascendente.y"
                                                                          { printf("] (%d %d)\n", yylineno, offset ); }
#line 2233 "analisador_ascendente.tab.c"
    break;


#line 2237 "analisador_ascendente.tab.c"

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
#line 276 "analisador_ascendente.y"


void 
yyerror(char *s)
{
    fprintf(stderr, "%s\n", s);
}

int main( int argc, char **argv )
{
    ++argv, --argc;  /* skip over program name */
    if ( argc > 0 ) {
        yyin = fopen( argv[0], "r" );
    } else {
        yyin = stdin;
    }

    yyparse();

    printf("Finished!\n");
}
