
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Finalp.y"

	#include<stdio.h>
	#include<math.h>
	int duplicatecheck[500];
	int duplicate[500];
	float variablevalue[500];
	float functionvalue[500];
	int functionvariableval[500];
	int iSdeclared[500];
	float store[26];
	int i=0;
	int j,k,l=0,test,elseifexecuted=0,tp,ifexecutionstarted=0,ifvalue,ifexecutionstarted1=0,ifsuccessful=0,ifsuccessful1=0,forvalue,varlocation,dupvar=0,initiali=0,initialj=0,jval=0 ;
	int whilevalstart=0,varprint=0,dup_hoiche_kina=0,ji=0,ki=0,dup_hoiche_kina2=0,elsevar=0,swithexpval=0,switchcount=0,expvalforswitch=0,functionvar=0,funci=0;


/* Line 189 of yacc.c  */
#line 89 "Finalp.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VARIABLE = 259,
     INT = 260,
     FLOAT = 261,
     DOUBLE = 262,
     CHAR = 263,
     EQUAL = 264,
     GREATER_THAN = 265,
     LESS_THAN = 266,
     GREATER_OR_EQUAL = 267,
     LESS_OR_EQUAL = 268,
     PLUS = 269,
     MINUS = 270,
     MULTIPLICATION = 271,
     DIVISION = 272,
     MOD = 273,
     BREAK = 274,
     FUNCTION = 275,
     RETURNING = 276,
     INC = 277,
     DEC = 278,
     STOP = 279,
     FIRST_S_BRACKET = 280,
     FIRST_E_BRACKET = 281,
     SECOND_S_BRACKET = 282,
     SECOND_e_BRACKET = 283,
     THIRD_S_BRACKET = 284,
     THIRD_E_BRACKET = 285,
     MAIN = 286,
     COMMA = 287,
     PRINTIT = 288,
     SWITCHCOLON = 289,
     IF = 290,
     ELSEIF = 291,
     ELSE = 292,
     WHILE = 293,
     FOR = 294,
     DO = 295,
     SWITCH = 296,
     CASE = 297,
     DEFAULT = 298,
     EQEQ = 299,
     NOTEQ = 300,
     ANDAND = 301,
     OROR = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 17 "Finalp.y"

  struct varstruct
  {
    int INTV,INTL;
	char CHARV[20];
  }s1;
  int INTI;
  float DOB;   



/* Line 214 of yacc.c  */
#line 184 "Finalp.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 196 "Finalp.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   326

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNRULES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    12,    13,    22,    23,    39,    40,    41,
      42,    45,    49,    51,    52,    53,    55,    57,    59,    61,
      62,    65,    69,    72,    75,    76,    80,    82,    84,    86,
      88,    92,    94,    96,   102,   105,   106,   108,   110,   114,
     118,   122,   126,   130,   134,   138,   142,   146,   150,   154,
     158,   162,   165,   168,   174,   175,   179,   181,   183,   189,
     193,   195,   196,   207,   223,   226,   238,   241,   249,   258,
     268,   269,   280,   288,   289,   295,   296,   306,   307,   311,
     313,   315,   316,   317
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    58,    59,    60,    61,    62,    72,
      51,    -1,    -1,    50,    20,    56,     4,    25,    57,    54,
      26,    -1,    -1,    51,    52,    20,    53,     4,    25,    57,
      54,    26,    27,    62,    21,    70,    24,    28,    -1,    -1,
      -1,    -1,    65,    55,    -1,    55,    32,     4,    -1,     4,
      -1,    -1,    -1,    31,    -1,    25,    -1,    26,    -1,    27,
      -1,    -1,    62,    68,    -1,    62,    63,    64,    -1,    62,
      73,    -1,    62,    75,    -1,    -1,    65,    66,    67,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,    66,    32,
       4,    -1,     4,    -1,    24,    -1,     4,     9,    69,    70,
      67,    -1,    70,    67,    -1,    -1,     3,    -1,     4,    -1,
      70,    14,    70,    -1,    70,    15,    70,    -1,    70,    16,
      70,    -1,    70,    17,    70,    -1,    70,    18,    70,    -1,
      70,    44,    70,    -1,    70,    45,    70,    -1,    70,    46,
      70,    -1,    70,    47,    70,    -1,    70,    10,    70,    -1,
      70,    11,    70,    -1,    70,    12,    70,    -1,    70,    13,
      70,    -1,    70,    22,    -1,    70,    23,    -1,    20,     4,
      25,    71,    26,    -1,    -1,    71,    32,    70,    -1,    70,
      -1,    28,    -1,    33,    25,    74,    26,    67,    -1,    74,
      32,     4,    -1,     4,    -1,    -1,    35,    81,    25,    70,
      26,    27,    75,    28,    79,    82,    -1,    35,    81,    25,
      70,    26,    27,    75,    28,    79,    37,    27,    83,    75,
      28,    82,    -1,    75,    73,    -1,    39,    25,    80,    32,
      80,    32,    80,    26,    27,    75,    28,    -1,    75,    68,
      -1,    38,    25,    80,    26,    27,    75,    28,    -1,    38,
      27,    75,    28,    40,    25,    80,    26,    -1,    41,    25,
      70,    77,    26,    27,    76,    78,    28,    -1,    -1,    76,
      41,    25,    70,    77,    26,    27,    76,    78,    28,    -1,
      76,    42,    70,    34,    68,    19,    24,    -1,    -1,    43,
      34,    68,    19,    24,    -1,    -1,    79,    81,    36,    25,
      70,    26,    27,    75,    28,    -1,    -1,     4,     9,    70,
      -1,    70,    -1,    73,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    50,    50,    52,    53,    55,    56,    69,    71,    80,
      81,    83,    91,    99,   108,   110,   123,   125,   127,   129,
     130,   131,   132,   133,   135,   144,   163,   164,   165,   166,
     168,   189,   210,   212,   248,   250,   253,   254,   255,   256,
     257,   258,   272,   286,   299,   312,   325,   338,   354,   370,
     386,   402,   409,   416,   439,   440,   444,   451,   453,   464,
     480,   498,   499,   504,   510,   511,   532,   533,   545,   556,
     576,   577,   596,   598,   600,   603,   604,   609,   610,   611,
     612,   614,   616,   618
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VARIABLE", "INT", "FLOAT",
  "DOUBLE", "CHAR", "EQUAL", "GREATER_THAN", "LESS_THAN",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "PLUS", "MINUS", "MULTIPLICATION",
  "DIVISION", "MOD", "BREAK", "FUNCTION", "RETURNING", "INC", "DEC",
  "STOP", "FIRST_S_BRACKET", "FIRST_E_BRACKET", "SECOND_S_BRACKET",
  "SECOND_e_BRACKET", "THIRD_S_BRACKET", "THIRD_E_BRACKET", "MAIN",
  "COMMA", "PRINTIT", "SWITCHCOLON", "IF", "ELSEIF", "ELSE", "WHILE",
  "FOR", "DO", "SWITCH", "CASE", "DEFAULT", "EQEQ", "NOTEQ", "ANDAND",
  "OROR", "$accept", "program", "pro", "proc", "duplicatesolvelevel",
  "changefuncvval", "decforfunc", "varnam", "changefuncvarval",
  "infunction", "mainfunc", "fsp", "fep", "ssp", "mystatement", "decsolv",
  "declaration", "type", "varname", "semi", "statement", "solution",
  "expression", "ex", "sep", "print", "var", "ifcase", "switchcase",
  "swithvalue", "defaultcase", "elseifcase", "forstatement", "ifexecution",
  "varchange", "elsecasecheck", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    52,    53,    54,
      54,    55,    55,    56,    57,    58,    59,    60,    61,    62,
      62,    62,    62,    62,    63,    64,    65,    65,    65,    65,
      66,    66,    67,    68,    68,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    72,    73,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    76,    77,    78,    79,    79,    80,    80,    80,
      80,    81,    82,    83
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     0,     8,     0,    15,     0,     0,     0,
       2,     3,     1,     0,     0,     1,     1,     1,     1,     0,
       2,     3,     2,     2,     0,     3,     1,     1,     1,     1,
       3,     1,     1,     5,     2,     0,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     5,     0,     3,     1,     1,     5,     3,
       1,     0,    10,    15,     2,    11,     2,     7,     8,     9,
       0,    10,     7,     0,     5,     0,     9,     0,     3,     1,
       1,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,    13,    15,     0,     0,    16,     0,
       0,    17,     0,    14,    18,    19,     9,    24,    26,    27,
      28,    29,     0,     0,    36,    37,     0,    57,     0,    81,
       0,     0,     0,     0,    20,     0,     5,    22,    23,     4,
      12,    10,    35,     0,     0,     0,    77,    61,    77,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    32,     0,     0,     0,     0,    34,     2,
      66,    64,     0,     0,    54,    60,     0,     0,    37,    79,
      80,     0,     0,     0,    37,    73,    31,     0,    47,    48,
      49,    50,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     0,    11,     0,    56,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,    25,     8,    33,    53,     0,
      58,    59,     0,    78,    61,     0,     0,     0,    30,     0,
      55,    61,     0,    77,    77,    70,     0,     0,    67,     0,
       0,     0,    14,    75,    68,     0,     0,     0,     0,     0,
       9,    82,    61,     0,     0,     0,    69,     0,     0,     0,
      62,     0,    73,     0,     0,     0,    83,     0,    65,     0,
       0,     0,    19,    61,     0,     0,     0,    74,    24,     0,
       0,    70,    72,     0,    82,     0,     0,     0,    63,    61,
       0,     0,     0,    71,     6,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    69,   101,   129,    22,    41,     7,    16,
       6,     9,    12,    15,    17,    33,    50,    23,    87,    68,
      70,    73,    35,   105,    36,    71,    76,    38,   141,   113,
     149,   151,    81,    45,   160,   173
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -66
static const yytype_int16 yypact[] =
{
     -66,     6,    20,   -66,   -66,   -66,     5,    31,   -66,    13,
      38,   -66,    22,   -66,   -66,   -66,   184,    17,   -66,   -66,
     -66,   -66,    40,    69,   -66,    71,    83,   -66,    72,   -66,
      35,    78,    79,   184,   -66,   141,   -66,   -66,    24,   -66,
     -66,    76,   -66,    90,   119,   106,    50,    91,    50,   118,
     -66,   130,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   -66,   -66,   -66,   118,   118,   118,   118,   -66,   116,
     -66,   -66,   133,   118,   118,   -66,   -23,   118,   136,   261,
     -66,   117,    39,   114,   -66,   261,   -66,    37,   271,   271,
     271,   271,    30,    30,   149,   149,   149,   261,   198,   261,
     261,   128,   -66,   141,   261,   -22,   125,   146,   156,   118,
     153,   120,    50,   155,   179,   -66,   -66,   -66,   -66,   118,
     -66,   -66,   157,   261,    91,   172,   166,   186,   -66,   195,
     261,    91,    81,    50,    50,   -66,   189,    85,   -66,   201,
     203,   134,   -66,   -66,   -66,   188,   207,   118,   199,   209,
     184,    54,    91,   118,   194,   121,   -66,   210,   219,   211,
     -66,   107,   261,   121,   216,   221,   -66,   224,   -66,   225,
     231,   241,   -66,    91,   118,   239,   243,   -66,    61,   291,
     208,   -66,   -66,   118,   -66,   253,   134,   246,   -66,    91,
     254,   270,   293,   -66,   -66,   -66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -66,   -66,   -66,   -66,   -66,   -66,   131,   -66,   -66,   158,
     -66,   -66,   -66,   -66,   127,   -66,   -66,   268,   -66,   -65,
     -16,   -66,   -41,   -66,   -66,   -17,   -66,   -45,   122,   140,
     123,   -66,   -14,   159,   138,   -66
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -82
static const yytype_int16 yytable[] =
{
      37,    34,    82,   106,   118,    79,     3,    79,    85,   107,
     119,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      24,    25,   115,    97,    98,    99,   100,    24,    25,    80,
       8,    80,   103,   104,    83,    10,   108,    26,   117,    11,
       4,   120,    24,    25,    26,    27,    58,    59,    60,    14,
      28,     5,    29,    24,    78,    30,    31,    28,    32,    26,
      46,    63,    47,    13,    24,    25,    39,   111,   123,   114,
      26,    79,    28,    40,    64,    65,    66,    67,   130,   132,
      42,    26,   183,    28,    24,    25,   137,    43,    24,    25,
     -81,   158,    79,    79,    28,    80,    29,    44,   126,    30,
      31,    26,    32,    48,    49,    26,   154,   161,    72,   138,
      24,    25,   162,   143,    28,    74,    80,    80,    28,   139,
     140,    24,    84,    75,    24,    25,    29,    26,   179,    30,
      31,    77,    32,   180,    86,   168,    -7,   102,    26,   164,
      28,    26,   187,   110,   192,   109,   112,   170,   116,    63,
     121,    52,    53,    54,    55,    56,    57,    58,    59,    60,
     125,    37,    34,    61,    62,    63,    52,    53,    54,    55,
      56,    57,    58,    59,    60,   146,   147,   148,    61,    62,
     124,   127,   122,   128,   131,    64,    65,    66,    67,    18,
      19,    20,    21,    64,    65,    66,    67,   133,   134,   136,
      64,    65,    66,    67,    52,    53,    54,    55,    56,    57,
      58,    59,    60,   135,   142,   152,    61,    62,    52,    53,
      54,    55,    56,    57,    58,    59,    60,   144,   163,   145,
      61,    62,   153,   155,   185,   171,   165,   156,    64,    65,
      66,    67,    64,   -82,    66,    67,   166,   167,   172,   174,
     176,   175,    64,    65,    66,    67,    52,    53,    54,    55,
      56,    57,    58,    59,    60,   177,   181,   182,    61,    62,
     191,    52,    53,    54,    55,    56,    57,    58,    59,    60,
     189,   157,   193,    61,    62,    56,    57,    58,    59,    60,
      64,    65,    66,    67,    24,    25,    24,    25,   194,   178,
     150,    51,   169,   186,     0,    64,    65,    66,    67,   190,
     159,    26,     0,    26,     0,    64,    65,    66,    67,   184,
       0,   195,   188,     0,    28,     0,    28
};

static const yytype_int16 yycheck[] =
{
      17,    17,    47,    26,    26,    46,     0,    48,    49,    32,
      32,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       3,     4,    87,    64,    65,    66,    67,     3,     4,    46,
      25,    48,    73,    74,    48,     4,    77,    20,   103,    26,
      20,   106,     3,     4,    20,    28,    16,    17,    18,    27,
      33,    31,    35,     3,     4,    38,    39,    33,    41,    20,
      25,    24,    27,    25,     3,     4,    26,    28,   109,    32,
      20,   112,    33,     4,    44,    45,    46,    47,   119,   124,
       9,    20,    21,    33,     3,     4,   131,     4,     3,     4,
      36,    37,   133,   134,    33,   112,    35,    25,   112,    38,
      39,    20,    41,    25,    25,    20,   147,   152,    32,    28,
       3,     4,   153,    28,    33,    25,   133,   134,    33,   133,
     134,     3,     4,     4,     3,     4,    35,    20,   173,    38,
      39,    25,    41,   174,     4,    28,    20,     4,    20,   155,
      33,    20,   183,    26,   189,     9,    32,   163,    20,    24,
       4,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      40,   178,   178,    22,    23,    24,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    41,    42,    43,    22,    23,
      27,    26,    26,     4,    27,    44,    45,    46,    47,     5,
       6,     7,     8,    44,    45,    46,    47,    25,    32,     4,
      44,    45,    46,    47,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    27,    25,    27,    22,    23,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    26,    34,    26,
      22,    23,    25,    34,    26,    19,    26,    28,    44,    45,
      46,    47,    44,    45,    46,    47,    27,    36,    27,    25,
      19,    26,    44,    45,    46,    47,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    24,    27,    24,    22,    23,
      24,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      27,   150,    28,    22,    23,    14,    15,    16,    17,    18,
      44,    45,    46,    47,     3,     4,     3,     4,    28,   172,
     142,    33,   162,   181,    -1,    44,    45,    46,    47,   186,
     151,    20,    -1,    20,    -1,    44,    45,    46,    47,    28,
      -1,    28,   184,    -1,    33,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,    50,     0,    20,    31,    58,    56,    25,    59,
       4,    26,    60,    25,    27,    61,    57,    62,     5,     6,
       7,     8,    54,    65,     3,     4,    20,    28,    33,    35,
      38,    39,    41,    63,    68,    70,    72,    73,    75,    26,
       4,    55,     9,     4,    25,    81,    25,    27,    25,    25,
      64,    65,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    22,    23,    24,    44,    45,    46,    47,    67,    51,
      68,    73,    32,    69,    25,     4,    74,    25,     4,    70,
      73,    80,    75,    80,     4,    70,     4,    66,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    52,     4,    70,    70,    71,    26,    32,    70,     9,
      26,    28,    32,    77,    32,    67,    20,    67,    26,    32,
      67,     4,    26,    70,    27,    40,    80,    26,     4,    53,
      70,    27,    75,    25,    32,    27,     4,    75,    28,    80,
      80,    76,    25,    28,    26,    26,    41,    42,    43,    78,
      57,    79,    27,    25,    70,    34,    28,    54,    37,    81,
      82,    75,    70,    34,    68,    26,    27,    36,    28,    77,
      68,    19,    27,    83,    25,    26,    19,    24,    62,    75,
      70,    27,    24,    21,    28,    26,    76,    70,    82,    27,
      78,    24,    75,    28,    28,    28
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 50 "Finalp.y"
    { printf("Successful compilation no error\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 53 "Finalp.y"
    {printf("Successful Function Declaration\n"); functionvalue[(yyvsp[(4) - (8)].s1).INTV]=0; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 56 "Finalp.y"
    { 
             printf("Successful Function defination\n ");
			 functionvalue[(yyvsp[(5) - (15)].s1).INTV]=(yyvsp[(13) - (15)].DOB);
			 printf("Function ");
			 for(funci=0;funci<(yyvsp[(5) - (15)].s1).INTL;funci++)
		        {
		          printf("%c",(yyvsp[(5) - (15)].s1).CHARV[funci]);
		        }
		     printf(" value is: ");
			 printf("%.2f",functionvalue[(yyvsp[(5) - (15)].s1).INTV]);
			 printf("\n");
	;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 69 "Finalp.y"
    { i=0; ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 71 "Finalp.y"
    { 
                for(funci=0;funci<500;funci++)
				  {
				    duplicatecheck[funci]=-1;
					duplicate[funci]=-1;
					iSdeclared[funci]=-1;
				  }
   ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 81 "Finalp.y"
    { ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 83 "Finalp.y"
    {
						if(functionvar==1)
						{
						  for(funci=0;functionvariableval[funci]!=-1;funci++){}
						  functionvariableval[funci]=(yyvsp[(3) - (3)].s1).INTV;
						}
                                
	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 91 "Finalp.y"
    {
                        if(functionvar==1)
						{
						  for(funci=0;functionvariableval[funci]!=-1;funci++){}
						  functionvariableval[funci]=(yyvsp[(1) - (1)].s1).INTV;
						}						
   ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 99 "Finalp.y"
    {
               for(funci=0;funci<500;funci++)
				  {
				    functionvariableval[funci]=-1;
					functionvalue[funci]=-1;
					iSdeclared[funci]=-1;
				  }
;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 108 "Finalp.y"
    { functionvar=1; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 110 "Finalp.y"
    {
                for(i=0;i<500;i++)
				  {
				    functionvar=0;
				    duplicatecheck[i]=-1;
					duplicate[i]=-1;
					iSdeclared[i]=-1;
				    
				  }
                printf("Starting main function\n");
				i=0;
			  ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 135 "Finalp.y"
    {
		   for(i=0;i<500;i++)
		   {
		     duplicatecheck[i]=-1;
		   }
		   i=0;

;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 144 "Finalp.y"
    {
                        for(j=0;j<i;j++)
						{
						  for(k=j+1;k<i;k++)
						  {
						    if(duplicatecheck[j]==duplicatecheck[k])
							{
							  printf("Duplicate declaration but Valid\n ");
							  i=-1;
							}
						  }
						}
						if(i!=-1)
						{
						  printf("Valid declaration\n");
						}
					 ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 168 "Finalp.y"
    { (yyval.s1)=(yyvsp[(3) - (3)].s1); duplicatecheck[i++]=(yyval.s1).INTV; iSdeclared[(yyvsp[(3) - (3)].s1).INTV]=1;
					    if(duplicate[(yyvsp[(3) - (3)].s1).INTV]==-1)
						{
						  duplicate[(yyvsp[(3) - (3)].s1).INTV]=1;
						}
						else
						{
						      printf("Duplicate variable : ");
							  for(varprint=0;varprint<(yyvsp[(3) - (3)].s1).INTL;varprint++)
							  {
							    printf("%c",(yyvsp[(3) - (3)].s1).CHARV[varprint]);
							  }
							  printf("\n");
						}
						if(functionvar==1)
						{
						  for(funci=0;functionvariableval[funci]!=-1;funci++){}
						  functionvariableval[funci]=(yyvsp[(3) - (3)].s1).INTV;
						}
                                
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 189 "Finalp.y"
    { (yyval.s1)=(yyvsp[(1) - (1)].s1); duplicatecheck[i++]=(yyval.s1).INTV; iSdeclared[(yyvsp[(1) - (1)].s1).INTV]=1; 
                      if(duplicate[(yyvsp[(1) - (1)].s1).INTV]==-1)
						{
						  duplicate[(yyvsp[(1) - (1)].s1).INTV]=1;
						}
						else
						{
						      printf("Duplicate variable : ");
							  for(varprint=0;varprint<(yyvsp[(1) - (1)].s1).INTL;varprint++)
							  {
							    printf("%c",(yyvsp[(1) - (1)].s1).CHARV[varprint]);
							  }
							  printf("\n");
						}
                        if(functionvar==1)
						{
						  for(funci=0;functionvariableval[funci]!=-1;funci++){}
						  functionvariableval[funci]=(yyvsp[(1) - (1)].s1).INTV;
						}						
   ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 212 "Finalp.y"
    {
                                           if(iSdeclared[(yyvsp[(1) - (5)].s1).INTV]==-1)
                                             {
											      printf("Undeclared variable : ");
												  for(varprint=0;varprint<(yyvsp[(1) - (5)].s1).INTL;varprint++)
												  {
													printf("%c",(yyvsp[(1) - (5)].s1).CHARV[varprint]);
												  }
												  printf("\n");
											 }
										   if(elsevar==1)
										   {
										      (yyval.DOB)=variablevalue[(yyvsp[(1) - (5)].s1).INTV];
										   }
										   else if(ifexecutionstarted==0)
                                                {
												  variablevalue[(yyvsp[(1) - (5)].s1).INTV]=(yyvsp[(4) - (5)].DOB);
												  (yyval.DOB)=(yyvsp[(4) - (5)].DOB);
												}
                                            else if(ifexecutionstarted==1)
                                                {
												  if(ifvalue==0)
												  {
												    (yyval.DOB)=variablevalue[(yyvsp[(1) - (5)].s1).INTV];
												  }
												  else
												  {
												    elsevar=3;
												    variablevalue[(yyvsp[(1) - (5)].s1).INTV]=(yyvsp[(4) - (5)].DOB);
												    (yyval.DOB)=(yyvsp[(4) - (5)].DOB);
												  }
												  ifexecutionstarted=0;
												  ifexecutionstarted1=0;
												}											
                                           
										 ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 250 "Finalp.y"
    { if(ifexecutionstarted==1){ifexecutionstarted1=1;} else{ifexecutionstarted=0;} ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 253 "Finalp.y"
    { (yyval.DOB)=(yyvsp[(1) - (1)].DOB); if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);}  if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;} expvalforswitch=(yyval.DOB); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 254 "Finalp.y"
    { (yyval.DOB)=variablevalue[(yyvsp[(1) - (1)].s1).INTV]; if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);} if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;} expvalforswitch=(yyval.DOB);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 255 "Finalp.y"
    { (yyval.DOB)=(yyvsp[(1) - (3)].DOB)+(yyvsp[(3) - (3)].DOB); if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);} if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;} expvalforswitch=(yyval.DOB);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 256 "Finalp.y"
    { (yyval.DOB)=(yyvsp[(1) - (3)].DOB)-(yyvsp[(3) - (3)].DOB); if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);} if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;} expvalforswitch=(yyval.DOB);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 257 "Finalp.y"
    { (yyval.DOB)=(yyvsp[(1) - (3)].DOB)*(yyvsp[(3) - (3)].DOB); if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);} if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;} expvalforswitch=(yyval.DOB);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 258 "Finalp.y"
    { if((yyvsp[(3) - (3)].DOB)>0)
                                       {
									     (yyval.DOB)=(yyvsp[(1) - (3)].DOB)/(yyvsp[(3) - (3)].DOB);
									   }
									  else
									  {
									    printf("Division by zero error\n");
										(yyval.DOB)=0;
									  }
									  if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);}
									  if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;}
									  expvalforswitch=(yyval.DOB);

								    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 272 "Finalp.y"
    { if((yyvsp[(3) - (3)].DOB)>0)
                                       {
									     (yyval.DOB)=(int)(yyvsp[(1) - (3)].DOB)%(int)(yyvsp[(3) - (3)].DOB);
									   }
									  else
									  {
									    printf("MOD by zero error\n");
										(yyval.DOB)=0;
									  }
									  if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);}
									  if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;}
									  expvalforswitch=(yyval.DOB);

								;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 286 "Finalp.y"
    { if((yyvsp[(1) - (3)].DOB)==(yyvsp[(3) - (3)].DOB))
	                              {
								    (yyval.DOB)=1;
								  }
								  else
								  {
								    (yyval.DOB)=0;
								  }
								  if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);}
								  if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;}
								  expvalforswitch=whilevalstart;
							
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 299 "Finalp.y"
    { if((yyvsp[(1) - (3)].DOB)!=(yyvsp[(3) - (3)].DOB))
	                               {
								     (yyval.DOB)=1;
								   }
								   else
								   {
								     (yyval.DOB)=0;
								   }
								   if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);}
								   if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;}
								   expvalforswitch=whilevalstart;
						
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 312 "Finalp.y"
    { if(((yyvsp[(1) - (3)].DOB)!=0) && ((yyvsp[(3) - (3)].DOB)!=0))
	                                {
									  (yyval.DOB)=1;
									}
									else
									{
									  (yyval.DOB)=0;
									}
									if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);}
									if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;}
									expvalforswitch=whilevalstart;
								
	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 325 "Finalp.y"
    { if(((yyvsp[(1) - (3)].DOB)!=0) || ((yyvsp[(3) - (3)].DOB)!=0))
	                               {
								     (yyval.DOB)=1;
								   }
								   else
								   {
								     (yyval.DOB)=0;
								   }
								   if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);}
								   if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;}
								   expvalforswitch=whilevalstart;
							
	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 338 "Finalp.y"
    { if((yyvsp[(1) - (3)].DOB)>(yyvsp[(3) - (3)].DOB))
	                                      {
										    (yyval.DOB)=1;
											forvalue=(yyvsp[(3) - (3)].DOB);
											whilevalstart=1;
										  }
										  else
										  {
										    (yyval.DOB)=0;
											forvalue=(yyvsp[(1) - (3)].DOB);
											whilevalstart=0;
										  }
										  if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);}
										  expvalforswitch=whilevalstart;
									
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 354 "Finalp.y"
    { if((yyvsp[(1) - (3)].DOB)<(yyvsp[(3) - (3)].DOB))
	                                    {
										  (yyval.DOB)=1;
										  forvalue=(yyvsp[(3) - (3)].DOB);
										  whilevalstart=1;
										}
										else
										{
										  forvalue=(yyvsp[(1) - (3)].DOB);
										  whilevalstart=0;
										  (yyval.DOB)=0;
										}
										if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);}
										expvalforswitch=whilevalstart;
								
	;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 370 "Finalp.y"
    { if((yyvsp[(1) - (3)].DOB)>=(yyvsp[(3) - (3)].DOB))
	                                          {
											    forvalue=(yyvsp[(3) - (3)].DOB)+1;
												whilevalstart=1;
											    (yyval.DOB)=1;
											  }
											  else
											  {
											    forvalue=(yyvsp[(1) - (3)].DOB);
												whilevalstart=0;
											    (yyval.DOB)=0;
											  }
											  if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);}
											  expvalforswitch=whilevalstart;
									
	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 386 "Finalp.y"
    { if((yyvsp[(1) - (3)].DOB)<=(yyvsp[(3) - (3)].DOB))
	                                       {
										     forvalue=(yyvsp[(3) - (3)].DOB)+1;
											 whilevalstart=1;
										     (yyval.DOB)=1;
										   }
										   else
										   {
										     forvalue=(yyvsp[(1) - (3)].DOB);
											 whilevalstart=0;
										     (yyval.DOB)=0;
										   }
										   if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);}
										   expvalforswitch=whilevalstart;
							
	;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 402 "Finalp.y"
    {                      (yyval.DOB)=++(yyvsp[(1) - (2)].DOB);
										   if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);
										   if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;}
										   expvalforswitch=(yyval.DOB);
										   }
							
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 409 "Finalp.y"
    {                      (yyval.DOB)=--(yyvsp[(1) - (2)].DOB);
										   if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=(yyval.DOB);
										   if((yyval.DOB)!=0){whilevalstart=1;}else{whilevalstart=0;}
										   expvalforswitch=(yyval.DOB);
										   }
							
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 416 "Finalp.y"
    {
	  if(functionvalue[(yyvsp[(2) - (5)].s1).INTV]!=-1)
	  { 
	    (yyval.DOB)=functionvalue[(yyvsp[(2) - (5)].s1).INTV];
		printf("Successfully calling Function name : ");
		for(funci=0;funci<(yyvsp[(2) - (5)].s1).INTL;funci++)
		{
		  printf("%c",(yyvsp[(2) - (5)].s1).CHARV[funci]);
		}
		printf("\n");
	  }
	  else
	  {
	    printf("NO function of name : ");
		for(funci=0;funci<(yyvsp[(2) - (5)].s1).INTL;funci++)
		{
		  printf("%c",(yyvsp[(2) - (5)].s1).CHARV[funci]);
		}
		printf("\n");
	  }
	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 440 "Finalp.y"
    { for(funci=0;functionvariableval[funci]==-1;funci++){} 
    variablevalue[functionvariableval[funci]]=(yyvsp[(3) - (3)].DOB);
	functionvariableval[funci]=-1;
  ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 444 "Finalp.y"
    { for(funci=0;functionvariableval[funci]==-1;funci++){} 
    variablevalue[functionvariableval[funci]]=(yyvsp[(1) - (1)].DOB);
	functionvariableval[funci]=-1;
  ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 453 "Finalp.y"
    {
                                                          l--;
														  printf("value is :");
                                                          for(test=0;test<=l;test++)
                                                          {
														     printf("%.2f ",store[test]);
														  }
                                                          printf("\n");
                                                          l=0;test=0;													  
                                                       ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 464 "Finalp.y"
    {
                        if(iSdeclared[(yyvsp[(3) - (3)].s1).INTV]==-1)
                          {
						    printf("Undeclared variable : ");
							for(varprint=0;varprint<(yyvsp[(3) - (3)].s1).INTL;varprint++)
							{
							  printf("%c",(yyvsp[(3) - (3)].s1).CHARV[varprint]);
							}
							printf("\n");
						  }
						 else
						 {
						   store[l++]=variablevalue[(yyvsp[(3) - (3)].s1).INTV];
						 }
                        
					   ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 480 "Finalp.y"
    {
                        if(iSdeclared[(yyvsp[(1) - (1)].s1).INTV]==-1)
                          {
						    printf("Undeclared variable : ");
							for(varprint=0;varprint<(yyvsp[(1) - (1)].s1).INTL;varprint++)
							{
							  printf("%c",(yyvsp[(1) - (1)].s1).CHARV[varprint]);
							}
							printf("\n");
						  }
						 else
						 {
						   store[l++]=variablevalue[(yyvsp[(1) - (1)].s1).INTV];
						 }
                        
              ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 499 "Finalp.y"
    { 
	      printf("Successful IF declaration\n"); 
		  if((yyvsp[(4) - (10)].DOB)!=0){ printf("IF executes\nValue of IF is %.2f\n",(yyvsp[(7) - (10)].DOB)); elseifexecuted=1; }
		  else { printf("IF doesn't execute\n"); elseifexecuted=0;}
	  ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 504 "Finalp.y"
    { 
	      printf("Successful IF declaration\n"); 
		  if((yyvsp[(4) - (15)].DOB)!=0){ printf("IF executes\nValue of IF is %.2f\n",(yyvsp[(7) - (15)].DOB)); elseifexecuted=1; }
		  else if(elseifexecuted==0){ printf("ELSE executes\nValue of ELSE is %.2f\n",(yyvsp[(13) - (15)].DOB)); }
		  
	  ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 511 "Finalp.y"
    {
	      int loopval=((yyvsp[(7) - (11)].DOB)-(yyvsp[(3) - (11)].DOB));
		  if(loopval<0)
		  {
		    loopval=-loopval;
			for(i=(yyvsp[(3) - (11)].DOB);i>forvalue;i-=loopval)
		      { printf("For loop executes\n");
		        printf("For value is %.2f \n",(yyvsp[(10) - (11)].DOB));
		      }
		  }
		  else
		  {
		    for(i=(yyvsp[(3) - (11)].DOB);i<forvalue;i+=loopval)
		      { printf("For loop executes\n");
		        printf("For value is %.2f \n",(yyvsp[(10) - (11)].DOB));
		      }
		  }
		    
		  
		  variablevalue[varlocation]=i;
	  ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 532 "Finalp.y"
    { (yyval.DOB)=(yyvsp[(2) - (2)].DOB); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 533 "Finalp.y"
    {
	    
		while(whilevalstart)
		{
		  printf("While executes\n");
		  break;
		}
		if(!whilevalstart)
		{
		  printf("While doesnot execute\n");
		}
	  ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 545 "Finalp.y"
    {
	    while(whilevalstart)
		{
		  printf("Do While executes\n");
		  break;
		}
		if(!whilevalstart)
		{
		  printf("Do While doesnot execute\n");
		}
	  ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 556 "Finalp.y"
    {
	     printf("Successful Switch declaration\n");
	     if(swithexpval)
		 {
		   printf("Switch case executes\n");
		 }
		 else
		 {
		    printf("Switch case doesnot execute\n");
		 }
		 if(switchcount==0)
		 {
		   printf("Default case executes\n");
		 }
		 else
		 {
		   switchcount=0;
		 }
	  ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 577 "Finalp.y"
    {
	     printf("Successful Switch declaration\n");
	     if(swithexpval)
		 {
		   printf("Switch case executes\n");
		 }
		 else
		 {
		    printf("Switch case doesnot execute\n");
		 }
		 if(switchcount==0)
		 {
		   printf("Default case executes\n");
		 }
		 else
		 {
		   switchcount=0;
		 }
	  ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 596 "Finalp.y"
    { if((yyvsp[(3) - (7)].DOB)==swithexpval){printf("Case %.0f executes\n",(yyvsp[(3) - (7)].DOB));switchcount=1;} ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 598 "Finalp.y"
    {swithexpval=expvalforswitch;;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 604 "Finalp.y"
    { 
	      if((yyvsp[(5) - (9)].DOB)!=0 && elseifexecuted==0 ){ printf("ELSEIF executes\nValue of ELSEIF is %.2f\n",(yyvsp[(8) - (9)].DOB)); elseifexecuted=1; }
		  else { printf("ELSEIF doesn't execute\n"); }
		  ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 610 "Finalp.y"
    { variablevalue[(yyvsp[(1) - (3)].s1).INTV]=(yyvsp[(3) - (3)].DOB); (yyval.DOB)=(yyvsp[(3) - (3)].DOB); varlocation=(yyvsp[(1) - (3)].s1).INTV; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 611 "Finalp.y"
    { (yyval.DOB)=(yyvsp[(1) - (1)].DOB); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 614 "Finalp.y"
    {ifexecutionstarted=1; ifexecutionstarted1=0;;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 616 "Finalp.y"
    {elsevar=0; ifexecutionstarted=0; ifexecutionstarted1=0; ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 618 "Finalp.y"
    {if(elsevar==3){elsevar=1;}else{elsevar=0;};}
    break;



/* Line 1455 of yacc.c  */
#line 2423 "Finalp.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 621 "Finalp.y"


int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}



