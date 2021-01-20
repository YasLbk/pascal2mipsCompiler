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
#line 1 "scalpa.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>

#include "include/function.h"
#include "include/mipssy.h"
#include "include/array.h"

struct option longopts[] = {
   { "out",     required_argument, 0,  'o'  },
   { "help",    no_argument,       0,  'h'  },
   { "version", no_argument,       0,  'v'  },
   { "tos",     no_argument,       0,  't'  },
   { NULL, 0, NULL, 0 }
};

extern quad globalcode[100];
extern int nextquad;
extern int ntp;

void yyerror(char*);
int yylex();
void lex_free();


#line 98 "y.tab.c"

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
    PROGRAM = 258,
    VAR = 259,
    SARRAY = 260,
    SOF = 261,
    INTRV_SEP = 262,
    ID = 263,
    STR = 264,
    NUM = 265,
    UNIT = 266,
    BOOL = 267,
    INT = 268,
    PLUS = 269,
    AFFECT = 270,
    TIMES = 271,
    MINUS = 272,
    DIVIDE = 273,
    POWER = 274,
    TRUE = 275,
    FALSE = 276,
    INF = 277,
    INFEQ = 278,
    SUP = 279,
    SUPEQ = 280,
    DIFF = 281,
    EQ = 282,
    AND = 283,
    OR = 284,
    NOT = 285,
    SBEGIN = 286,
    SEND = 287,
    WRITE = 288,
    READ = 289,
    SFUNCTION = 290,
    REF = 291,
    IF = 292,
    THEN = 293,
    ELSE = 294,
    WHILE = 295,
    DO = 296,
    RETURN = 297,
    THEN_SIMPLE = 298,
    NEG = 299
  };
#endif
/* Tokens.  */
#define PROGRAM 258
#define VAR 259
#define SARRAY 260
#define SOF 261
#define INTRV_SEP 262
#define ID 263
#define STR 264
#define NUM 265
#define UNIT 266
#define BOOL 267
#define INT 268
#define PLUS 269
#define AFFECT 270
#define TIMES 271
#define MINUS 272
#define DIVIDE 273
#define POWER 274
#define TRUE 275
#define FALSE 276
#define INF 277
#define INFEQ 278
#define SUP 279
#define SUPEQ 280
#define DIFF 281
#define EQ 282
#define AND 283
#define OR 284
#define NOT 285
#define SBEGIN 286
#define SEND 287
#define WRITE 288
#define READ 289
#define SFUNCTION 290
#define REF 291
#define IF 292
#define THEN 293
#define ELSE 294
#define WHILE 295
#define DO 296
#define RETURN 297
#define THEN_SIMPLE 298
#define NEG 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "scalpa.y"

	char *strval;
	int intval;
	struct P_symb **psymb;
	struct ident_list* list;
	struct quadop* exprval;
	struct {
		struct lpos* false;
		struct lpos* true;
	} tf;
	struct lpos* lpos;
	int actualquad;
	struct typelist *typelist;
	struct dim_list* dim_list;
	struct array_call *array_call;
	struct index_list *index_list;

#line 256 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

#define YYUNDEFTOK  2
#define YYMAXUTOK   299


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      50,    51,     2,     2,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    45,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    88,    88,    91,    92,    93,    95,    96,    98,    99,
     102,   105,   107,   108,   111,   116,   117,   121,   122,   123,
     126,   127,   131,   130,   144,   145,   146,   149,   157,   166,
     175,   183,   189,   198,   206,   212,   218,   219,   225,   232,
     243,   257,   258,   261,   261,   263,   277,   292,   293,   296,
     297,   298,   299,   300,   301,   314,   328,   347,   362,   368,
     374,   379,   384,   394,   401,   410,   411,   412,   413,   414,
     417,   418,   419,   420,   421,   422,   424,   428
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "VAR", "SARRAY", "SOF",
  "INTRV_SEP", "ID", "STR", "NUM", "UNIT", "BOOL", "INT", "PLUS", "AFFECT",
  "TIMES", "MINUS", "DIVIDE", "POWER", "TRUE", "FALSE", "INF", "INFEQ",
  "SUP", "SUPEQ", "DIFF", "EQ", "AND", "OR", "NOT", "SBEGIN", "SEND",
  "WRITE", "READ", "SFUNCTION", "REF", "IF", "THEN", "ELSE", "WHILE", "DO",
  "RETURN", "THEN_SIMPLE", "NEG", "';'", "':'", "','", "'['", "']'", "'('",
  "')'", "$accept", "program", "vardecllist", "varsdecl", "identlist",
  "typename", "arraytype", "rangelist", "lvalue", "exprlist", "atomictype",
  "fundecllist", "fundecl", "$@1", "parlist", "par", "instr", "sequence",
  "semcol", "Elist", "E", "cond", "opb", "oprel", "M", "tag", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    59,    58,    44,    91,    93,
      40,    41
};
# endif

#define YYPACT_NINF (-72)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    -1,    13,    23,   -72,    22,   -72,    -4,   -72,   -10,
      18,    23,   178,    51,    57,   -72,    24,   -72,    35,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,    37,   114,    18,    84,
      96,     8,   114,    12,    12,    40,   -72,    12,    92,   -72,
     -72,   103,    70,    80,    72,    93,    40,    12,    34,    86,
     -14,    32,   -72,   -72,    12,    12,   -72,   179,   179,   -72,
     -72,    40,    40,   155,    48,    40,   179,    12,   136,   146,
     101,   107,    96,   155,   121,    54,   179,   -72,   110,   141,
     -19,   -72,   -72,   -72,   -72,    58,   -72,   125,   -72,   -72,
     -72,   -72,   -72,    12,   -72,   111,   -12,   -72,   -72,   -72,
     -72,   -72,   -72,    12,   -72,   -72,   -72,    77,   179,   123,
     101,   -72,   101,   -72,    12,   -72,   -72,    40,    40,   114,
     -72,   124,   -72,   -72,   -72,   179,    40,    40,   114,   -72,
      84,   -72,   -72,   179,   -72,   -72,    86,   -72,   -72,   157,
     148,   114,   -72,    23,   -72,   -72,   -72,   114,   -72,   -72,
     114,   -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     5,     1,     0,    77,     3,     8,     0,
      21,     5,     0,     0,     0,    76,     0,     4,     0,    17,
      18,    19,     6,     7,    10,     9,     0,     0,    21,     0,
      26,     0,     0,     0,     0,     0,    76,    35,     0,     2,
      20,     0,     0,     0,     0,    24,     0,     0,     0,    44,
      44,    49,    52,    51,     0,     0,    50,    38,    37,    63,
      64,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,    26,    29,    30,     0,    15,    40,     0,    45,
      48,    43,    42,    36,    76,     0,    57,     0,    65,    67,
      66,    68,    69,     0,    60,     0,     0,    70,    71,    72,
      73,    75,    74,     0,    76,    76,    76,     0,    28,    12,
       0,    27,     0,    25,     0,    14,    39,     0,     0,     0,
      55,     0,    53,    56,    61,    62,     0,     0,     0,    76,
       0,    11,    22,    16,    46,    47,    44,    54,    59,    58,
      31,     0,    13,     5,    41,    77,    33,     0,    76,    23,
       0,    32
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -11,   -72,   -72,   122,   -72,    64,   -26,   -72,
      74,   171,   -72,   -72,   128,   -72,   -30,   -72,   -45,   -71,
     -22,   -27,   -72,   -72,   -32,    56
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     7,     9,    22,    23,    42,    56,    75,
      24,    15,    16,   143,    44,    45,    39,    50,    82,    78,
      63,    80,    93,   103,    27,    10
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      17,    38,    49,     1,    65,    84,    38,     3,    64,   104,
     105,    57,    58,     4,   121,    66,   104,   105,    83,    74,
      51,    52,    53,    46,    73,    76,    79,     5,   118,    54,
       8,    81,    86,    87,    94,    96,    12,    13,   107,   124,
      95,    11,    51,    52,    53,   108,   134,   135,    51,    52,
      53,    54,   119,    14,    59,    60,    47,    54,    48,    25,
      59,    60,    55,    79,    61,    26,    51,    52,    53,    28,
      61,   123,   126,   127,   128,    54,   104,   105,    59,    60,
      47,   125,    85,    29,    62,    77,   106,    30,    61,   136,
      62,   144,   133,    38,    41,    79,    79,   141,   140,   138,
     139,   114,    38,   115,    43,   104,   105,    67,    62,   120,
      68,   146,    19,    20,    21,    38,   150,   149,   129,    69,
     151,    38,    31,    71,    38,    88,    70,    89,    90,    91,
      92,    81,   147,    97,    98,    99,   100,   101,   102,    88,
      72,    89,    90,    91,    92,    32,   109,    33,    34,   104,
     105,    35,   110,   112,    36,    88,    37,    89,    90,    91,
      92,   116,   122,    97,    98,    99,   100,   101,   102,    88,
     130,    89,    90,    91,    92,   137,   122,    97,    98,    99,
     100,   101,   102,    18,   131,   104,   132,   145,   117,    19,
      20,    21,   111,    88,   142,    89,    90,    91,    92,    40,
     113,   148
};

static const yytype_uint8 yycheck[] =
{
      11,    27,    32,     3,    36,    50,    32,     8,    35,    28,
      29,    33,    34,     0,    85,    37,    28,    29,    32,    46,
       8,     9,    10,    15,    46,    47,    48,     4,    47,    17,
       8,    45,    54,    55,    61,    62,    46,    47,    65,    51,
      62,    45,     8,     9,    10,    67,   117,   118,     8,     9,
      10,    17,    84,    35,    20,    21,    48,    17,    50,     8,
      20,    21,    50,    85,    30,     8,     8,     9,    10,    45,
      30,    93,   104,   105,   106,    17,    28,    29,    20,    21,
      48,   103,    50,    48,    50,    51,    38,    50,    30,   119,
      50,   136,   114,   119,    10,   117,   118,   129,   128,   126,
     127,    47,   128,    49,     8,    28,    29,    15,    50,    51,
       7,   141,    11,    12,    13,   141,   148,   147,    41,    49,
     150,   147,     8,    51,   150,    14,    46,    16,    17,    18,
      19,    45,   143,    22,    23,    24,    25,    26,    27,    14,
      47,    16,    17,    18,    19,    31,    10,    33,    34,    28,
      29,    37,     6,    46,    40,    14,    42,    16,    17,    18,
      19,    51,    51,    22,    23,    24,    25,    26,    27,    14,
      47,    16,    17,    18,    19,    51,    51,    22,    23,    24,
      25,    26,    27,     5,   110,    28,   112,    39,    47,    11,
      12,    13,    70,    14,   130,    16,    17,    18,    19,    28,
      72,   145
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    53,     8,     0,     4,    54,    55,     8,    56,
      77,    45,    46,    47,    35,    63,    64,    54,     5,    11,
      12,    13,    57,    58,    62,     8,     8,    76,    45,    48,
      50,     8,    31,    33,    34,    37,    40,    42,    60,    68,
      63,    10,    59,     8,    66,    67,    15,    48,    50,    68,
      69,     8,     9,    10,    17,    50,    60,    72,    72,    20,
      21,    30,    50,    72,    73,    76,    72,    15,     7,    49,
      46,    51,    47,    72,    73,    61,    72,    51,    71,    72,
      73,    45,    70,    32,    70,    50,    72,    72,    14,    16,
      17,    18,    19,    74,    73,    72,    73,    22,    23,    24,
      25,    26,    27,    75,    28,    29,    38,    73,    72,    10,
       6,    57,    46,    66,    47,    49,    51,    47,    47,    76,
      51,    71,    51,    72,    51,    72,    76,    76,    76,    41,
      47,    62,    62,    72,    71,    71,    68,    51,    73,    73,
      68,    76,    59,    65,    70,    39,    68,    54,    77,    68,
      76,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    55,    55,    56,    56,
      57,    58,    59,    59,    60,    61,    61,    62,    62,    62,
      63,    63,    65,    64,    66,    66,    66,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    71,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    76,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     1,     3,     0,     4,     4,     1,     3,
       1,     6,     3,     5,     4,     1,     3,     1,     1,     1,
       3,     0,     0,    10,     1,     3,     0,     3,     3,     3,
       3,     5,     9,     6,     2,     1,     3,     2,     2,     4,
       3,     5,     2,     1,     0,     1,     3,     3,     1,     1,
       1,     1,     1,     3,     4,     3,     3,     2,     4,     4,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     0
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
#line 88 "scalpa.y"
                                                        {complete((yyvsp[-3].lpos), (yyvsp[-1].actualquad));}
#line 1545 "y.tab.c"
    break;

  case 3:
#line 91 "scalpa.y"
                      {}
#line 1551 "y.tab.c"
    break;

  case 4:
#line 92 "scalpa.y"
                                       {}
#line 1557 "y.tab.c"
    break;

  case 5:
#line 93 "scalpa.y"
                          {}
#line 1563 "y.tab.c"
    break;

  case 6:
#line 95 "scalpa.y"
                                     {create_symblist("var",(yyvsp[-2].list), (yyvsp[0].strval));}
#line 1569 "y.tab.c"
    break;

  case 7:
#line 96 "scalpa.y"
                                      {create_symblist_array("array",(yyvsp[-2].list), "int", (yyvsp[0].dim_list));}
#line 1575 "y.tab.c"
    break;

  case 8:
#line 98 "scalpa.y"
                              {(yyval.list) = create_identlist((yyvsp[0].strval));}
#line 1581 "y.tab.c"
    break;

  case 9:
#line 99 "scalpa.y"
                              {(yyval.list) = add_to_identlist((yyvsp[-2].list), (yyvsp[0].strval));}
#line 1587 "y.tab.c"
    break;

  case 10:
#line 102 "scalpa.y"
                       { (yyval.strval) = (yyvsp[0].strval); }
#line 1593 "y.tab.c"
    break;

  case 11:
#line 105 "scalpa.y"
                                                    { (yyval.dim_list) = (yyvsp[-3].dim_list); print_dims((yyvsp[-3].dim_list)); }
#line 1599 "y.tab.c"
    break;

  case 12:
#line 107 "scalpa.y"
                              { (yyval.dim_list) = add_dim((yyvsp[-2].intval), (yyvsp[0].intval)); }
#line 1605 "y.tab.c"
    break;

  case 13:
#line 108 "scalpa.y"
                                                   { (yyval.dim_list) = add_dims((yyvsp[0].dim_list), (yyvsp[-4].intval), (yyvsp[-2].intval));}
#line 1611 "y.tab.c"
    break;

  case 14:
#line 111 "scalpa.y"
                             { (yyval.array_call) = array_call_info((yyvsp[-3].strval), (yyvsp[-1].index_list)); check_indx((yyvsp[-3].strval), (yyvsp[-1].index_list));
		//printf("%s %s %d\n", $$->tab_name, $$->tab_element , $$->head_array->un.index_int); //print the most right index
		//printf("%d\n", $$->head_array->next_indxlist->un.index_int);
		}
#line 1620 "y.tab.c"
    break;

  case 15:
#line 116 "scalpa.y"
                                        { (yyval.index_list) = solo_index((yyvsp[0].exprval)); }
#line 1626 "y.tab.c"
    break;

  case 16:
#line 117 "scalpa.y"
                                   { (yyval.index_list) = all_indexs((yyvsp[-2].index_list), (yyvsp[0].exprval)); }
#line 1632 "y.tab.c"
    break;

  case 17:
#line 121 "scalpa.y"
                  {(yyval.strval) = "unit";}
#line 1638 "y.tab.c"
    break;

  case 18:
#line 122 "scalpa.y"
                  {(yyval.strval) = "bool";}
#line 1644 "y.tab.c"
    break;

  case 19:
#line 123 "scalpa.y"
                  {(yyval.strval) = "int";}
#line 1650 "y.tab.c"
    break;

  case 22:
#line 131 "scalpa.y"
                {
			create_symblist("function",create_identlist((yyvsp[-5].strval)), (yyvsp[0].strval));
			add_typelist_to_symb((yyvsp[-5].strval), (yyvsp[-3].typelist));
			quad q = quad_make(Q_FBEGIN, quadop_cst(len_param((yyvsp[-3].typelist))), NULL, quadop_name((yyvsp[-5].strval)));
			gencode(q);
		}
#line 1661 "y.tab.c"
    break;

  case 23:
#line 138 "scalpa.y"
                {
			quad q = quad_make(Q_FEND, NULL, NULL, quadop_name((yyvsp[-8].strval)));
			gencode(q);
		}
#line 1670 "y.tab.c"
    break;

  case 24:
#line 144 "scalpa.y"
              {(yyval.typelist) = (yyvsp[0].typelist);}
#line 1676 "y.tab.c"
    break;

  case 25:
#line 145 "scalpa.y"
                                  { (yyval.typelist) = add_to_typelist((yyvsp[-2].typelist), (yyvsp[0].typelist));}
#line 1682 "y.tab.c"
    break;

  case 26:
#line 146 "scalpa.y"
                  { (yyval.typelist) = NULL;}
#line 1688 "y.tab.c"
    break;

  case 27:
#line 150 "scalpa.y"
        {
		create_symblist("param",create_identlist((yyvsp[-2].strval)), (yyvsp[0].strval));
		(yyval.typelist) = create_typelist((yyvsp[-2].strval), (yyvsp[0].strval));
	}
#line 1697 "y.tab.c"
    break;

  case 28:
#line 157 "scalpa.y"
                                {
			quad q = quad_make(Q_AFFECT, (yyvsp[0].exprval), NULL, quadop_array((yyvsp[-2].array_call)));
			//printf("%d %d %s %s",$1->i, $1->j, $1->tab_element,$1->tab_name);
			//printf("%s",q.res->u.name);
			gencode(q);
			(yyval.lpos) = crelist(nextquad);
			printf("fin affectation tableau\n");
		}
#line 1710 "y.tab.c"
    break;

  case 29:
#line 167 "scalpa.y"
          {
		  chk_symb_declared((yyvsp[-2].strval));
		  //chk_symb_type($1,$3);
		  affect_symb((yyvsp[-2].strval), (yyvsp[0].exprval));
	 	  quad q = quad_make(Q_AFFECT, (yyvsp[0].exprval), NULL, quadop_name((yyvsp[-2].strval)));
		  gencode(q);
		  (yyval.lpos) = crelist(nextquad);
	  }
#line 1723 "y.tab.c"
    break;

  case 30:
#line 176 "scalpa.y"
          {
		  chk_symb_declared((yyvsp[-2].strval));
		  chk_symb_type((yyvsp[-2].strval),NULL);
		  quad q = quad_make(Q_AFFECT, reify((yyvsp[0].tf).true, (yyvsp[0].tf).false), NULL, quadop_name((yyvsp[-2].strval)));
		  gencode(q);
		  (yyval.lpos) = crelist(nextquad);
	  }
#line 1735 "y.tab.c"
    break;

  case 31:
#line 184 "scalpa.y"
          {
		  (yyval.lpos) = NULL;
		  complete((yyvsp[-3].tf).true,(yyvsp[-1].actualquad));
		  (yyval.lpos) = concat((yyvsp[-3].tf).false,(yyvsp[0].lpos));
	  }
#line 1745 "y.tab.c"
    break;

  case 32:
#line 190 "scalpa.y"
          {
		  complete((yyvsp[-7].tf).true, (yyvsp[-5].actualquad));
		  complete((yyvsp[-7].tf).false, (yyvsp[-1].actualquad));
		  (yyval.lpos) = concat((yyvsp[-4].lpos), (yyvsp[-2].lpos));
		  (yyval.lpos) = concat((yyval.lpos), crelist(nextquad));
		  quad q = quad_make(Q_GOTO,NULL,NULL,quadop_cst(-1));
		  gencode(q);
	  }
#line 1758 "y.tab.c"
    break;

  case 33:
#line 199 "scalpa.y"
          {
	  		complete((yyvsp[-3].tf).true, (yyvsp[-1].actualquad));
			complete((yyvsp[0].lpos), (yyvsp[-4].actualquad));
			quad q = quad_make(Q_GOTO,NULL,NULL,quadop_cst((yyvsp[-4].actualquad)));
			gencode(q);
			(yyval.lpos) = (yyvsp[-3].tf).false;
    }
#line 1770 "y.tab.c"
    break;

  case 34:
#line 207 "scalpa.y"
          {
		  quad q = quad_make(Q_RET,NULL,NULL,(yyvsp[0].exprval));
		  gencode(q);
		  (yyval.lpos) = crelist(nextquad);
	  }
#line 1780 "y.tab.c"
    break;

  case 35:
#line 213 "scalpa.y"
          {
		  quad q = quad_make(Q_RET,NULL,NULL,NULL);
		  gencode(q);
		  (yyval.lpos) = crelist(nextquad);
	  }
#line 1790 "y.tab.c"
    break;

  case 36:
#line 218 "scalpa.y"
                                 {(yyval.lpos) = (yyvsp[-1].lpos);}
#line 1796 "y.tab.c"
    break;

  case 37:
#line 220 "scalpa.y"
          {
		  quad q = quad_make(Q_READ, NULL, NULL, (yyvsp[0].exprval));
		  gencode(q);
		  (yyval.lpos) = crelist(nextquad);
	  }
#line 1806 "y.tab.c"
    break;

  case 38:
#line 226 "scalpa.y"
          {
		  quad q = quad_make(Q_WRITE, NULL, NULL, (yyvsp[0].exprval));
		  gencode(q);
		  (yyval.lpos) = crelist(nextquad);

	  }
#line 1817 "y.tab.c"
    break;

  case 39:
#line 233 "scalpa.y"
          {
		  chk_symb_declared((yyvsp[-3].strval));
		  chk_symb_fct((yyvsp[-3].strval));
		  typelist* l = get_typelist((yyvsp[-3].strval));
		  cmp_typelist((yyvsp[-1].typelist), l);
		  int len = gencode_param((yyvsp[-1].typelist));
		  quad q = quad_make(Q_CALL, quadop_cst(len), NULL, quadop_name((yyvsp[-3].strval)));
		  gencode(q);
		  (yyval.lpos) = crelist(nextquad);
	  }
#line 1832 "y.tab.c"
    break;

  case 40:
#line 244 "scalpa.y"
          {
		  chk_symb_declared((yyvsp[-2].strval));
		  chk_symb_fct((yyvsp[-2].strval));
		  typelist* l = get_typelist((yyvsp[-2].strval));
		  cmp_typelist(NULL, l);
		  int len = gencode_param(NULL);
		  quad q = quad_make(Q_CALL, quadop_cst(len), NULL, quadop_name((yyvsp[-2].strval)));
		  gencode(q);
		  (yyval.lpos) = crelist(nextquad);
	  }
#line 1847 "y.tab.c"
    break;

  case 41:
#line 257 "scalpa.y"
                                          {complete((yyvsp[-4].lpos), (yyvsp[-2].actualquad));(yyval.lpos) = (yyvsp[-1].lpos);}
#line 1853 "y.tab.c"
    break;

  case 42:
#line 258 "scalpa.y"
                                { (yyval.lpos) = (yyvsp[-1].lpos);}
#line 1859 "y.tab.c"
    break;

  case 45:
#line 264 "scalpa.y"
          {
		  if ((yyvsp[0].exprval)->type == QO_CST) // on doit creer une variable temp pour stocker la constante
		  {
			  quadop *t = new_temp();
			  quad q = quad_make(Q_AFFECT, (yyvsp[0].exprval), NULL, t);
			  gencode(q);
			  create_symblist("var", create_identlist(t->u.name), "int");
			  char *s = get_symb_type_A_char(t->u.name);
			  (yyval.typelist) = create_typelist(t->u.name, s);
		  }
		  else
			  (yyval.typelist) = create_typelist((yyvsp[0].exprval)->u.name, get_symb_type_A_char((yyvsp[0].exprval)->u.name));
	  }
#line 1877 "y.tab.c"
    break;

  case 46:
#line 278 "scalpa.y"
          {
		  if ((yyvsp[-2].exprval)->type == QO_CST)
		  {
			  quadop *t = new_temp();
			  quad q = quad_make(Q_AFFECT, (yyvsp[-2].exprval), NULL, t);
			  gencode(q);
			  create_symblist("var", create_identlist(t->u.name), "int");
			  char *s = get_symb_type_A_char(t->u.name);
				  (yyval.typelist) = add_to_typelist(create_typelist(t->u.name, get_symb_type_A_char(t->u.name)), (yyvsp[0].typelist));
		  }
		  else
			  (yyval.typelist) = add_to_typelist(create_typelist((yyvsp[-2].exprval)->u.name, get_symb_type_A_char((yyvsp[-2].exprval)->u.name)), (yyvsp[0].typelist));

	  }
#line 1896 "y.tab.c"
    break;

  case 47:
#line 292 "scalpa.y"
                           {(yyval.typelist) = add_to_typelist(create_typelist((reify((yyvsp[-2].tf).true, (yyvsp[-2].tf).false))->u.name, "bool"), (yyvsp[0].typelist));}
#line 1902 "y.tab.c"
    break;

  case 48:
#line 293 "scalpa.y"
                 {(yyval.typelist) = create_typelist(reify((yyvsp[0].tf).true, (yyvsp[0].tf).false)->u.name, "bool");}
#line 1908 "y.tab.c"
    break;

  case 49:
#line 296 "scalpa.y"
       { chk_symb_declared((yyvsp[0].strval)); (yyval.exprval) = quadop_name((yyvsp[0].strval));}
#line 1914 "y.tab.c"
    break;

  case 50:
#line 297 "scalpa.y"
         { (yyval.exprval) = quadop_array((yyvsp[0].array_call));}
#line 1920 "y.tab.c"
    break;

  case 51:
#line 298 "scalpa.y"
      {	(yyval.exprval) = quadop_cst((yyvsp[0].intval));}
#line 1926 "y.tab.c"
    break;

  case 52:
#line 299 "scalpa.y"
      { (yyval.exprval) = quadop_str((yyvsp[0].strval));}
#line 1932 "y.tab.c"
    break;

  case 53:
#line 300 "scalpa.y"
            { (yyval.exprval) = (yyvsp[-1].exprval);}
#line 1938 "y.tab.c"
    break;

  case 54:
#line 302 "scalpa.y"
{
	chk_symb_declared((yyvsp[-3].strval));
	chk_symb_fct((yyvsp[-3].strval));
	typelist* l = get_typelist((yyvsp[-3].strval));
	cmp_typelist((yyvsp[-1].typelist), l);
	int len = gencode_param((yyvsp[-1].typelist));
	quadop* t = new_temp();
	create_symblist("var", create_identlist(t->u.name), get_symb_type_A_char((yyvsp[-3].strval)));
	quad q = quad_make(Q_CALL_AFFECT, quadop_name((yyvsp[-3].strval)),quadop_cst(len), t);
	gencode(q);
	(yyval.exprval) = t;
}
#line 1955 "y.tab.c"
    break;

  case 55:
#line 315 "scalpa.y"
{
	chk_symb_declared((yyvsp[-2].strval));
	chk_symb_fct((yyvsp[-2].strval));
	typelist* l = get_typelist((yyvsp[-2].strval));
	cmp_typelist(NULL, l);
	int len = gencode_param(NULL);
	quadop* t = new_temp();
	create_symblist("var", create_identlist(t->u.name), get_symb_type_A_char((yyvsp[-2].strval)));
	quad q = quad_make(Q_CALL_AFFECT, quadop_name((yyvsp[-2].strval)),quadop_cst(len), t);
	gencode(q);
	(yyval.exprval) = t;

}
#line 1973 "y.tab.c"
    break;

  case 56:
#line 329 "scalpa.y"
{
	  if ((yyvsp[-2].exprval)->type == QO_STR || (yyvsp[0].exprval)->type == QO_STR)
	  {
		  yyerror("erreur de type");
		  exit(1);
	  }
	  quadop* t = new_temp();
	  create_symblist("var", create_identlist(t->u.name), "int");
	  quad q = quad_make((yyvsp[-1].intval), (yyvsp[-2].exprval), (yyvsp[0].exprval), t);

	  quadop* t_val = malloc(sizeof(quadop));
	  CHK_MALLOC(t_val);
	  affect_opb((yyvsp[-2].exprval), (yyvsp[-1].intval), (yyvsp[0].exprval), t_val);
	  affect_symb(t->u.name, t_val);

	  gencode(q);
	  (yyval.exprval) = t;
}
#line 1996 "y.tab.c"
    break;

  case 57:
#line 348 "scalpa.y"
{
	if ((yyvsp[0].exprval)->type == QO_STR)
	{
		yyerror("erreur de type");
		exit(1);
	}
	quadop* t = new_temp();
	create_symblist("var", create_identlist(t->u.name), "int");
	quad q = quad_make(Q_NEG, (yyvsp[0].exprval), NULL, t);
	gencode(q);
	(yyval.exprval) = t;
}
#line 2013 "y.tab.c"
    break;

  case 58:
#line 363 "scalpa.y"
        {
		(yyval.tf).true = concat ((yyvsp[-3].tf).true, (yyvsp[0].tf).true);
		complete((yyvsp[-3].tf).false, (yyvsp[-1].actualquad));
		(yyval.tf).false = (yyvsp[0].tf).false;
	}
#line 2023 "y.tab.c"
    break;

  case 59:
#line 369 "scalpa.y"
        {
		(yyval.tf).false = concat ((yyvsp[-3].tf).false, (yyvsp[0].tf).false);
		complete((yyvsp[-3].tf).true, (yyvsp[-1].actualquad));
		(yyval.tf).true = (yyvsp[0].tf).true;
	}
#line 2033 "y.tab.c"
    break;

  case 60:
#line 375 "scalpa.y"
        {
		(yyval.tf).true = (yyvsp[0].tf).false;
		(yyval.tf).false = (yyvsp[0].tf).true;
	}
#line 2042 "y.tab.c"
    break;

  case 61:
#line 380 "scalpa.y"
        {
		(yyval.tf).true = (yyvsp[-1].tf).true;
		(yyval.tf).false = (yyvsp[-1].tf).false;
	}
#line 2051 "y.tab.c"
    break;

  case 62:
#line 385 "scalpa.y"
        {
		chk_symb_typeE((yyvsp[-2].exprval), (yyvsp[0].exprval));
		(yyval.tf).true = crelist(nextquad);
		quad q = quad_make((yyvsp[-1].intval),(yyvsp[-2].exprval),(yyvsp[0].exprval),NULL);
		gencode (q);
		(yyval.tf).false = crelist(nextquad);
		quad q2 = quad_make(Q_GOTO,NULL,NULL,quadop_cst(-1));
		gencode(q2);
	}
#line 2065 "y.tab.c"
    break;

  case 63:
#line 395 "scalpa.y"
        {
		(yyval.tf).true = crelist(nextquad);
		quad q2 = quad_make(Q_GOTO,NULL,NULL,quadop_cst(-1));
		gencode(q2);
		(yyval.tf).false = NULL;
	}
#line 2076 "y.tab.c"
    break;

  case 64:
#line 402 "scalpa.y"
        {
		(yyval.tf).false = crelist(nextquad);
		quad q2 = quad_make(Q_GOTO,NULL,NULL,quadop_cst(-1));
		gencode(q2);
		(yyval.tf).true = NULL;
	}
#line 2087 "y.tab.c"
    break;

  case 65:
#line 410 "scalpa.y"
           { (yyval.intval) = Q_PLUS; }
#line 2093 "y.tab.c"
    break;

  case 66:
#line 411 "scalpa.y"
                { (yyval.intval) = Q_MINUS; }
#line 2099 "y.tab.c"
    break;

  case 67:
#line 412 "scalpa.y"
                { (yyval.intval) = Q_TIMES; }
#line 2105 "y.tab.c"
    break;

  case 68:
#line 413 "scalpa.y"
                 { (yyval.intval) = Q_DIVIDE; }
#line 2111 "y.tab.c"
    break;

  case 69:
#line 414 "scalpa.y"
                { (yyval.intval) = Q_POWER; }
#line 2117 "y.tab.c"
    break;

  case 70:
#line 417 "scalpa.y"
            { (yyval.intval) = Q_INF; }
#line 2123 "y.tab.c"
    break;

  case 71:
#line 418 "scalpa.y"
                  { (yyval.intval) = Q_INFEQ; }
#line 2129 "y.tab.c"
    break;

  case 72:
#line 419 "scalpa.y"
                { (yyval.intval) = Q_SUP; }
#line 2135 "y.tab.c"
    break;

  case 73:
#line 420 "scalpa.y"
                  { (yyval.intval) = Q_SUPEQ; }
#line 2141 "y.tab.c"
    break;

  case 74:
#line 421 "scalpa.y"
               { (yyval.intval) = Q_EQ; }
#line 2147 "y.tab.c"
    break;

  case 75:
#line 422 "scalpa.y"
                 { (yyval.intval) = Q_DIFF; }
#line 2153 "y.tab.c"
    break;

  case 76:
#line 424 "scalpa.y"
    { (yyval.actualquad) = nextquad;}
#line 2159 "y.tab.c"
    break;

  case 77:
#line 428 "scalpa.y"
{
	  (yyval.lpos) = crelist(nextquad);
	  quad q = quad_make(Q_GOTO,NULL,NULL,quadop_cst(-1));
	  gencode(q);
}
#line 2169 "y.tab.c"
    break;


#line 2173 "y.tab.c"

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
#line 435 "scalpa.y"

void yyerror (char *s) {
	fprintf(stderr, "[Yacc] error: %s\n", s);
}


int main(int argc, char** argv) {
	init_symb_tab();
	printf("Enter your code:\n");

	yyparse();

	int c;
	char *filename = NULL;

	while ((c = getopt_long(argc, argv, "o:htv", longopts, NULL)) != -1)
	{
		switch(c)
		{
			case 'v':
				printf("Les membres du groupe sont :\n\t-Céline Ly\n\t-Yassine Lambarki\n\t-Michael Hofmann\n\t-Simon Willer\n");
				break;
			case 'o':
				filename = optarg;
				break;
			case ':':
				fprintf(stderr, "%s: option `-%c' requires an argument\n",argv[0], optopt);
				break;
			case 'h':
				printf("option -version -o -tos\n");
				break;
			case 't':
				printf("-----------------\nSymbol table:\n-----------------\n");
				print_tab();
				printf("-----------------\nSymbol integer:\n-----------------\n");
				print_intvar_name();
				printf("-----------------\nQuad List:\n-----------------\n");
				for (int i=0; i<nextquad; i++) {
					printf("%i ", i);
					affiche(globalcode[i]);
				}
				break;
			case '?':
			default:
				fprintf(stderr, "%s: option `-%c' is invalid: ignored\n",argv[0], optopt);
		        break;
		}
	}

	FILE * out = stdout;

	if(filename == NULL)
		out = fopen("out.asm", "w");
	else
		out = fopen(filename, "w");

	if(!out) {
		fprintf(stderr, "ERROR: Unable to open the output file for writing.\n");
	}

	mips_code(globalcode, nextquad, out);
	fclose(out);


	// Be clean.===> Ofc As always
	lex_free();
	return 0;
}
