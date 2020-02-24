/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

/* Line 371 of yacc.c  */
#line 68 "c.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AUTO = 258,
     DOUBLE = 259,
     INT = 260,
     STRUCT = 261,
     BREAK = 262,
     ELSE = 263,
     LONG = 264,
     SWITCH = 265,
     CASE = 266,
     ENUM = 267,
     REGISTER = 268,
     TYPEDEF = 269,
     CHAR = 270,
     EXTERN = 271,
     RETURN = 272,
     UNION = 273,
     CONST = 274,
     FLOAT = 275,
     SHORT = 276,
     UNSIGNED = 277,
     CONTINUE = 278,
     FOR = 279,
     SIGNED = 280,
     VOID = 281,
     DEFAULT = 282,
     GOTO = 283,
     SIZEOF = 284,
     VOLATILE = 285,
     DO = 286,
     IF = 287,
     STATIC = 288,
     WHILE = 289,
     IDENTIFIER = 290,
     STRINGliteral = 291,
     FLOATINGconstant = 292,
     INTEGERconstant = 293,
     CHARACTERconstant = 294,
     OCTALconstant = 295,
     HEXconstant = 296,
     TYPEDEFname = 297,
     ARROW = 298,
     ICR = 299,
     DECR = 300,
     LS = 301,
     RS = 302,
     LE = 303,
     GE = 304,
     EQ = 305,
     NE = 306,
     ANDAND = 307,
     OROR = 308,
     ELLIPSIS = 309,
     MULTassign = 310,
     DIVassign = 311,
     MODassign = 312,
     PLUSassign = 313,
     MINUSassign = 314,
     LSassign = 315,
     RSassign = 316,
     ANDassign = 317,
     ERassign = 318,
     ORassign = 319,
     LPAREN = 320,
     RPAREN = 321,
     COMMA = 322,
     HASH = 323,
     DHASH = 324,
     LBRACE = 325,
     RBRACE = 326,
     LBRACK = 327,
     RBRACK = 328,
     DOT = 329,
     AND = 330,
     STAR = 331,
     PLUS = 332,
     MINUS = 333,
     NEGATE = 334,
     NOT = 335,
     DIV = 336,
     MOD = 337,
     LT = 338,
     GT = 339,
     XOR = 340,
     PIPE = 341,
     QUESTION = 342,
     COLON = 343,
     SEMICOLON = 344,
     ASSIGN = 345,
     ASMSYM = 346,
     _BOOL = 347,
     _COMPLEX = 348,
     RESTRICT = 349,
     __ALIGNOF = 350,
     __ALIGNOF__ = 351,
     ASM = 352,
     __ASM = 353,
     __ASM__ = 354,
     AT = 355,
     USD = 356,
     __ATTRIBUTE = 357,
     __ATTRIBUTE__ = 358,
     __BUILTIN_OFFSETOF = 359,
     __BUILTIN_TYPES_COMPATIBLE_P = 360,
     __BUILTIN_VA_ARG = 361,
     __BUILTIN_VA_LIST = 362,
     __COMPLEX__ = 363,
     __CONST = 364,
     __CONST__ = 365,
     __EXTENSION__ = 366,
     INLINE = 367,
     __INLINE = 368,
     __INLINE__ = 369,
     __LABEL__ = 370,
     __RESTRICT = 371,
     __RESTRICT__ = 372,
     __SIGNED = 373,
     __SIGNED__ = 374,
     __THREAD = 375,
     TYPEOF = 376,
     __TYPEOF = 377,
     __TYPEOF__ = 378,
     __VOLATILE = 379,
     __VOLATILE__ = 380,
     _PRAGMA = 381,
     PPNUM = 382,
     BACKSLASH = 383
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 259 "c.tab.c"

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5142

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  191
/* YYNRULES -- Number of rules.  */
#define YYNRULES  579
/* YYNRULES -- Number of states.  */
#define YYNSTATES  962

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   383

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    11,    13,    15,    17,
      19,    21,    24,    31,    39,    42,    45,    49,    53,    57,
      61,    64,    68,    72,    76,    80,    83,    87,    91,    95,
      99,   107,   116,   120,   124,   128,   132,   136,   140,   144,
     148,   152,   156,   160,   164,   166,   169,   173,   177,   181,
     185,   192,   199,   208,   215,   222,   231,   233,   235,   237,
     239,   241,   243,   245,   247,   249,   251,   253,   256,   259,
     261,   264,   266,   268,   270,   272,   274,   276,   278,   280,
     282,   284,   286,   288,   290,   292,   294,   296,   298,   300,
     302,   305,   308,   311,   314,   316,   319,   322,   325,   328,
     331,   334,   336,   339,   342,   345,   348,   351,   353,   356,
     359,   362,   365,   368,   371,   373,   376,   379,   382,   387,
     392,   394,   396,   398,   401,   404,   407,   410,   412,   415,
     418,   421,   423,   425,   427,   429,   431,   433,   435,   437,
     439,   441,   443,   445,   447,   449,   451,   453,   455,   457,
     459,   461,   463,   465,   467,   469,   476,   484,   487,   495,
     504,   508,   510,   512,   513,   516,   519,   522,   525,   528,
     530,   533,   537,   542,   546,   551,   554,   556,   559,   561,
     562,   564,   567,   572,   578,   581,   587,   594,   600,   607,
     611,   618,   626,   628,   632,   636,   640,   641,   644,   646,
     650,   652,   656,   658,   661,   666,   671,   673,   676,   681,
     683,   686,   691,   696,   698,   701,   706,   708,   712,   715,
     717,   719,   721,   724,   726,   729,   730,   733,   735,   738,
     742,   747,   749,   751,   754,   755,   759,   762,   764,   766,
     768,   771,   775,   781,   784,   787,   791,   797,   800,   802,
     804,   806,   808,   810,   812,   815,   817,   819,   822,   826,
     830,   835,   837,   842,   848,   851,   855,   859,   864,   869,
     871,   875,   877,   879,   881,   883,   886,   890,   892,   894,
     896,   901,   905,   908,   914,   917,   919,   923,   925,   927,
     930,   934,   941,   945,   950,   952,   954,   956,   958,   964,
     965,   967,   970,   974,   979,   981,   984,   987,   991,   995,
     999,  1003,  1008,  1010,  1012,  1014,  1016,  1018,  1020,  1022,
    1027,  1032,  1039,  1043,  1048,  1049,  1051,  1053,  1056,  1060,
    1062,  1066,  1067,  1070,  1072,  1074,  1076,  1078,  1081,  1084,
    1090,  1098,  1104,  1110,  1118,  1128,  1130,  1132,  1134,  1136,
    1140,  1145,  1148,  1151,  1155,  1157,  1159,  1161,  1163,  1165,
    1167,  1170,  1172,  1174,  1176,  1180,  1182,  1184,  1186,  1193,
    1199,  1201,  1203,  1205,  1207,  1209,  1211,  1213,  1215,  1220,
    1224,  1229,  1233,  1237,  1240,  1243,  1250,  1252,  1256,  1258,
    1261,  1264,  1267,  1270,  1275,  1277,  1279,  1281,  1283,  1285,
    1292,  1299,  1302,  1307,  1310,  1312,  1314,  1317,  1319,  1321,
    1323,  1325,  1327,  1329,  1331,  1336,  1338,  1342,  1346,  1350,
    1352,  1356,  1360,  1362,  1366,  1370,  1372,  1376,  1380,  1384,
    1388,  1390,  1394,  1398,  1400,  1404,  1406,  1410,  1412,  1416,
    1418,  1422,  1424,  1428,  1430,  1436,  1441,  1443,  1447,  1449,
    1451,  1453,  1455,  1457,  1459,  1461,  1463,  1465,  1467,  1469,
    1470,  1472,  1474,  1478,  1480,  1481,  1483,  1485,  1488,  1495,
    1497,  1499,  1500,  1502,  1505,  1510,  1511,  1514,  1518,  1520,
    1522,  1524,  1526,  1528,  1530,  1532,  1534,  1536,  1538,  1540,
    1542,  1544,  1546,  1548,  1550,  1552,  1554,  1556,  1558,  1560,
    1562,  1564,  1566,  1568,  1570,  1572,  1574,  1576,  1578,  1580,
    1582,  1584,  1586,  1588,  1590,  1592,  1594,  1596,  1598,  1600,
    1602,  1604,  1606,  1608,  1610,  1612,  1614,  1616,  1618,  1620,
    1622,  1624,  1626,  1628,  1630,  1632,  1634,  1636,  1638,  1640,
    1642,  1644,  1646,  1648,  1650,  1653,  1658,  1659,  1661,  1667,
    1674,  1681,  1689,  1695,  1699,  1701,  1702,  1704,  1706,  1710,
    1715,  1723,  1724,  1726,  1728,  1732,  1742,  1744,  1748,  1750,
    1752,  1754,  1755,  1756,  1757,  1758,  1759,  1760,  1761,  1762
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     130,     0,    -1,   131,    -1,    -1,   131,   132,    -1,   134,
      -1,   142,    -1,   298,    -1,   133,    -1,    89,    -1,   135,
      -1,   111,   135,    -1,   137,   318,    70,   136,   316,    71,
      -1,   138,   318,   241,    70,   136,   316,    71,    -1,   235,
     239,    -1,   214,   313,    -1,   146,   214,   311,    -1,   147,
     214,   311,    -1,   148,   214,   311,    -1,   149,   214,   311,
      -1,   224,   313,    -1,   146,   224,   311,    -1,   147,   224,
     311,    -1,   148,   224,   311,    -1,   149,   224,   311,    -1,
     224,   313,    -1,   146,   224,   311,    -1,   147,   224,   311,
      -1,   148,   224,   311,    -1,   149,   224,   311,    -1,   140,
     318,    70,   235,   239,   316,    71,    -1,   141,   318,   241,
      70,   235,   239,   316,    71,    -1,   146,   214,   311,    -1,
     147,   214,   311,    -1,   148,   214,   311,    -1,   149,   214,
     311,    -1,   146,   224,   311,    -1,   147,   224,   311,    -1,
     148,   224,   311,    -1,   149,   224,   311,    -1,   146,   224,
     311,    -1,   147,   224,   311,    -1,   148,   224,   311,    -1,
     149,   224,   311,    -1,   143,    -1,   111,   143,    -1,   158,
     319,    89,    -1,   159,   319,    89,    -1,   145,   319,    89,
      -1,   144,   319,    89,    -1,   148,   214,   311,   300,   290,
     195,    -1,   149,   214,   311,   300,   290,   195,    -1,   144,
      67,   290,   214,   312,   300,   290,   195,    -1,   146,   205,
     311,   300,   290,   195,    -1,   147,   205,   311,   300,   290,
     195,    -1,   145,    67,   290,   205,   312,   300,   290,   195,
      -1,   156,    -1,   158,    -1,   160,    -1,   166,    -1,   162,
      -1,   157,    -1,   159,    -1,   161,    -1,   167,    -1,   163,
      -1,   169,    -1,   149,   169,    -1,   148,   150,    -1,   151,
      -1,   149,   151,    -1,   151,    -1,   169,    -1,   152,    -1,
     153,    -1,   154,    -1,   292,    -1,   155,    -1,    19,    -1,
     109,    -1,   110,    -1,    30,    -1,   124,    -1,   125,    -1,
      94,    -1,   116,    -1,   117,    -1,   112,    -1,   113,    -1,
     114,    -1,   157,   169,    -1,   148,   170,    -1,   156,   150,
      -1,   156,   170,    -1,   170,    -1,   149,   170,    -1,   157,
     151,    -1,   157,   170,    -1,   159,   169,    -1,   148,   173,
      -1,   158,   150,    -1,   173,    -1,   149,   173,    -1,   159,
     151,    -1,   161,   169,    -1,   148,    42,    -1,   160,   150,
      -1,    42,    -1,   149,    42,    -1,   161,   151,    -1,   163,
     169,    -1,   148,   164,    -1,   162,   150,    -1,   162,   164,
      -1,   164,    -1,   149,   164,    -1,   163,   151,    -1,   163,
     164,    -1,   165,    65,   194,    66,    -1,   165,    65,   288,
      66,    -1,   121,    -1,   122,    -1,   123,    -1,   167,   169,
      -1,   148,   168,    -1,   166,   150,    -1,   166,   168,    -1,
     168,    -1,   149,   168,    -1,   167,   151,    -1,   167,   168,
      -1,   107,    -1,    14,    -1,    16,    -1,    33,    -1,     3,
      -1,    13,    -1,    26,    -1,    15,    -1,    21,    -1,     5,
      -1,     9,    -1,    20,    -1,     4,    -1,   171,    -1,    22,
      -1,    92,    -1,   172,    -1,    25,    -1,   118,    -1,   119,
      -1,    93,    -1,   108,    -1,   174,    -1,   184,    -1,   175,
     315,    70,   176,   316,    71,    -1,   175,   193,   315,    70,
     176,   316,    71,    -1,   175,   193,    -1,   175,   291,   315,
      70,   176,   316,    71,    -1,   175,   291,   193,   315,    70,
     176,   316,    71,    -1,   175,   291,   193,    -1,     6,    -1,
      18,    -1,    -1,   176,   177,    -1,   179,    89,    -1,   178,
      89,    -1,   149,    89,    -1,   147,    89,    -1,    89,    -1,
     111,   177,    -1,   149,   181,   290,    -1,   178,    67,   181,
     290,    -1,   147,   180,   290,    -1,   179,    67,   180,   290,
      -1,   205,   182,    -1,   183,    -1,   214,   182,    -1,   183,
      -1,    -1,   183,    -1,    88,   289,    -1,    12,    70,   185,
      71,    -1,    12,   193,    70,   185,    71,    -1,    12,   193,
      -1,    12,    70,   185,    67,    71,    -1,    12,   193,    70,
     185,    67,    71,    -1,    12,   291,    70,   185,    71,    -1,
      12,   291,   193,    70,   185,    71,    -1,    12,   291,   193,
      -1,    12,   291,    70,   185,    67,    71,    -1,    12,   291,
     193,    70,   185,    67,    71,    -1,   186,    -1,   185,    67,
     186,    -1,    35,   314,   187,    -1,    42,   314,   187,    -1,
      -1,    90,   289,    -1,   189,    -1,   189,    67,    54,    -1,
     190,    -1,   189,    67,   190,    -1,   146,    -1,   146,   226,
      -1,   146,   214,   311,   290,    -1,   146,   208,   311,   290,
      -1,   148,    -1,   148,   226,    -1,   148,   214,   311,   290,
      -1,   147,    -1,   147,   226,    -1,   147,   214,   311,   290,
      -1,   147,   208,   311,   290,    -1,   149,    -1,   149,   226,
      -1,   149,   214,   311,   290,    -1,   192,    -1,   191,    67,
     192,    -1,    35,   313,    -1,    35,    -1,    42,    -1,   147,
      -1,   147,   226,    -1,   149,    -1,   149,   226,    -1,    -1,
      90,   196,    -1,   197,    -1,   200,   197,    -1,    70,   199,
      71,    -1,    70,   199,   196,    71,    -1,   285,    -1,   199,
      -1,   199,   196,    -1,    -1,   199,   196,    67,    -1,   201,
      90,    -1,   203,    -1,   204,    -1,   202,    -1,   201,   202,
      -1,    72,   289,    73,    -1,    72,   289,    54,   289,    73,
      -1,    74,    35,    -1,    74,    42,    -1,    72,   289,    73,
      -1,    72,   289,    54,   289,    73,    -1,    35,    88,    -1,
     206,    -1,   214,    -1,   207,    -1,   211,    -1,   208,    -1,
      42,    -1,    42,   227,    -1,   209,    -1,   210,    -1,    76,
     208,    -1,    76,   149,   208,    -1,    65,   209,    66,    -1,
      65,   209,    66,   227,    -1,   212,    -1,    76,    65,   213,
      66,    -1,    76,   149,    65,   213,    66,    -1,    76,   211,
      -1,    76,   149,   211,    -1,    65,   211,    66,    -1,    65,
     213,   227,    66,    -1,    65,   211,    66,   227,    -1,    42,
      -1,    65,   213,    66,    -1,   215,    -1,   216,    -1,   222,
      -1,   217,    -1,    76,   214,    -1,    76,   149,   214,    -1,
     219,    -1,   221,    -1,   218,    -1,    65,   216,    66,   227,
      -1,    65,   216,    66,    -1,   222,   220,    -1,    65,   315,
     228,   317,    66,    -1,   222,   229,    -1,   223,    -1,    65,
     222,    66,    -1,    35,    -1,   225,    -1,    76,   224,    -1,
      76,   149,   224,    -1,   222,    65,   315,   191,   317,    66,
      -1,    65,   224,    66,    -1,    65,   224,    66,   227,    -1,
     230,    -1,   231,    -1,   227,    -1,   229,    -1,    65,   315,
     228,   317,    66,    -1,    -1,   188,    -1,    72,    73,    -1,
      72,   289,    73,    -1,   229,    72,   289,    73,    -1,    76,
      -1,    76,   149,    -1,    76,   226,    -1,    76,   149,   226,
      -1,    65,   230,    66,    -1,    65,   231,    66,    -1,    65,
     227,    66,    -1,    65,   230,    66,   227,    -1,   233,    -1,
     234,    -1,   242,    -1,   243,    -1,   244,    -1,   245,    -1,
     301,    -1,   193,    88,   290,   232,    -1,    11,   289,    88,
     232,    -1,    11,   289,    54,   289,    88,   232,    -1,    27,
      88,   232,    -1,    70,   235,   239,    71,    -1,    -1,   236,
      -1,   237,    -1,   236,   237,    -1,   115,   238,    89,    -1,
      35,    -1,   238,    67,    35,    -1,    -1,   239,   240,    -1,
     142,    -1,   232,    -1,   139,    -1,   142,    -1,   241,   142,
      -1,   287,    89,    -1,    32,    65,   288,    66,   232,    -1,
      32,    65,   288,    66,   232,     8,   232,    -1,    10,    65,
     288,    66,   232,    -1,    34,    65,   288,    66,   232,    -1,
      31,   232,    34,    65,   288,    66,    89,    -1,    24,    65,
     287,    89,   287,    89,   287,    66,   232,    -1,   246,    -1,
     247,    -1,   248,    -1,   249,    -1,    28,   193,    89,    -1,
      28,    76,   288,    89,    -1,    23,    89,    -1,     7,    89,
      -1,    17,   287,    89,    -1,    37,    -1,    38,    -1,    40,
      -1,    41,    -1,    39,    -1,    36,    -1,   251,    36,    -1,
     253,    -1,   250,    -1,   251,    -1,    65,   288,    66,    -1,
     255,    -1,   254,    -1,    35,    -1,   106,    65,   285,    67,
     194,    66,    -1,    65,   315,   234,   316,    66,    -1,   252,
      -1,   257,    -1,   258,    -1,   259,    -1,   260,    -1,   261,
      -1,   262,    -1,   263,    -1,   256,    72,   288,    73,    -1,
     256,    65,    66,    -1,   256,    65,   264,    66,    -1,   256,
      74,   193,    -1,   256,    43,   193,    -1,   256,    44,    -1,
     256,    45,    -1,    65,   194,    66,    70,   198,    71,    -1,
     285,    -1,   264,    67,   285,    -1,   256,    -1,    44,   265,
      -1,    45,   265,    -1,   272,   273,    -1,    29,   265,    -1,
      29,    65,   194,    66,    -1,   271,    -1,   269,    -1,   268,
      -1,   267,    -1,   266,    -1,   105,    65,   194,    67,   194,
      66,    -1,   104,    65,   194,    67,   256,    66,    -1,   111,
     273,    -1,   270,    65,   194,    66,    -1,   270,   265,    -1,
      96,    -1,    95,    -1,    52,    35,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,   265,
      -1,    65,   194,    66,   273,    -1,   273,    -1,   274,    76,
     273,    -1,   274,    81,   273,    -1,   274,    82,   273,    -1,
     274,    -1,   275,    77,   274,    -1,   275,    78,   274,    -1,
     275,    -1,   276,    46,   275,    -1,   276,    47,   275,    -1,
     276,    -1,   277,    83,   276,    -1,   277,    84,   276,    -1,
     277,    48,   276,    -1,   277,    49,   276,    -1,   277,    -1,
     278,    50,   277,    -1,   278,    51,   277,    -1,   278,    -1,
     279,    75,   278,    -1,   279,    -1,   280,    85,   279,    -1,
     280,    -1,   281,    86,   280,    -1,   281,    -1,   282,    52,
     281,    -1,   282,    -1,   283,    53,   282,    -1,   283,    -1,
     283,    87,   288,    88,   284,    -1,   283,    87,    88,   284,
      -1,   284,    -1,   265,   286,   285,    -1,    90,    -1,    55,
      -1,    56,    -1,    57,    -1,    58,    -1,    59,    -1,    60,
      -1,    61,    -1,    62,    -1,    63,    -1,    64,    -1,    -1,
     288,    -1,   285,    -1,   288,    67,   285,    -1,   284,    -1,
      -1,   291,    -1,   292,    -1,   291,   292,    -1,   293,    65,
      65,   294,    66,    66,    -1,   102,    -1,   103,    -1,    -1,
     295,    -1,   297,   296,    -1,   295,    67,   297,   296,    -1,
      -1,    65,    66,    -1,    65,   264,    66,    -1,    35,    -1,
       3,    -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,
      13,    -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    91,    -1,    92,    -1,    93,    -1,
      94,    -1,    95,    -1,    96,    -1,    97,    -1,    98,    -1,
      99,    -1,   102,    -1,   103,    -1,   104,    -1,   105,    -1,
     106,    -1,   107,    -1,   108,    -1,   109,    -1,   110,    -1,
     111,    -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,
     116,    -1,   117,    -1,   118,    -1,   119,    -1,   120,    -1,
     121,    -1,   122,    -1,   123,    -1,   124,    -1,   125,    -1,
     299,    89,    -1,   310,    65,   251,    66,    -1,    -1,   299,
      -1,   310,    65,   302,    66,    89,    -1,   310,    28,    65,
     308,    66,    89,    -1,   310,   151,    65,   302,    66,    89,
      -1,   251,    88,   303,    88,   303,    88,   307,    -1,   251,
      88,   303,    88,   303,    -1,   251,    88,   303,    -1,   251,
      -1,    -1,   304,    -1,   305,    -1,   304,    67,   305,    -1,
     251,    65,   288,    66,    -1,    72,   297,    73,   251,    65,
     288,    66,    -1,    -1,   307,    -1,   251,    -1,   307,    67,
     251,    -1,   251,    88,   303,    88,   303,    88,   306,    88,
     309,    -1,   192,    -1,   309,    67,   192,    -1,    97,    -1,
      98,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   171,   171,   176,   178,   182,   183,   184,   185,   189,
     193,   194,   198,   199,   205,   213,   214,   215,   216,   217,
     219,   220,   221,   222,   223,   227,   228,   229,   230,   231,
     238,   239,   243,   244,   245,   246,   248,   249,   250,   251,
     255,   256,   257,   258,   294,   295,   299,   300,   301,   302,
     309,   310,   311,   315,   316,   317,   321,   322,   323,   324,
     325,   329,   330,   331,   332,   333,   337,   338,   339,   343,
     344,   348,   349,   353,   354,   355,   356,   357,   361,   362,
     363,   367,   368,   369,   373,   374,   375,   379,   380,   381,
     385,   386,   387,   388,   392,   393,   394,   395,   399,   400,
     401,   405,   406,   407,   412,   413,   414,   418,   419,   420,
     424,   425,   426,   427,   431,   432,   433,   434,   438,   439,
     443,   444,   445,   449,   450,   451,   452,   456,   457,   458,
     459,   463,   467,   468,   469,   470,   471,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   489,   490,
     491,   495,   496,   500,   501,   505,   506,   508,   509,   510,
     512,   516,   517,   520,   522,   526,   527,   528,   529,   530,
     531,   535,   536,   540,   541,   546,   547,   551,   552,   555,
     557,   561,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   583,   584,   588,   589,   592,   594,   598,   599,
     603,   604,   608,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   629,   630,   634,   638,
     639,   643,   644,   645,   646,   649,   651,   655,   656,   665,
     666,   667,   671,   672,   675,   676,   680,   681,   682,   686,
     687,   691,   692,   693,   694,   698,   699,   703,   707,   708,
     712,   716,   717,   721,   722,   723,   730,   731,   732,   736,
     737,   744,   745,   746,   748,   749,   753,   754,   755,   759,
     760,   764,   768,   769,   773,   774,   775,   779,   780,   781,
     782,   786,   790,   794,   798,   802,   803,   807,   811,   812,
     813,   817,   818,   819,   823,   824,   825,   829,   830,   833,
     835,   839,   840,   841,   845,   846,   847,   848,   852,   853,
     854,   855,   861,   862,   863,   864,   865,   866,   867,   871,
     872,   873,   874,   885,   888,   890,   894,   895,   899,   903,
     904,   907,   908,   912,   913,   914,   918,   919,   928,   932,
     933,   934,   938,   939,   940,   945,   946,   947,   948,   952,
     953,   957,   961,   965,   972,   973,   977,   978,   979,   984,
     985,   991,   992,   993,   994,   995,   996,  1000,  1004,  1008,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1023,  1027,
    1028,  1032,  1036,  1040,  1044,  1052,  1056,  1057,  1061,  1062,
    1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,  1075,
    1079,  1083,  1087,  1088,  1092,  1093,  1097,  1101,  1102,  1103,
    1104,  1105,  1106,  1110,  1111,  1115,  1116,  1117,  1118,  1122,
    1123,  1124,  1128,  1129,  1130,  1134,  1135,  1136,  1137,  1138,
    1142,  1143,  1144,  1148,  1149,  1153,  1154,  1158,  1159,  1163,
    1164,  1168,  1169,  1173,  1174,  1176,  1181,  1182,  1186,  1187,
    1188,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1199,
    1201,  1205,  1206,  1210,  1213,  1215,  1219,  1220,  1224,  1228,
    1229,  1232,  1234,  1238,  1239,  1242,  1244,  1245,  1249,  1250,
    1251,  1252,  1253,  1254,  1255,  1256,  1257,  1258,  1259,  1260,
    1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,  1269,  1270,
    1271,  1272,  1273,  1274,  1275,  1276,  1277,  1278,  1279,  1280,
    1281,  1282,  1283,  1284,  1285,  1286,  1287,  1288,  1289,  1290,
    1291,  1292,  1293,  1294,  1295,  1296,  1297,  1298,  1299,  1300,
    1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,  1309,  1310,
    1311,  1312,  1313,  1314,  1320,  1324,  1327,  1329,  1333,  1335,
    1336,  1340,  1341,  1342,  1343,  1346,  1348,  1352,  1353,  1357,
    1358,  1361,  1363,  1367,  1368,  1372,  1376,  1377,  1381,  1382,
    1383,  1392,  1395,  1398,  1401,  1404,  1407,  1410,  1413,  1416
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "DOUBLE", "INT", "STRUCT",
  "BREAK", "ELSE", "LONG", "SWITCH", "CASE", "ENUM", "REGISTER", "TYPEDEF",
  "CHAR", "EXTERN", "RETURN", "UNION", "CONST", "FLOAT", "SHORT",
  "UNSIGNED", "CONTINUE", "FOR", "SIGNED", "VOID", "DEFAULT", "GOTO",
  "SIZEOF", "VOLATILE", "DO", "IF", "STATIC", "WHILE", "IDENTIFIER",
  "STRINGliteral", "FLOATINGconstant", "INTEGERconstant",
  "CHARACTERconstant", "OCTALconstant", "HEXconstant", "TYPEDEFname",
  "ARROW", "ICR", "DECR", "LS", "RS", "LE", "GE", "EQ", "NE", "ANDAND",
  "OROR", "ELLIPSIS", "MULTassign", "DIVassign", "MODassign", "PLUSassign",
  "MINUSassign", "LSassign", "RSassign", "ANDassign", "ERassign",
  "ORassign", "LPAREN", "RPAREN", "COMMA", "HASH", "DHASH", "LBRACE",
  "RBRACE", "LBRACK", "RBRACK", "DOT", "AND", "STAR", "PLUS", "MINUS",
  "NEGATE", "NOT", "DIV", "MOD", "LT", "GT", "XOR", "PIPE", "QUESTION",
  "COLON", "SEMICOLON", "ASSIGN", "ASMSYM", "_BOOL", "_COMPLEX",
  "RESTRICT", "__ALIGNOF", "__ALIGNOF__", "ASM", "__ASM", "__ASM__", "AT",
  "USD", "__ATTRIBUTE", "__ATTRIBUTE__", "__BUILTIN_OFFSETOF",
  "__BUILTIN_TYPES_COMPATIBLE_P", "__BUILTIN_VA_ARG", "__BUILTIN_VA_LIST",
  "__COMPLEX__", "__CONST", "__CONST__", "__EXTENSION__", "INLINE",
  "__INLINE", "__INLINE__", "__LABEL__", "__RESTRICT", "__RESTRICT__",
  "__SIGNED", "__SIGNED__", "__THREAD", "TYPEOF", "__TYPEOF", "__TYPEOF__",
  "__VOLATILE", "__VOLATILE__", "_PRAGMA", "PPNUM", "BACKSLASH", "$accept",
  "TranslationUnit", "ExternalDeclarationList", "ExternalDeclaration",
  "EmptyDefinition", "FunctionDefinitionExtension", "FunctionDefinition",
  "FunctionCompoundStatement", "FunctionPrototype", "FunctionOldPrototype",
  "NestedFunctionDefinition", "NestedFunctionPrototype",
  "NestedFunctionOldPrototype", "DeclarationExtension", "Declaration",
  "DefaultDeclaringList", "DeclaringList", "DeclarationSpecifier",
  "TypeSpecifier", "DeclarationQualifierList", "TypeQualifierList",
  "DeclarationQualifier", "TypeQualifier", "ConstQualifier",
  "VolatileQualifier", "RestrictQualifier", "FunctionSpecifier",
  "BasicDeclarationSpecifier", "BasicTypeSpecifier",
  "SUEDeclarationSpecifier", "SUETypeSpecifier",
  "TypedefDeclarationSpecifier", "TypedefTypeSpecifier",
  "TypeofDeclarationSpecifier", "TypeofTypeSpecifier", "Typeofspecifier",
  "Typeofkeyword", "VarArgDeclarationSpecifier", "VarArgTypeSpecifier",
  "VarArgTypeName", "StorageClass", "BasicTypeName", "SignedKeyword",
  "ComplexKeyword", "ElaboratedTypeName", "StructOrUnionSpecifier",
  "StructOrUnion", "StructDeclarationList", "StructDeclaration",
  "StructDefaultDeclaringList", "StructDeclaringList", "StructDeclarator",
  "StructIdentifierDeclarator", "BitFieldSizeOpt", "BitFieldSize",
  "EnumSpecifier", "EnumeratorList", "Enumerator", "EnumeratorValueOpt",
  "ParameterTypeList", "ParameterList", "ParameterDeclaration",
  "IdentifierList", "Identifier", "IdentifierOrTypedefName", "TypeName",
  "InitializerOpt", "DesignatedInitializer", "Initializer",
  "InitializerList", "MatchedInitializerList", "Designation",
  "DesignatorList", "Designator", "ObsoleteArrayDesignation",
  "ObsoleteFieldDesignation", "Declarator", "TypedefDeclarator",
  "TypedefDeclaratorMain", "ParameterTypedefDeclarator",
  "CleanTypedefDeclarator", "CleanPostfixTypedefDeclarator",
  "ParenTypedefDeclarator", "ParenPostfixTypedefDeclarator",
  "SimpleParenTypedefDeclarator", "IdentifierDeclarator",
  "IdentifierDeclaratorMain", "UnaryIdentifierDeclarator",
  "PostfixIdentifierDeclarator", "AttributedDeclarator",
  "FunctionDeclarator", "PostfixingFunctionDeclarator", "ArrayDeclarator",
  "ParenIdentifierDeclarator", "SimpleDeclarator", "OldFunctionDeclarator",
  "PostfixOldFunctionDeclarator", "AbstractDeclarator",
  "PostfixingAbstractDeclarator", "ParameterTypeListOpt",
  "ArrayAbstractDeclarator", "UnaryAbstractDeclarator",
  "PostfixAbstractDeclarator", "Statement", "LabeledStatement",
  "CompoundStatement", "LocalLabelDeclarationListOpt",
  "LocalLabelDeclarationList", "LocalLabelDeclaration", "LocalLabelList",
  "DeclarationOrStatementList", "DeclarationOrStatement",
  "DeclarationList", "ExpressionStatement", "SelectionStatement",
  "IterationStatement", "JumpStatement", "GotoStatement",
  "ContinueStatement", "BreakStatement", "ReturnStatement", "Constant",
  "StringLiteralList", "PrimaryExpression", "PrimaryIdentifier",
  "VariableArgumentAccess", "StatementAsExpression", "PostfixExpression",
  "Subscript", "FunctionCall", "DirectSelection", "IndirectSelection",
  "Increment", "Decrement", "CompoundLiteral", "ExpressionList",
  "UnaryExpression", "TypeCompatibilityExpression", "OffsetofExpression",
  "ExtensionExpression", "AlignofExpression", "Alignofkeyword",
  "LabelAddressExpression", "Unaryoperator", "CastExpression",
  "MultiplicativeExpression", "AdditiveExpression", "ShiftExpression",
  "RelationalExpression", "EqualityExpression", "AndExpression",
  "ExclusiveOrExpression", "InclusiveOrExpression", "LogicalAndExpression",
  "LogicalORExpression", "ConditionalExpression", "AssignmentExpression",
  "AssignmentOperator", "ExpressionOpt", "Expression",
  "ConstantExpression", "AttributeSpecifierListOpt",
  "AttributeSpecifierList", "AttributeSpecifier", "AttributeKeyword",
  "AttributeListOpt", "AttributeList", "AttributeExpressionOpt", "Word",
  "AssemblyDefinition", "AssemblyExpression", "AssemblyExpressionOpt",
  "AssemblyStatement", "Assemblyargument", "AssemblyoperandsOpt",
  "Assemblyoperands", "Assemblyoperand", "AssemblyclobbersOpt",
  "Assemblyclobbers", "AssemblyGotoargument", "AssemblyJumpLabels",
  "AsmKeyword", "BindIdentifier", "BindIdentifierInList", "BindVar",
  "BindEnum", "EnterScope", "ExitScope", "ExitReentrantScope",
  "ReenterScope", "KillReentrantScope", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   129,   130,   131,   131,   132,   132,   132,   132,   133,
     134,   134,   135,   135,   136,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   138,   138,   138,   138,   138,
     139,   139,   140,   140,   140,   140,   140,   140,   140,   140,
     141,   141,   141,   141,   142,   142,   143,   143,   143,   143,
     144,   144,   144,   145,   145,   145,   146,   146,   146,   146,
     146,   147,   147,   147,   147,   147,   148,   148,   148,   149,
     149,   150,   150,   151,   151,   151,   151,   151,   152,   152,
     152,   153,   153,   153,   154,   154,   154,   155,   155,   155,
     156,   156,   156,   156,   157,   157,   157,   157,   158,   158,
     158,   159,   159,   159,   160,   160,   160,   161,   161,   161,
     162,   162,   162,   162,   163,   163,   163,   163,   164,   164,
     165,   165,   165,   166,   166,   166,   166,   167,   167,   167,
     167,   168,   169,   169,   169,   169,   169,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   171,   171,
     171,   172,   172,   173,   173,   174,   174,   174,   174,   174,
     174,   175,   175,   176,   176,   177,   177,   177,   177,   177,
     177,   178,   178,   179,   179,   180,   180,   181,   181,   182,
     182,   183,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   185,   185,   186,   186,   187,   187,   188,   188,
     189,   189,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   191,   191,   192,   193,
     193,   194,   194,   194,   194,   195,   195,   196,   196,   197,
     197,   197,   198,   198,   199,   199,   200,   200,   200,   201,
     201,   202,   202,   202,   202,   203,   203,   204,   205,   205,
     206,   207,   207,   208,   208,   208,   209,   209,   209,   210,
     210,   211,   211,   211,   211,   211,   212,   212,   212,   213,
     213,   214,   215,   215,   216,   216,   216,   217,   217,   217,
     217,   218,   219,   220,   221,   222,   222,   223,   224,   224,
     224,   225,   225,   225,   226,   226,   226,   227,   227,   228,
     228,   229,   229,   229,   230,   230,   230,   230,   231,   231,
     231,   231,   232,   232,   232,   232,   232,   232,   232,   233,
     233,   233,   233,   234,   235,   235,   236,   236,   237,   238,
     238,   239,   239,   240,   240,   240,   241,   241,   242,   243,
     243,   243,   244,   244,   244,   245,   245,   245,   245,   246,
     246,   247,   248,   249,   250,   250,   250,   250,   250,   251,
     251,   252,   252,   252,   252,   252,   252,   253,   254,   255,
     256,   256,   256,   256,   256,   256,   256,   256,   257,   258,
     258,   259,   260,   261,   262,   263,   264,   264,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   266,
     267,   268,   269,   269,   270,   270,   271,   272,   272,   272,
     272,   272,   272,   273,   273,   274,   274,   274,   274,   275,
     275,   275,   276,   276,   276,   277,   277,   277,   277,   277,
     278,   278,   278,   279,   279,   280,   280,   281,   281,   282,
     282,   283,   283,   284,   284,   284,   285,   285,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   287,
     287,   288,   288,   289,   290,   290,   291,   291,   292,   293,
     293,   294,   294,   295,   295,   296,   296,   296,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   298,   299,   300,   300,   301,   301,
     301,   302,   302,   302,   302,   303,   303,   304,   304,   305,
     305,   306,   306,   307,   307,   308,   309,   309,   310,   310,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     2,     6,     7,     2,     2,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       7,     8,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     3,     3,     3,     3,
       6,     6,     8,     6,     6,     8,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     4,     4,
       1,     1,     1,     2,     2,     2,     2,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     7,     2,     7,     8,
       3,     1,     1,     0,     2,     2,     2,     2,     2,     1,
       2,     3,     4,     3,     4,     2,     1,     2,     1,     0,
       1,     2,     4,     5,     2,     5,     6,     5,     6,     3,
       6,     7,     1,     3,     3,     3,     0,     2,     1,     3,
       1,     3,     1,     2,     4,     4,     1,     2,     4,     1,
       2,     4,     4,     1,     2,     4,     1,     3,     2,     1,
       1,     1,     2,     1,     2,     0,     2,     1,     2,     3,
       4,     1,     1,     2,     0,     3,     2,     1,     1,     1,
       2,     3,     5,     2,     2,     3,     5,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     3,     3,
       4,     1,     4,     5,     2,     3,     3,     4,     4,     1,
       3,     1,     1,     1,     1,     2,     3,     1,     1,     1,
       4,     3,     2,     5,     2,     1,     3,     1,     1,     2,
       3,     6,     3,     4,     1,     1,     1,     1,     5,     0,
       1,     2,     3,     4,     1,     2,     2,     3,     3,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     6,     3,     4,     0,     1,     1,     2,     3,     1,
       3,     0,     2,     1,     1,     1,     1,     2,     2,     5,
       7,     5,     5,     7,     9,     1,     1,     1,     1,     3,
       4,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     3,     1,     1,     1,     6,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       4,     3,     3,     2,     2,     6,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     6,
       6,     2,     4,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     3,     1,     0,     1,     1,     2,     6,     1,
       1,     0,     1,     2,     4,     0,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     0,     1,     5,     6,
       6,     7,     5,     3,     1,     0,     1,     1,     3,     4,
       7,     0,     1,     1,     3,     9,     1,     3,     1,     1,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     2,     1,   135,   143,   140,   161,   141,     0,
     136,   132,   138,   133,   162,    78,   142,   139,   145,   148,
     137,    81,   134,   287,   107,     0,     0,     9,   146,   151,
      84,   568,   569,   570,   469,   470,   131,   152,    79,    80,
       0,    87,    88,    89,    85,    86,   149,   150,   120,   121,
     122,    82,    83,     4,     8,     5,    10,   578,   578,     6,
      44,   579,   579,     0,     0,     0,     0,    69,    73,    74,
      75,    77,    56,    61,    57,    62,    58,    63,    60,    65,
     114,     0,    59,    64,   127,    66,    94,   144,   147,   101,
     153,   575,   154,   573,   271,   272,   274,   279,   277,   278,
     273,   285,   573,   288,    76,     0,     7,     0,     0,   219,
     220,     0,   184,     0,   466,     0,     0,     0,     0,   275,
     289,    11,    45,     0,     0,   464,     0,   464,     0,   253,
       0,     0,   571,   248,   250,   252,   255,   256,   251,   261,
     249,   571,   571,   249,   571,   105,    68,    71,   111,   124,
      72,    91,    99,   571,   571,   108,    70,   115,   128,    67,
      95,   102,   571,   571,    92,    93,    96,    90,    97,   100,
       0,   103,    98,     0,   106,   109,   104,   112,   113,   116,
     117,   110,     0,   125,   126,   129,   130,   123,   157,   575,
       0,    15,   575,     0,   282,   284,    25,     0,   544,     0,
     574,   574,     0,   192,     0,     0,   189,   467,   281,   286,
     292,   276,   290,   324,     0,   336,     0,     0,     0,     0,
       0,     0,   465,    49,     0,    48,   575,   254,   297,   269,
       0,     0,     0,     0,     0,     0,   257,   264,   546,    16,
      26,   546,    17,    27,   546,    28,   546,    29,    46,    47,
       0,   367,   359,   354,   355,   358,   356,   357,     0,     0,
       0,   575,   407,   408,   409,   410,   411,   412,   405,   404,
       0,     0,     0,     0,   221,   223,    61,    62,    63,    65,
      64,     0,   362,   363,   370,   361,   366,   365,   388,   371,
     372,   373,   374,   375,   376,   377,   413,   398,   397,   396,
     395,     0,   394,     0,   415,   419,   422,   425,   430,   433,
     435,   437,   439,   441,   443,   446,   461,     0,     0,   160,
       0,   163,   299,   301,   413,   463,     0,     0,   471,     0,
     196,   196,     0,   182,     0,     0,     0,   280,   293,     0,
     576,   331,   325,   326,     0,     0,   249,   273,     0,     0,
     571,   571,   324,   337,   572,   572,   299,     0,   259,   266,
       0,     0,     0,   258,   265,   547,   464,   464,   464,   464,
     575,   392,   575,   389,   390,   406,     0,     0,     0,     0,
       0,     0,   401,   575,   304,   222,   296,   294,   295,   224,
     118,   360,     0,   383,   384,     0,     0,     0,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   448,     0,
     575,   403,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,   163,     0,   163,   576,   573,   202,
     209,   206,   213,    57,    62,   300,   198,   200,   577,   216,
     577,   302,     0,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   478,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,     0,
     472,   475,   545,     0,   194,   195,   185,   193,     0,   183,
       0,   187,     0,   329,     0,     0,    14,   327,     0,     0,
       0,     0,   575,     0,   546,   546,   576,   546,   546,   577,
     270,   260,   268,   267,   262,     0,   225,   225,   225,   225,
       0,     0,     0,   364,   324,   576,     0,     0,     0,     0,
       0,     0,   305,   306,   382,   379,     0,   386,     0,   381,
     447,     0,   416,   417,   418,   420,   421,   423,   424,   428,
     429,   426,   427,   431,   432,   434,   436,   438,   440,   442,
       0,     0,   462,   576,   163,   576,   169,     0,     0,     0,
     164,     0,     0,     0,   218,   575,   304,   571,   571,   203,
     571,   571,   210,   575,   304,   571,   207,   571,   214,     0,
       0,     0,     0,   303,     0,     0,     0,   473,   197,   186,
     190,     0,   188,     0,   328,    12,     0,     0,     0,   459,
       0,     0,     0,     0,   459,     0,     0,   367,   107,     0,
     335,   578,   578,   333,     0,     0,     0,     0,     0,   334,
     312,   313,   332,   314,   315,   316,   317,   345,   346,   347,
     348,     0,   460,   318,     0,     0,   299,     0,   464,   464,
       0,   263,     0,    53,    54,    50,    51,   393,     0,   234,
     414,   331,     0,     0,     0,     0,   310,   308,   309,   307,
     380,     0,   378,   402,   445,     0,     0,   576,     0,   170,
       0,   168,   464,   176,   179,   167,   464,   178,   179,     0,
     166,     0,   165,   155,   305,   464,   464,   464,   464,   305,
     464,   464,   199,   201,   217,   291,   283,   468,   475,   476,
       0,   191,   330,   352,     0,     0,     0,   351,   459,   459,
       0,     0,     0,     0,     0,     0,     0,   249,   571,   249,
     571,   571,   571,   571,   571,   464,   338,     0,     0,     0,
      13,   225,   225,   298,   367,   234,     0,     0,   226,   227,
       0,     0,   239,   237,   238,   231,     0,   232,   459,   369,
       0,     0,     0,   311,   387,   444,   156,     0,   158,   181,
     173,   175,   180,   171,   177,   464,   464,   205,   204,   212,
     211,   208,   215,   474,   477,     0,     0,   459,   353,     0,
     322,     0,   349,     0,     0,     0,   324,     0,    32,    40,
      33,    41,   546,    42,   546,    43,   459,     0,   554,     0,
       0,    52,    55,   247,     0,     0,   243,   244,   228,     0,
     236,   240,   385,   233,   323,   400,   399,   368,   159,   172,
     174,   459,     0,   320,   459,   350,     0,   459,   459,   331,
     324,   319,     0,     0,   555,     0,     0,   229,     0,     0,
     245,     0,   235,   341,   459,     0,     0,   339,   342,   459,
     331,   555,     0,     0,     0,   553,   556,   557,   548,     0,
     230,     0,     0,   241,   321,   459,     0,   459,     0,   459,
       0,   549,     0,     0,   555,     0,   550,   246,     0,     0,
     343,   340,    30,     0,   555,     0,     0,   552,   558,   242,
     459,    31,     0,     0,   559,     0,   344,   561,     0,   563,
     551,     0,   562,     0,     0,     0,   560,   564,   566,   565,
       0,   567
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    53,    54,    55,    56,   340,    57,    58,
     660,   661,   662,   663,    60,    61,    62,   216,   274,   218,
     275,   146,    67,    68,    69,    70,    71,    72,    73,    74,
     277,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,   437,   610,   611,
     612,   722,   726,   811,   723,    92,   202,   203,   524,   445,
     446,   447,   448,   449,   668,   281,   693,   788,   789,   796,
     797,   790,   791,   792,   793,   794,   132,   133,   134,   135,
     136,   137,   138,   139,   233,   119,    94,    95,    96,    97,
      98,   194,    99,   347,   101,   117,   103,   573,   386,   450,
     228,   387,   388,   669,   670,   671,   341,   342,   343,   534,
     536,   672,   220,   673,   674,   675,   676,   677,   678,   679,
     680,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   576,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   409,   681,   682,
     326,   221,   222,   104,   105,   519,   520,   637,   521,   106,
     365,   368,   683,   849,   905,   906,   907,   951,   950,   883,
     959,   684,   238,   547,   191,   330,   356,   535,   631,   123,
     126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -754
static const yytype_int16 yypact[] =
{
    -754,   167,  2156,  -754,  -754,  -754,  -754,  -754,  -754,   208,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,    68,  4120,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    2525,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,   115,   118,    50,    50,  2648,  2771,  -754,  -754,  -754,
    -754,  -754,  2214,  2214,  1201,  1201,  2344,  2344,  1138,  1138,
    -754,   160,  1253,  1253,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,   120,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
      69,  -754,  -754,  -754,  -754,   173,  -754,   162,   222,  -754,
    -754,   156,   234,   309,  -754,   243,   180,   251,  4120,  -754,
    -754,  -754,  -754,   244,  3181,   378,   211,   378,   261,   277,
     194,  4011,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
     282,  -754,  -754,   282,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
     274,  -754,  -754,   280,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  3503,  -754,  -754,  -754,  -754,  -754,   308,   120,
     325,  -754,  -754,  4553,  -754,   344,   362,   353,  -754,   412,
    -754,  -754,   248,  -754,   156,   156,   382,  -754,   277,  -754,
     277,  -754,  -754,   354,  3381,  -754,   230,   230,  2894,  3017,
    1394,   124,   378,  -754,   230,  -754,  -754,  -754,   344,  -754,
     194,   417,   424,   277,   194,  4050,  -754,  -754,   363,  -754,
     416,   363,  -754,   431,   108,   435,   295,   446,  -754,  -754,
    4853,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  4931,  4931,
     505,  3503,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
     465,   484,   487,  4953,   112,  3747,  2583,  2460,  2460,  1857,
    1331,   492,  -754,   532,  -754,  -754,  -754,  -754,   936,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,   932,  -754,  -754,  -754,
    -754,  5031,  -754,  4953,  -754,   -24,   426,   473,   109,   495,
     503,   477,   501,   544,   -19,  -754,  -754,   490,   541,   308,
     547,  -754,  3215,  -754,  -754,  -754,   550,  4953,  1910,    59,
     543,   543,    42,  -754,   320,   334,   156,  -754,  -754,   602,
    -754,  -754,   354,  -754,   324,  4067,  -754,   281,   124,  4176,
    -754,  -754,   354,  -754,  -754,  -754,  3381,   381,   277,   277,
     597,   452,   194,  -754,  -754,  -754,   378,   378,   378,   378,
    3503,  -754,  3503,  -754,  -754,  -754,   601,   504,   603,  3910,
    3910,  4953,  -754,   112,  4208,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,   346,  -754,  -754,  4575,  4953,   346,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  4953,
    3503,  -754,  -754,  4953,  4953,  4953,  4953,  4953,  4953,  4953,
    4953,  4953,  4953,  4953,  4953,  4953,  4953,  4953,  4953,  4953,
    4953,  4653,  -754,  4953,  -754,   605,  -754,  3788,  -754,   139,
     139,  2279,  2402,  2344,  2344,  -754,   607,  -754,   615,  -754,
    -754,  -754,   599,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,   629,
     632,   635,  -754,  4953,  -754,  -754,  -754,  -754,   213,  -754,
     259,  -754,   370,  -754,   119,   631,  1541,  -754,   324,   456,
     324,  4152,  -754,  4176,   363,   363,  -754,   363,   363,  -754,
    -754,  -754,  -754,  -754,  -754,   467,   616,   616,   616,   616,
     643,   645,  4675,  -754,   354,  -754,   646,   650,   651,   653,
     654,   655,  4208,  -754,  -754,  -754,   506,  -754,   -18,  -754,
    -754,   656,  -754,  -754,  -754,   -24,   -24,   426,   426,   473,
     473,   473,   473,   109,   109,   495,   503,   477,   501,   544,
    4953,    -6,  -754,  3788,  -754,  3788,  -754,  3788,    28,  3625,
    -754,   175,   187,   641,  -754,   227,  3949,  -754,  -754,  -754,
    -754,  -754,  -754,   399,  3873,  -754,  -754,  -754,  -754,  3338,
     688,   658,   667,  -754,   669,  1910,  4753,  -754,  -754,  -754,
    -754,   306,  -754,   712,  -754,  -754,   661,   689,  4953,  4953,
     666,   692,   670,    45,  4319,   694,   695,   674,   680,  2033,
    -754,  -754,  -754,  -754,    50,    50,  2648,  2771,   681,  -754,
    -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,   683,   708,  -754,  2716,   324,  3381,   715,   378,   378,
     717,  -754,  4475,  -754,  -754,  -754,  -754,   723,   723,  -754,
    -754,  -754,   721,   111,  3910,  3910,  -754,   277,  -754,  -754,
    -754,  4953,  -754,   723,  -754,  4953,   731,  3788,   733,  -754,
    4953,  -754,   378,  -754,   720,  -754,   378,  -754,   720,    18,
    -754,   341,  -754,  -754,  3949,   378,   378,   378,   378,  3873,
     378,   378,  -754,  -754,  -754,  -754,  -754,  -754,   635,  -754,
     508,  -754,  -754,  -754,  4953,    43,   724,  -754,  4953,  4319,
    4953,   726,   783,  4953,  4953,   748,  3181,   282,  -754,   282,
    -754,  -754,  -754,  -754,  -754,   378,  -754,   754,   412,   759,
    -754,   616,   616,  -754,   737,  -754,  4953,   403,  -754,  -754,
    4831,   398,  -754,  -754,  -754,  -754,   756,  4475,  1664,  -754,
     660,   762,   763,  -754,  -754,  -754,  -754,   767,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,   378,   378,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,   510,  4953,  4319,  -754,   745,
    -754,   219,  -754,   774,   514,   517,   354,  3058,  -754,   770,
    -754,   772,   345,   773,   380,   776,  4319,   412,    11,   778,
     412,  -754,  -754,  -754,  4397,    27,  -754,  -754,  -754,  4953,
    -754,  -754,  -754,   782,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  4319,   766,  -754,  4953,  -754,  4953,  4319,  4319,  -754,
     354,  -754,    26,   789,    36,   777,   801,  -754,   429,  4953,
     419,   129,  -754,  -754,  4319,   781,   524,   863,  -754,  1787,
    -754,    36,   787,  1910,    40,   784,   811,  -754,  -754,   793,
    -754,   810,  4953,  -754,  -754,  4953,   795,  4319,   815,  1787,
     800,  -754,   816,  4953,    36,    36,  -754,   420,   818,   827,
    -754,  -754,  -754,   823,    36,   412,   526,   808,  -754,  -754,
    4319,  -754,   814,   174,  -754,   412,  -754,   412,  4953,   532,
     836,   817,   836,   528,   412,   688,  -754,   532,  -754,   839,
     688,  -754
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -754,  -754,  -754,  -754,  -754,  -754,   868,   562,  -754,  -754,
    -754,  -754,  -754,     4,   -27,  -754,  -754,     1,    -1,     2,
      -2,    -3,   786,  -754,  -754,  -754,  -754,  -754,   589,  -300,
       0,  -754,   592,  -754,   725,   389,  -754,  -754,   746,   391,
     348,   604,  -754,  -754,   534,  -754,  -754,  -388,   317,  -754,
    -754,   184,   196,   188,  -549,  -754,  -176,  -302,   595,  -754,
    -754,   301,  -754,  -585,     7,  -207,  -448,  -753,   143,  -754,
     149,  -754,  -754,   144,  -754,  -754,   -53,  -754,  -754,  -108,
     352,  -754,    23,  -754,  -222,    72,  -754,   335,  -754,  -754,
    -754,  -754,  -754,   272,  -754,    25,  -754,  -208,   719,   584,
     -81,  -346,  -340,   223,  -754,   564,  -554,  -754,   606,  -754,
    -670,  -754,   177,  -754,  -754,  -754,  -754,  -754,  -754,  -754,
    -754,  -754,  -140,  -754,  -754,  -754,  -754,   241,  -754,  -754,
    -754,  -754,  -754,  -754,  -754,   311,   226,  -754,  -754,  -754,
    -754,  -754,  -754,  -754,  -134,   181,   217,   121,   237,   519,
     522,   523,   525,   530,  -754,  -161,  -331,  -754,  -613,  -175,
     233,    41,    16,     5,  -754,  -754,  -754,   207,  -618,  -754,
     954,  -220,  -754,   113,  -661,  -754,    48,  -754,    19,  -754,
    -754,     3,   769,   610,   -93,   796,    79,  -404,  -430,   -43,
     322
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -580
static const yytype_int16 yytable[] =
{
      66,    64,    75,    63,    65,   108,    59,   317,   357,   196,
     701,   142,   361,   122,   114,   124,   112,   748,   366,   195,
     632,   367,   443,   236,   118,   113,   369,   102,   334,   335,
     527,   798,   325,   613,   430,   195,   756,   570,    66,    64,
      75,    63,    65,   571,   863,   744,   603,   391,   605,   433,
     568,   120,   413,    23,   376,   712,   443,   414,   415,   329,
     727,   433,   391,    23,   577,   102,   385,   389,   431,   164,
     129,   169,   252,   174,    93,   177,   391,   200,   580,   183,
     109,   889,   715,   348,   201,    23,   377,   110,   141,   144,
     154,   163,   129,   344,   349,   391,   114,   826,   188,   884,
     890,   888,   602,    23,   345,   923,   720,   189,   903,   694,
     695,   696,    93,   526,   901,   130,   720,   721,   207,   690,
     206,   760,   219,   217,    75,   522,   131,   363,   215,   235,
     114,   827,   114,    25,   192,   140,   143,   153,   162,   382,
     555,   193,   687,   212,    26,   829,   251,   252,   253,   254,
     255,   256,   257,   232,   237,   109,   120,   420,   421,    23,
     532,   702,   110,   560,   142,   561,   325,     3,   224,   412,
     190,   355,   566,   567,    23,   812,   372,   383,   -18,   812,
     727,   129,   125,   912,   193,   127,   643,   122,   384,   348,
     211,   200,   422,   423,   207,   377,   319,   377,   201,   716,
     349,   718,   913,   581,   615,    31,    32,    33,   644,   899,
     391,   193,   219,   217,    75,   616,   717,   272,   219,   217,
      75,   578,    34,    35,   353,   182,   527,   207,   527,    23,
     919,   619,   622,   626,   628,   377,   229,   236,   197,   948,
     920,   108,   729,   109,   108,   192,   209,   108,   200,   108,
     110,   198,   193,   232,   731,   201,   601,   232,   364,   230,
     212,   895,    23,   937,   730,    23,   195,   318,   320,   570,
     131,   322,   129,   942,   100,   571,   732,   570,   111,   582,
     583,   584,   879,   571,   639,   922,   433,   199,   346,   346,
     350,   351,   615,   354,   200,   344,   346,   116,   100,   193,
     223,   201,   929,   616,   204,   577,   345,   211,   875,   208,
      34,    35,   100,   807,   213,   332,   357,   210,   361,   333,
     442,   440,   444,   439,   441,   369,   900,   688,   689,   443,
     640,   617,   620,   851,   852,   100,   100,   100,   100,   527,
     378,   200,   226,   541,   109,   614,   542,   543,   201,   193,
     225,   110,  -571,   193,   442,   440,   444,   439,   441,    23,
     115,   795,   325,   248,   709,   -19,   229,   232,   237,   249,
     958,   114,   114,   114,   114,   961,    23,   751,  -575,   205,
     804,   109,   572,   129,   128,   232,   443,   528,   110,   538,
     100,   529,    31,    32,    33,   321,   170,   173,   435,   574,
     345,   530,   116,   100,   579,   531,   344,   556,   557,   558,
     559,    34,    35,   150,   159,   -34,   327,   345,   328,   324,
     150,   167,   150,   172,   150,   176,   150,   181,   700,   720,
     150,   187,   -20,   363,    23,   609,   608,   641,   856,   714,
     169,   642,    31,    32,    33,   857,   226,   550,   252,   378,
     -35,   378,   336,   193,   148,   157,   149,   158,   195,   795,
      31,    32,    33,   555,   623,   115,   795,   178,   180,   339,
     859,   193,   787,   184,   186,   624,   371,    31,    32,    33,
      34,    35,   231,   358,   373,   374,   -21,   325,   860,   378,
     359,  -241,  -242,  -241,  -242,   918,   892,   801,   802,   324,
     910,   -22,   116,   416,   417,   -23,   116,   100,   236,  -241,
    -242,   618,   621,   625,   627,   933,   -24,   226,   554,   418,
     419,   542,   209,   795,   193,   382,   709,   411,   193,   324,
     379,   709,   226,   691,   667,   665,    75,   664,   666,   193,
     375,   589,   590,   591,   592,   424,   425,   108,   108,   380,
     108,   108,   381,   324,   805,   724,   432,   433,   390,   325,
     452,   232,   427,   232,   364,   115,   150,   159,   391,   115,
     563,   433,   710,   711,   824,   711,   871,   433,   426,   825,
     877,   433,   231,   878,   433,   831,   231,   428,   834,   835,
     916,   433,   944,   433,   956,   433,   429,   585,   586,   152,
     161,   609,   608,   609,   608,   609,   608,   148,   157,   149,
     158,   434,   142,   211,   734,   211,   539,   436,   765,   766,
     539,   686,   739,   451,   369,   325,   363,   442,   440,   444,
     439,   441,   122,   523,   116,   587,   588,   533,   848,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   219,   217,    75,
     761,   593,   594,   553,   157,   325,   158,   562,   180,   151,
     160,   186,   633,   564,   629,   604,   165,   168,   724,   115,
     346,   728,   630,   115,   442,   440,   444,   439,   441,   768,
     770,   772,   774,   114,   114,   634,   231,   115,   325,   635,
     636,   896,   645,   392,   393,   394,   692,   882,   232,   697,
     848,   698,   733,   703,   231,   609,   608,   704,   705,   706,
     707,   708,   713,   438,   745,   395,   865,   114,   325,   781,
     782,   114,   396,   746,   397,   747,   767,   769,   771,   773,
     114,   114,   114,   114,   904,   114,   114,   752,   936,   324,
     753,   325,   152,   161,   754,   757,   638,   758,   759,   763,
     764,   904,  -219,   810,   219,   217,    75,   813,  -220,   775,
     215,   276,   776,   953,   278,   433,   817,   818,   819,   820,
     114,   821,   822,   783,   904,   904,   780,   799,   324,   150,
     159,   150,   172,   699,   904,   943,   667,   665,    75,   664,
     666,   728,   806,   346,   808,   949,   211,   949,   720,   161,
     539,   211,   539,   828,   957,   832,   846,   833,   836,   847,
     114,   114,   151,   160,   850,   853,   324,   862,   866,   867,
     148,   157,   149,   158,   874,   219,   217,    75,   868,   876,
     -36,   353,   -37,   -38,   885,   108,   -39,   108,   227,   892,
     276,   147,   156,   278,   894,   902,   869,   870,   147,   166,
     147,   171,   147,   175,   147,   179,   908,   909,   147,   185,
     915,   917,   924,   115,   324,   115,   921,   762,   925,   160,
     168,   755,   926,   927,   930,   324,   932,   539,   934,   935,
     231,   939,   231,   940,   941,   539,   945,   667,   665,    75,
     664,   666,   947,   954,   156,   955,   960,   279,   121,   239,
     240,   241,   242,   243,   546,   816,   814,   667,   665,    75,
     664,   666,   244,   245,   719,   815,   525,   337,   280,   338,
     743,   246,   247,   858,   854,   861,   100,   100,   100,   100,
     549,   324,   565,   837,   800,   595,   324,   750,   537,   596,
     115,   597,   360,   809,   598,   823,   107,   539,   115,   276,
     599,   276,   278,   886,   278,   548,   952,   231,   276,   276,
       0,   278,   278,   938,     0,   152,   161,     0,     0,   392,
     393,   394,   830,     0,     0,     0,   279,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   331,   157,   276,
     158,   395,   278,     0,   147,   156,     0,   280,   396,     0,
     397,     0,   324,     0,   150,   159,     0,     0,     0,   855,
     115,   156,   408,     0,     0,     0,   276,     0,     0,   278,
       0,     0,     0,     0,     0,     0,     0,   231,     0,     0,
       0,     0,     0,     0,     0,   151,   160,     0,     0,     0,
     873,     0,   324,     0,     0,   148,   157,   149,   158,   872,
       0,   156,   166,   171,   175,   179,   185,     0,     0,   881,
       0,     0,     0,     0,     0,     0,   360,   551,   552,     0,
     360,     0,     0,     0,     0,   324,     0,     0,     0,     0,
       0,     0,   891,     0,   893,   279,     0,   279,     0,     0,
     897,   898,   569,     0,   279,   279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   324,   280,   914,   280,   544,
     545,     0,   911,     0,     0,   280,   280,     0,     0,     0,
       0,     0,     0,     0,     0,   279,     0,     0,   324,     0,
     931,     4,     0,   161,     0,   928,     0,     0,     0,     0,
       0,    10,    11,     0,    13,     0,   280,    15,     0,     0,
       0,     0,   279,   946,     0,     0,     0,     0,    21,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   280,     0,     0,     0,     0,     0,     0,
       0,     0,   276,     0,   276,   278,   276,   278,     0,   278,
     152,   161,     0,     0,     4,     0,     0,     0,     0,     0,
       0,     0,     0,   160,    10,    11,     0,    13,     0,     0,
      15,     0,     0,     0,     0,     0,     0,   147,   156,   147,
     171,    21,    30,     0,    22,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,     0,     0,    38,    39,     0,
      41,    42,    43,     0,    44,    45,     4,     0,     0,    48,
      49,    50,    51,    52,     0,     0,    10,    11,     0,    13,
     151,   160,    15,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,    22,     0,     0,     0,
    -579,     0,     0,   276,   276,    30,   278,   278,     0,     0,
       0,     0,     0,    34,    35,     0,   276,     0,     0,   278,
      38,    39,     0,    41,    42,    43,     0,    44,    45,     0,
       0,     0,     0,     0,     0,    51,    52,   156,   279,   156,
     279,     0,   279,     0,   569,     0,     0,     0,     0,     0,
       0,     0,   569,     0,     0,     0,     0,    30,     0,   280,
      15,   280,     0,   280,     0,    34,    35,     0,   156,     0,
      36,    21,    38,    39,     0,    41,    42,    43,     0,    44,
      45,     0,     0,     0,     0,     0,     0,    51,    52,     0,
       0,     0,     0,     0,     0,     0,   735,   736,     0,   737,
     738,     0,     0,     0,   740,   156,   741,     4,     5,     6,
       7,     0,     0,     8,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,    19,
      20,     0,     0,     0,    21,    30,   803,    22,     0,   279,
     279,     0,     0,    34,    35,     0,    24,     0,    36,     0,
      38,    39,   279,    41,    42,    43,     0,    44,    45,     0,
     280,   280,   147,   156,     0,    51,    52,     0,     0,     0,
       0,     0,     0,   280,   352,     0,     0,     0,     0,     0,
     779,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,     0,
       0,    36,    37,    38,    39,   214,    41,    42,    43,     0,
      44,    45,    46,    47,     0,    48,    49,    50,    51,    52,
     156,     0,     0,     0,     0,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   838,   839,   840,   841,
     842,   843,   844,   845,     4,     5,     6,     7,   646,     0,
       8,   647,   648,     9,    10,    11,    12,    13,   649,    14,
      15,    16,    17,    18,   650,   651,    19,    20,   652,   653,
     250,    21,   654,   655,    22,   656,   657,   252,   253,   254,
     255,   256,   257,   658,     0,   258,   259,     0,     0,     0,
       0,     0,     0,   260,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   261,     0,     0,     0,
       0,   564,     0,     0,     0,     0,   262,   263,   264,   265,
     266,   267,     0,     0,     0,     0,     0,     0,     0,     0,
    -459,     0,     0,    28,    29,    30,   268,   269,    31,    32,
      33,     0,     0,    34,    35,   270,   271,   272,    36,    37,
      38,    39,   659,    41,    42,    43,     0,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,     4,     5,     6,
       7,   646,     0,     8,   647,   648,     9,    10,    11,    12,
      13,   649,    14,    15,    16,    17,    18,   650,   651,    19,
      20,   652,   653,   250,    21,   654,   655,    22,   656,   657,
     252,   253,   254,   255,   256,   257,   658,     0,   258,   259,
       0,     0,     0,     0,     0,     0,   260,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   261,
       0,     0,     0,     0,   564,   864,     0,     0,     0,   262,
     263,   264,   265,   266,   267,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,   268,
     269,    31,    32,    33,     0,     0,    34,    35,   270,   271,
     272,    36,    37,    38,    39,   659,    41,    42,    43,     0,
      44,    45,    46,    47,     0,    48,    49,    50,    51,    52,
       4,     5,     6,     7,   646,     0,     8,   647,   648,     9,
      10,    11,    12,    13,   649,    14,    15,    16,    17,    18,
     650,   651,    19,    20,   652,   653,   250,    21,   654,   655,
      22,   656,   657,   252,   253,   254,   255,   256,   257,   658,
       0,   258,   259,     0,     0,     0,     0,     0,     0,   260,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   261,     0,     0,     0,     0,   564,  -576,     0,
       0,     0,   262,   263,   264,   265,   266,   267,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,     0,    28,
      29,    30,   268,   269,    31,    32,    33,    21,     0,    34,
      35,   270,   271,   272,    36,    37,    38,    39,   659,    41,
      42,    43,     0,    44,    45,    46,    47,     0,    48,    49,
      50,    51,    52,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,     0,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,    34,
      35,     0,     0,     0,     0,     0,    38,    39,     0,    41,
      42,    43,     0,    44,    45,     0,     0,     0,    48,    49,
      50,    51,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
       0,     0,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,     4,     5,     6,     7,
       0,     0,     8,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,    16,    17,    18,     0,     0,    19,    20,
       0,     0,   250,    21,     0,     0,    22,     0,   251,   252,
     253,   254,   255,   256,   257,    24,     0,   258,   259,     0,
       0,     0,     0,     0,     0,   260,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   261,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   262,   263,
     264,   265,   266,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,    30,   268,   269,
       0,     0,     0,     0,     0,    34,    35,   270,   271,   272,
      36,    37,    38,    39,   273,    41,    42,    43,     0,    44,
      45,    46,    47,     0,    48,    49,    50,    51,    52,     4,
       5,     6,     7,     0,     0,     8,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,    19,    20,     0,     0,     0,    21,     0,     0,    22,
       0,    23,     0,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     5,     6,
       0,    25,     0,     8,     0,     0,     0,    10,    11,    12,
      13,     0,    26,    15,    16,    17,    18,     0,     0,    19,
      20,     0,     0,     0,    21,    27,     0,    22,    28,    29,
      30,     0,     0,    31,    32,    33,     0,     0,    34,    35,
       0,     0,     0,    36,    37,    38,    39,    40,    41,    42,
      43,     0,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,     4,     5,     6,     7,     0,     0,     8,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,     0,     0,    19,    20,    28,    29,    30,    21,
       0,     0,    22,     0,    23,     0,    34,    35,     0,     0,
       0,   145,    37,    38,    39,     0,    41,    42,    43,     0,
      44,    45,    46,    47,     0,     0,     0,     0,    51,    52,
       0,     0,     0,     0,   623,     0,     0,     4,     0,     0,
       0,   193,     0,     0,     0,   624,     0,    10,    11,     0,
      13,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,    28,    29,    30,    21,     0,     0,    22,     0,     0,
       0,    34,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    41,    42,    43,     0,    44,    45,    46,    47,     0,
      48,    49,    50,    51,    52,     4,     5,     6,     7,     0,
       0,     8,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,    16,    17,    18,     0,     0,    19,    20,     0,
       0,     0,    21,     0,     0,    22,     0,    23,    30,     0,
       0,     0,     0,     0,   155,     0,    34,    35,     0,     0,
       0,     0,     0,    38,    39,     0,    41,    42,    43,     0,
      44,    45,     0,     0,     0,     0,     0,   623,    51,    52,
       0,     0,     0,     0,   193,     0,     0,     0,   624,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,     0,     0,    36,
      37,    38,    39,     0,    41,    42,    43,     0,    44,    45,
      46,    47,     0,    48,    49,    50,    51,    52,     4,     5,
       6,     7,     0,     0,     8,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,    16,    17,    18,     0,     0,
      19,    20,     0,     0,    30,    21,     0,     0,    22,     0,
      23,     0,    34,    35,     0,     0,     0,    24,     0,    38,
      39,     0,    41,    42,    43,     0,    44,    45,     0,     0,
       0,     0,     0,     0,    51,    52,     0,     5,     6,     0,
      25,     0,     8,     0,     0,     0,     0,     0,    12,     0,
       0,    26,    15,    16,    17,    18,     0,     0,    19,    20,
       0,     0,     0,    21,     0,     0,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,    34,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    41,    42,    43,
       0,    44,    45,    46,    47,     0,    48,    49,    50,    51,
      52,     4,     5,     6,     7,     0,     0,     8,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,    19,    20,    28,    29,    30,    21,     0,
       0,    22,     0,    23,     0,    34,    35,     0,     0,     0,
     145,    37,    38,    39,     0,    41,    42,    43,     0,    44,
      45,    46,    47,     0,     0,     0,     0,    51,    52,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
      28,    29,    30,     0,   777,     0,    21,     0,     0,     0,
      34,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      41,    42,    43,     0,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,     4,     5,     6,     7,     0,     0,
       8,   778,     0,     9,    10,    11,    12,    13,     0,    14,
      15,    16,    17,    18,     0,     0,    19,    20,     0,     0,
       0,    21,     0,     0,    22,     0,    23,     0,     0,     0,
      30,     0,     0,   155,     0,     0,     0,     0,    34,    35,
       0,     0,     0,     0,     0,    38,    39,     0,    41,    42,
      43,     0,    44,    45,     0,     0,    25,     0,     0,     0,
      51,    52,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,    34,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    41,    42,    43,     0,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,     4,     5,     6,
       7,     0,     0,     8,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,    19,
      20,     0,     0,     0,    21,     0,     0,    22,     0,    23,
       0,     0,     0,     0,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,     0,
       0,    36,    37,    38,    39,     0,    41,    42,    43,     0,
      44,    45,    46,    47,     0,    48,    49,    50,    51,    52,
       4,     5,     6,     7,     0,     0,     8,     0,     0,     9,
      10,    11,    12,    13,     0,    14,    15,    16,    17,    18,
       0,     0,    19,    20,     0,     0,     0,    21,     0,     0,
      22,     0,    23,     0,     0,     0,     0,     0,     0,   155,
       0,     4,     5,     6,     7,     0,     0,     8,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,     0,   348,    19,    20,     0,     0,     0,    21,     0,
       0,    22,     0,   349,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,    34,
      35,     0,     0,     0,    36,    37,    38,    39,   880,    41,
      42,    43,     0,    44,    45,    46,    47,     0,    48,    49,
      50,    51,    52,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,    36,    37,    38,    39,   214,
      41,    42,    43,     0,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,     4,     5,     6,     7,     0,     0,
       8,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,    16,    17,    18,     0,     0,    19,    20,     0,     0,
       0,    21,     0,     0,    22,     0,     0,     0,     4,     5,
       6,     7,     0,    24,     8,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,    16,    17,    18,     0,     0,
      19,    20,     0,     0,     0,    21,     0,     0,    22,     0,
     438,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,    34,    35,     0,     0,     0,    36,    37,
      38,    39,   214,    41,    42,    43,     0,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,    34,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    41,    42,    43,
       0,    44,    45,    46,    47,     0,    48,    49,    50,    51,
      52,     4,     5,     6,     7,     0,     0,     8,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,    19,    20,     0,     0,     0,    21,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     4,     5,     6,     7,     0,     0,
       8,     0,   742,     9,    10,    11,    12,    13,     0,    14,
      15,    16,    17,    18,     0,     0,    19,    20,     0,     0,
       0,    21,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      41,    42,    43,     0,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,    34,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    41,    42,    43,     0,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,     5,     6,     7,
       0,     0,     8,     0,     0,     9,     0,     0,    12,     0,
       0,    14,    15,    16,    17,    18,     0,     0,    19,    20,
       0,     0,   250,    21,     0,     0,     0,     0,   251,   252,
     253,   254,   255,   256,   257,    24,     0,   258,   259,     0,
       0,     0,     0,     0,     0,   260,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   261,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   262,   263,
     264,   265,   266,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,    30,   268,   269,
       0,     0,     0,     0,     0,    34,    35,   270,   271,   272,
      36,    37,    38,    39,   273,    41,    42,    43,     0,    44,
      45,    46,    47,     0,    48,    49,    50,    51,    52,     5,
       6,     7,     0,     0,     8,     0,     0,     9,     0,     0,
      12,     0,     0,    14,    15,    16,    17,    18,     0,     0,
      19,    20,     0,     0,     0,    21,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     348,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   720,   725,     0,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,    34,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    41,    42,    43,
       0,    44,    45,    46,    47,     0,    48,    49,    50,    51,
      52,     5,     6,     7,     0,     0,     8,     0,     0,     9,
       0,     0,    12,     0,     0,    14,    15,    16,    17,    18,
       0,     0,    19,    20,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   155,
       0,     0,     5,     6,     7,     0,     0,     8,     0,     0,
       9,     0,     0,    12,     0,     0,    14,    15,    16,    17,
      18,     0,   383,    19,    20,     0,     0,     0,    21,   193,
       0,     0,     0,   384,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,    34,
      35,     0,     0,     0,    36,    37,    38,    39,     0,    41,
      42,    43,     0,    44,    45,    46,    47,     0,    48,    49,
      50,    51,    52,     0,     0,     0,     0,   606,     0,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    15,     0,     0,    36,    37,    38,    39,   607,
      41,    42,    43,    21,    44,    45,    46,    47,    23,    48,
      49,    50,    51,    52,     5,     6,     7,     0,     0,     8,
       0,     0,     9,     0,     0,    12,     0,     0,    14,    15,
      16,    17,    18,     0,     0,    19,    20,     0,   623,     0,
      21,     0,     0,     0,     0,   193,     0,     0,     0,   624,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    15,     0,
       0,     0,     0,     0,     0,    34,    35,     0,     0,    21,
       0,     0,    38,    39,    23,    41,    42,    43,     0,    44,
      45,   129,     0,     0,     0,     0,     0,    51,    52,     0,
       0,     0,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,    34,    35,   615,     0,     0,    36,    37,    38,
      39,   193,    41,    42,    43,   616,    44,    45,    46,    47,
      15,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,    21,     0,    30,     0,     0,    23,     0,     0,     0,
       0,    34,    35,   129,     0,     0,     0,     0,    38,    39,
       0,    41,    42,    43,     0,    44,    45,     0,     0,    15,
       0,     0,     0,    51,    52,     0,   234,     0,     0,     0,
      21,     0,     0,     0,     0,    23,    15,   131,     0,     0,
       0,     0,   129,     0,     0,     0,     0,    21,     0,     0,
       0,     0,    23,     0,     0,    30,     0,     0,     0,   129,
       0,     0,     0,    34,    35,   362,     0,     0,     0,     0,
      38,    39,     0,    41,    42,    43,   131,    44,    45,     0,
       0,     0,   540,     0,     0,    51,    52,     0,     0,    15,
       0,     0,     0,   345,    30,     0,     0,     0,     0,     0,
      21,     0,    34,    35,     0,    23,     0,     0,     0,    38,
      39,    30,    41,    42,    43,     0,    44,    45,     0,    34,
      35,    15,     0,     0,    51,    52,    38,    39,     0,    41,
      42,    43,    21,    44,    45,    25,     0,    23,     0,     0,
       0,    51,    52,     0,   129,    15,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,    23,     0,     0,    30,     0,     0,   685,     0,     0,
       0,     0,    34,    35,     0,     0,     0,    15,   345,    38,
      39,     0,    41,    42,    43,     0,    44,    45,    21,     0,
       0,   348,     0,     0,    51,    52,    30,     0,     0,     0,
       0,     0,   349,     0,    34,    35,     0,     0,     0,     0,
       0,    38,    39,     0,    41,    42,    43,     0,    44,    45,
      30,     0,     0,   383,     0,     0,    51,    52,    34,    35,
     193,     0,     0,     0,   384,    38,    39,     0,    41,    42,
      43,     0,    44,    45,     0,     0,     0,     0,     0,     0,
      51,    52,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,     0,     0,    38,    39,     0,
      41,    42,    43,     0,    44,    45,   646,     0,     0,   647,
     648,     0,    51,    52,     0,     0,   649,     0,     0,     0,
       0,     0,   650,   651,     0,     0,   652,   653,   250,     0,
     654,   655,     0,   656,   657,   252,   253,   254,   255,   256,
     257,   110,     0,   258,   259,     0,     0,     0,     0,     0,
       0,   260,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   261,     0,     0,     0,     0,   564,
       0,     0,     0,     0,   262,   263,   264,   265,   266,   267,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   268,   269,    31,    32,    33,     0,
       0,     0,     0,   270,   271,   272,   250,     0,     0,     0,
     273,     0,   784,   252,   253,   254,   255,   256,   257,     0,
       0,   258,   259,     0,     0,     0,     0,     0,     0,   260,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   261,     0,     0,     0,     0,   785,   887,   786,
       0,   787,   262,   263,   264,   265,   266,   267,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   268,   269,     0,     0,     0,     0,     0,     0,
       0,   270,   271,   272,   250,     0,     0,     0,   273,     0,
     784,   252,   253,   254,   255,   256,   257,     0,     0,   258,
     259,     0,     0,     0,     0,     0,     0,   260,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     261,     0,     0,     0,     0,   785,     0,   786,     0,   787,
     262,   263,   264,   265,   266,   267,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     268,   269,     0,     0,     0,     0,     0,     0,     0,   270,
     271,   272,   250,     0,     0,     0,   273,     0,   251,   252,
     253,   254,   255,   256,   257,     0,     0,   258,   259,     0,
       0,     0,     0,     0,   250,   260,     0,     0,     0,     0,
     251,   252,   253,   254,   255,   256,   257,     0,   261,   258,
     259,     0,     0,     0,     0,     0,   323,   260,   262,   263,
     264,   265,   266,   267,     0,     0,     0,     0,     0,     0,
     261,   575,     0,     0,     0,     0,     0,     0,   268,   269,
     262,   263,   264,   265,   266,   267,     0,   270,   271,   272,
       0,     0,     0,     0,   273,     0,     0,     0,     0,     0,
     268,   269,     0,     0,     0,     0,     0,     0,     0,   270,
     271,   272,   250,     0,     0,     0,   273,     0,   251,   252,
     253,   254,   255,   256,   257,     0,     0,   258,   259,     0,
       0,     0,     0,     0,   250,   260,     0,     0,     0,     0,
     251,   252,   253,   254,   255,   256,   257,     0,   261,   258,
     259,     0,     0,     0,     0,     0,     0,   260,   262,   263,
     264,   265,   266,   267,     0,     0,     0,     0,     0,     0,
     261,   600,     0,     0,     0,   699,     0,     0,   268,   269,
     262,   263,   264,   265,   266,   267,     0,   270,   271,   272,
       0,     0,     0,     0,   273,     0,     0,     0,     0,     0,
     268,   269,     0,     0,     0,     0,     0,     0,     0,   270,
     271,   272,   250,     0,     0,     0,   273,     0,   251,   252,
     253,   254,   255,   256,   257,     0,     0,   258,   259,     0,
       0,     0,     0,     0,     0,   260,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   261,   749,
       0,     0,     0,     0,     0,     0,     0,     0,   262,   263,
     264,   265,   266,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   268,   269,
       0,     0,     0,     0,     0,     0,     0,   270,   271,   272,
     250,     0,     0,     0,   273,     0,   251,   252,   253,   254,
     255,   256,   257,     0,     0,   258,   259,     0,     0,     0,
       0,     0,   250,   260,     0,     0,     0,     0,   251,   252,
     253,   254,   255,   256,   257,     0,   261,   258,   259,     0,
       0,   785,     0,     0,     0,   260,   262,   263,   264,   265,
     266,   267,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,   268,   269,   262,   263,
     264,   265,   266,   267,     0,   270,   271,   272,     0,     0,
       0,     0,   273,     0,     0,     0,     0,     0,   268,   269,
       0,     0,     0,     0,     0,     0,     0,   270,   271,   272,
     250,     0,     0,     0,   273,     0,   251,   252,   253,   254,
     255,   256,   257,     0,     0,   258,   259,     0,     0,     0,
       0,     0,   250,   260,     0,     0,     0,     0,   251,   252,
     253,   254,   255,   256,   257,     0,   372,   258,   259,     0,
       0,     0,     0,     0,     0,   260,   262,   263,   264,   265,
     266,   267,     0,     0,     0,     0,     0,     0,   261,     0,
       0,     0,     0,     0,     0,     0,   268,   269,   262,   263,
     264,   265,   266,   267,     0,   270,   271,   272,     0,     0,
       0,     0,   273,     0,     0,     0,     0,     0,   268,   269,
       0,     0,     0,     0,     0,     0,     0,   270,   271,   272,
     250,     0,     0,     0,   273,     0,   251,   252,   253,   254,
     255,   256,   257,     0,     0,   258,   259,     0,     0,     0,
       0,     0,     0,   260,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   262,   263,   264,   265,
     266,   267,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   268,   269,     0,     0,
       0,     0,     0,     0,     0,   270,   271,   272,     0,     0,
       0,     0,   273
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-754)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,     2,     2,     2,     2,     2,     2,   182,   230,   102,
     564,    64,   234,    40,     9,    58,     9,   635,   238,   100,
     450,   241,   322,   131,    26,     9,   246,     2,   204,   205,
     332,   701,   193,   437,    53,   116,   649,   383,    40,    40,
      40,    40,    40,   383,   797,   630,   434,    36,   436,    67,
     381,    26,    76,    35,   261,    73,   356,    81,    82,   199,
     609,    67,    36,    35,   395,    40,   274,   275,    87,    72,
      42,    74,    36,    76,     2,    78,    36,    35,   409,    82,
      35,    54,    88,    65,    42,    35,   261,    42,    63,    64,
      65,    66,    42,    65,    76,    36,    91,    54,    91,    88,
      73,   854,   433,    35,    76,    65,    88,    91,    72,   557,
     558,   559,    40,    71,    88,    65,    88,    89,   113,   549,
     113,    76,   124,   124,   124,    66,    76,   235,   124,   131,
     125,    88,   127,    65,    65,    63,    64,    65,    66,   273,
     362,    72,   546,   118,    76,   758,    35,    36,    37,    38,
      39,    40,    41,   130,   131,    35,   131,    48,    49,    35,
     336,   565,    42,   370,   217,   372,   327,     0,   127,   303,
      91,   224,   379,   380,    35,   724,    65,    65,    70,   728,
     729,    42,    67,    54,    72,    67,    67,   214,    76,    65,
     118,    35,    83,    84,   189,   370,   189,   372,    42,   603,
      76,   605,    73,   410,    65,    97,    98,    99,    89,   879,
      36,    72,   214,   214,   214,    76,   604,   106,   220,   220,
     220,   396,   102,   103,   220,    65,   528,   222,   530,    35,
     900,   439,   440,   441,   442,   410,    42,   345,    65,    65,
     901,   238,    67,    35,   241,    65,    66,   244,    35,   246,
      42,    89,    72,   230,    67,    42,   431,   234,   235,    65,
     235,   874,    35,   924,    89,    35,   347,   188,   189,   615,
      76,   192,    42,   934,     2,   615,    89,   623,    70,   413,
     414,   415,   836,   623,    71,   903,    67,    65,   216,   217,
     218,   219,    65,   221,    35,    65,   224,    25,    26,    72,
      89,    42,   915,    76,    70,   636,    76,   235,    89,    66,
     102,   103,    40,   717,    70,    67,   538,    66,   540,    71,
     322,   322,   322,   322,   322,   545,   880,   547,   548,   629,
      71,   439,   440,   781,   782,    63,    64,    65,    66,   641,
     261,    35,    65,   345,    35,   438,    65,   349,    42,    72,
      89,    42,    70,    72,   356,   356,   356,   356,   356,    35,
      25,   692,   523,    89,   572,    70,    42,   344,   345,    89,
     955,   366,   367,   368,   369,   960,    35,    71,    70,    70,
     711,    35,   384,    42,    62,   362,   686,    67,    42,    65,
     118,    71,    97,    98,    99,    70,    74,    75,   319,   392,
      76,    67,   130,   131,   397,    71,    65,   366,   367,   368,
     369,   102,   103,    65,    66,    70,    72,    76,    65,   193,
      72,    73,    74,    75,    76,    77,    78,    79,   562,    88,
      82,    83,    70,   541,    35,   437,   437,    67,    35,   600,
     443,    71,    97,    98,    99,    42,    65,    66,    36,   370,
      70,   372,    70,    72,    65,    66,    65,    66,   539,   790,
      97,    98,    99,   685,    65,   130,   797,    78,    79,   115,
      72,    72,    74,    82,    83,    76,   250,    97,    98,    99,
     102,   103,   130,    66,   258,   259,    70,   648,    90,   410,
      66,    72,    72,    74,    74,   899,    67,   704,   705,   273,
      71,    70,   230,    77,    78,    70,   234,   235,   616,    90,
      90,   439,   440,   441,   442,   919,    70,    65,    66,    46,
      47,    65,    66,   854,    72,   659,   734,   301,    72,   303,
      65,   739,    65,    66,   536,   536,   536,   536,   536,    72,
      35,   420,   421,   422,   423,    50,    51,   544,   545,    65,
     547,   548,    65,   327,   715,   608,    66,    67,    66,   720,
     327,   538,    85,   540,   541,   230,   218,   219,    36,   234,
      66,    67,    66,    67,    66,    67,    66,    67,    75,   754,
      66,    67,   230,    66,    67,   760,   234,    86,   763,   764,
      66,    67,    66,    67,    66,    67,    52,   416,   417,    65,
      66,   603,   603,   605,   605,   607,   607,   218,   219,   218,
     219,    70,   665,   541,   616,   543,   344,    70,   661,   662,
     348,   542,   624,    73,   844,   786,   734,   629,   629,   629,
     629,   629,   659,    90,   362,   418,   419,    35,   778,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   659,   659,   659,
     653,   424,   425,    66,   275,   826,   275,    66,   279,    65,
      66,   280,    73,    70,    67,    70,    72,    73,   731,   344,
     608,   609,    67,   348,   686,   686,   686,   686,   686,   664,
     665,   666,   667,   688,   689,    66,   344,   362,   859,    67,
      65,   876,    71,    43,    44,    45,    90,   847,   685,    66,
     850,    66,    71,    67,   362,   717,   717,    67,    67,    66,
      66,    66,    66,    35,    66,    65,    66,   722,   889,   688,
     689,   726,    72,    66,    74,    66,   664,   665,   666,   667,
     735,   736,   737,   738,   884,   740,   741,    35,   923,   523,
      89,   912,   218,   219,    65,    89,   523,    65,    88,    65,
      65,   901,    88,   722,   766,   766,   766,   726,    88,    88,
     766,   182,    89,   948,   182,    67,   735,   736,   737,   738,
     775,   740,   741,    66,   924,   925,    71,    66,   562,   441,
     442,   443,   444,    70,   934,   935,   798,   798,   798,   798,
     798,   729,    71,   731,    71,   945,   734,   947,    88,   275,
     538,   739,   540,    89,   954,    89,   775,    34,    70,    65,
     815,   816,   218,   219,    65,    88,   600,    71,    66,    66,
     441,   442,   441,   442,    89,   837,   837,   837,    71,    65,
      70,   837,    70,    70,    66,   842,    70,   844,   129,    67,
     261,    65,    66,   261,    88,    66,   815,   816,    72,    73,
      74,    75,    76,    77,    78,    79,    89,    66,    82,    83,
      89,     8,    88,   538,   648,   540,    89,   654,    67,   275,
     276,   648,    89,    73,    89,   659,    71,   615,    88,    73,
     538,    73,   540,    66,    71,   623,    88,   899,   899,   899,
     899,   899,    88,    67,   118,    88,    67,   182,    40,   140,
     141,   142,   143,   144,   352,   731,   728,   919,   919,   919,
     919,   919,   153,   154,   607,   729,   331,   208,   182,   210,
     629,   162,   163,   790,   785,   791,   664,   665,   666,   667,
     356,   715,   378,   766,   703,   426,   720,   636,   342,   427,
     615,   428,   233,   720,   429,   748,     2,   685,   623,   370,
     430,   372,   370,   850,   372,   355,   947,   615,   379,   380,
      -1,   379,   380,   925,    -1,   441,   442,    -1,    -1,    43,
      44,    45,   759,    -1,    -1,    -1,   261,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,   201,   609,   410,
     609,    65,   410,    -1,   218,   219,    -1,   261,    72,    -1,
      74,    -1,   786,    -1,   666,   667,    -1,    -1,    -1,   786,
     685,   235,    90,    -1,    -1,    -1,   437,    -1,    -1,   437,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   685,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   441,   442,    -1,    -1,    -1,
     827,    -1,   826,    -1,    -1,   666,   667,   666,   667,   826,
      -1,   275,   276,   277,   278,   279,   280,    -1,    -1,   846,
      -1,    -1,    -1,    -1,    -1,    -1,   357,   358,   359,    -1,
     361,    -1,    -1,    -1,    -1,   859,    -1,    -1,    -1,    -1,
      -1,    -1,   859,    -1,   871,   370,    -1,   372,    -1,    -1,
     877,   878,   383,    -1,   379,   380,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   889,   370,   894,   372,   350,
     351,    -1,   889,    -1,    -1,   379,   380,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   410,    -1,    -1,   912,    -1,
     917,     3,    -1,   609,    -1,   912,    -1,    -1,    -1,    -1,
      -1,    13,    14,    -1,    16,    -1,   410,    19,    -1,    -1,
      -1,    -1,   437,   940,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   437,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   603,    -1,   605,   603,   607,   605,    -1,   607,
     666,   667,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   609,    13,    14,    -1,    16,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,   441,   442,   443,
     444,    30,    94,    -1,    33,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,     3,    -1,    -1,   121,
     122,   123,   124,   125,    -1,    -1,    13,    14,    -1,    16,
     666,   667,    19,    -1,   555,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,
      89,    -1,    -1,   704,   705,    94,   704,   705,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,   717,    -1,    -1,   717,
     109,   110,    -1,   112,   113,   114,    -1,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,   541,   603,   543,
     605,    -1,   607,    -1,   615,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   623,    -1,    -1,    -1,    -1,    94,    -1,   603,
      19,   605,    -1,   607,    -1,   102,   103,    -1,   572,    -1,
     107,    30,   109,   110,    -1,   112,   113,   114,    -1,   116,
     117,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   617,   618,    -1,   620,
     621,    -1,    -1,    -1,   625,   609,   627,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    30,    94,   707,    33,    -1,   704,
     705,    -1,    -1,   102,   103,    -1,    42,    -1,   107,    -1,
     109,   110,   717,   112,   113,   114,    -1,   116,   117,    -1,
     704,   705,   666,   667,    -1,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,   717,    70,    -1,    -1,    -1,    -1,    -1,
     684,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
     734,    -1,    -1,    -1,    -1,   739,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   767,   768,   769,   770,
     771,   772,   773,   774,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    71,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,    30,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,   112,
     113,   114,    -1,   116,   117,    -1,    -1,    -1,   121,   122,
     123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    29,    30,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
     117,   118,   119,    -1,   121,   122,   123,   124,   125,     3,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    65,    -1,     9,    -1,    -1,    -1,    13,    14,    15,
      16,    -1,    76,    19,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    30,    89,    -1,    33,    92,    93,
      94,    -1,    -1,    97,    98,    99,    -1,    -1,   102,   103,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    25,    26,    92,    93,    94,    30,
      -1,    -1,    33,    -1,    35,    -1,   102,   103,    -1,    -1,
      -1,    42,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,   118,   119,    -1,    -1,    -1,    -1,   124,   125,
      -1,    -1,    -1,    -1,    65,    -1,    -1,     3,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    76,    -1,    13,    14,    -1,
      16,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    30,    -1,    -1,    33,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,   114,    -1,   116,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    35,    94,    -1,
      -1,    -1,    -1,    -1,    42,    -1,   102,   103,    -1,    -1,
      -1,    -1,    -1,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,    -1,    -1,    -1,    -1,    -1,    65,   124,   125,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    94,    30,    -1,    -1,    33,    -1,
      35,    -1,   102,   103,    -1,    -1,    -1,    42,    -1,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   125,    -1,     4,     5,    -1,
      65,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    76,    19,    20,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,   114,
      -1,   116,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    92,    93,    94,    30,    -1,
      -1,    33,    -1,    35,    -1,   102,   103,    -1,    -1,    -1,
      42,   108,   109,   110,    -1,   112,   113,   114,    -1,   116,
     117,   118,   119,    -1,    -1,    -1,    -1,   124,   125,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      92,    93,    94,    -1,    28,    -1,    30,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,     3,     4,     5,     6,    -1,    -1,
       9,    65,    -1,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      94,    -1,    -1,    42,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,    -1,    -1,   109,   110,    -1,   112,   113,
     114,    -1,   116,   117,    -1,    -1,    65,    -1,    -1,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   113,   114,    -1,   116,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    65,    25,    26,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    70,   112,
     113,   114,    -1,   116,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    33,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    42,     9,    -1,    -1,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,   114,
      -1,   116,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    54,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   113,   114,    -1,   116,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    29,    30,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
     117,   118,   119,    -1,   121,   122,   123,   124,   125,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,   114,
      -1,   116,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    65,    25,    26,    -1,    -1,    -1,    30,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,   114,    -1,   116,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    19,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,   114,    30,   116,   117,   118,   119,    35,   121,
     122,   123,   124,   125,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    25,    26,    -1,    65,    -1,
      30,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    19,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    30,
      -1,    -1,   109,   110,    35,   112,   113,   114,    -1,   116,
     117,    42,    -1,    -1,    -1,    -1,    -1,   124,   125,    -1,
      -1,    -1,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    65,    -1,    -1,   107,   108,   109,
     110,    72,   112,   113,   114,    76,   116,   117,   118,   119,
      19,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    94,    -1,    -1,    35,    -1,    -1,    -1,
      -1,   102,   103,    42,    -1,    -1,    -1,    -1,   109,   110,
      -1,   112,   113,   114,    -1,   116,   117,    -1,    -1,    19,
      -1,    -1,    -1,   124,   125,    -1,    65,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    35,    19,    76,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    94,    -1,    -1,    -1,    42,
      -1,    -1,    -1,   102,   103,    65,    -1,    -1,    -1,    -1,
     109,   110,    -1,   112,   113,   114,    76,   116,   117,    -1,
      -1,    -1,    65,    -1,    -1,   124,   125,    -1,    -1,    19,
      -1,    -1,    -1,    76,    94,    -1,    -1,    -1,    -1,    -1,
      30,    -1,   102,   103,    -1,    35,    -1,    -1,    -1,   109,
     110,    94,   112,   113,   114,    -1,   116,   117,    -1,   102,
     103,    19,    -1,    -1,   124,   125,   109,   110,    -1,   112,
     113,   114,    30,   116,   117,    65,    -1,    35,    -1,    -1,
      -1,   124,   125,    -1,    42,    19,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    94,    -1,    -1,    65,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,    19,    76,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,    30,    -1,
      -1,    65,    -1,    -1,   124,   125,    94,    -1,    -1,    -1,
      -1,    -1,    76,    -1,   102,   103,    -1,    -1,    -1,    -1,
      -1,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
      94,    -1,    -1,    65,    -1,    -1,   124,   125,   102,   103,
      72,    -1,    -1,    -1,    76,   109,   110,    -1,   112,   113,
     114,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,     7,    -1,    -1,    10,
      11,    -1,   124,   125,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    29,    -1,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,    -1,
      -1,    -1,    -1,   104,   105,   106,    29,    -1,    -1,    -1,
     111,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,    29,    -1,    -1,    -1,   111,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    29,    -1,    -1,    -1,   111,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    29,    52,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    65,    44,
      45,    -1,    -1,    -1,    -1,    -1,    73,    52,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      75,    76,    77,    78,    79,    80,    -1,   104,   105,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    29,    -1,    -1,    -1,   111,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    29,    52,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    65,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    88,    -1,    -1,    -1,    70,    -1,    -1,    95,    96,
      75,    76,    77,    78,    79,    80,    -1,   104,   105,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    29,    -1,    -1,    -1,   111,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      29,    -1,    -1,    -1,   111,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    29,    52,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    65,    44,    45,    -1,
      -1,    70,    -1,    -1,    -1,    52,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    75,    76,
      77,    78,    79,    80,    -1,   104,   105,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      29,    -1,    -1,    -1,   111,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    29,    52,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    65,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    75,    76,
      77,    78,    79,    80,    -1,   104,   105,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      29,    -1,    -1,    -1,   111,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,
      -1,    -1,   111
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   130,   131,     0,     3,     4,     5,     6,     9,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    25,
      26,    30,    33,    35,    42,    65,    76,    89,    92,    93,
      94,    97,    98,    99,   102,   103,   107,   108,   109,   110,
     111,   112,   113,   114,   116,   117,   118,   119,   121,   122,
     123,   124,   125,   132,   133,   134,   135,   137,   138,   142,
     143,   144,   145,   146,   147,   148,   149,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   184,   214,   215,   216,   217,   218,   219,   221,
     222,   223,   224,   225,   292,   293,   298,   299,   310,    35,
      42,    70,   193,   291,   292,   216,   222,   224,   149,   214,
     224,   135,   143,   318,   318,    67,   319,    67,   319,    42,
      65,    76,   205,   206,   207,   208,   209,   210,   211,   212,
     214,   224,   205,   214,   224,    42,   150,   151,   164,   168,
     169,   170,   173,   214,   224,    42,   151,   164,   168,   169,
     170,   173,   214,   224,   150,   170,   151,   169,   170,   150,
     319,   151,   169,   319,   150,   151,   169,   150,   164,   151,
     164,   169,    65,   150,   168,   151,   168,   169,   193,   291,
     315,   313,    65,    72,   220,   229,   313,    65,    89,    65,
      35,    42,   185,   186,    70,    70,   193,   292,    66,    66,
      66,   214,   224,    70,   111,   142,   146,   147,   148,   149,
     241,   290,   291,    89,   290,    89,    65,   227,   229,    42,
      65,   209,   211,   213,    65,   149,   208,   211,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,    89,    89,
      29,    35,    36,    37,    38,    39,    40,    41,    44,    45,
      52,    65,    75,    76,    77,    78,    79,    80,    95,    96,
     104,   105,   106,   111,   147,   149,   157,   159,   161,   163,
     167,   194,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   288,   315,   193,
     315,    70,   315,    73,   265,   284,   289,    72,    65,   251,
     314,   314,    67,    71,   185,   185,    70,   227,   227,   115,
     136,   235,   236,   237,    65,    76,   214,   222,    65,    76,
     214,   214,    70,   142,   214,   205,   315,   213,    66,    66,
     227,   213,    65,   208,   211,   299,   300,   300,   300,   300,
      65,   265,    65,   265,   265,    35,   194,   288,   315,    65,
      65,    65,   273,    65,    76,   226,   227,   230,   231,   226,
      66,    36,    43,    44,    45,    65,    72,    74,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    90,   286,
      65,   265,   273,    76,    81,    82,    77,    78,    46,    47,
      48,    49,    83,    84,    50,    51,    75,    85,    86,    52,
      53,    87,    66,    67,    70,   315,    70,   176,    35,   146,
     147,   148,   149,   158,   159,   188,   189,   190,   191,   192,
     228,    73,   289,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   294,
     295,   297,    66,    90,   187,   187,    71,   186,    67,    71,
      67,    71,   185,    35,   238,   316,   239,   237,    65,   222,
      65,   149,    65,   149,   311,   311,   136,   312,   312,   228,
      66,   227,   227,    66,    66,   213,   290,   290,   290,   290,
     194,   194,    66,    66,    70,   234,   194,   194,   285,   227,
     230,   231,   149,   226,   193,    66,   264,   285,   288,   193,
     285,   194,   273,   273,   273,   274,   274,   275,   275,   276,
     276,   276,   276,   277,   277,   278,   279,   280,   281,   282,
      88,   288,   285,   176,    70,   176,    89,   111,   147,   149,
     177,   178,   179,   316,   313,    65,    76,   208,   214,   226,
     208,   214,   226,    65,    76,   214,   226,   214,   226,    67,
      67,   317,   317,    73,    66,    67,    65,   296,   289,    71,
      71,    67,    71,    67,    89,    71,     7,    10,    11,    17,
      23,    24,    27,    28,    31,    32,    34,    35,    42,   111,
     139,   140,   141,   142,   146,   147,   148,   149,   193,   232,
     233,   234,   240,   242,   243,   244,   245,   246,   247,   248,
     249,   287,   288,   301,   310,    65,   315,   316,   300,   300,
     317,    66,    90,   195,   195,   195,   195,    66,    66,    70,
     273,   235,   316,    67,    67,    67,    66,    66,    66,   226,
      66,    67,    73,    66,   284,    88,   316,   176,   316,   177,
      88,    89,   180,   183,   205,    89,   181,   183,   214,    67,
      89,    67,    89,    71,   149,   311,   311,   311,   311,   149,
     311,   311,    54,   190,   192,    66,    66,    66,   297,    66,
     264,    71,    35,    89,    65,   289,   287,    89,    65,    88,
      76,   193,   232,    65,    65,   318,   318,   214,   224,   214,
     224,   214,   224,   214,   224,    88,    89,    28,    65,   151,
      71,   290,   290,    66,    35,    70,    72,    74,   196,   197,
     200,   201,   202,   203,   204,   285,   198,   199,   239,    66,
     256,   194,   194,   227,   285,   284,    71,   316,    71,   289,
     290,   182,   183,   290,   182,   181,   180,   290,   290,   290,
     290,   290,   290,   296,    66,   288,    54,    88,    89,   287,
     232,   288,    89,    34,   288,   288,    70,   241,   311,   311,
     311,   311,   311,   311,   311,   311,   290,    65,   251,   302,
      65,   195,   195,    88,   199,   289,    35,    42,   197,    72,
      90,   202,    71,   196,    71,    66,    66,    66,    71,   290,
     290,    66,   289,   232,    89,    89,    65,    66,    66,   235,
      70,   232,   251,   308,    88,    66,   302,    71,   196,    54,
      73,   289,    67,   232,    88,   287,   288,   232,   232,   239,
     235,    88,    66,    72,   251,   303,   304,   305,    89,    66,
      71,   289,    54,    73,   232,    89,    66,     8,   316,   239,
     303,    89,   297,    65,    88,    67,    89,    73,   289,   287,
      89,   232,    71,   316,    88,    73,   288,   303,   305,    73,
      66,    71,   303,   251,    66,    88,   232,    88,    65,   251,
     307,   306,   307,   288,    67,    88,    66,   251,   192,   309,
      67,   192
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
      
/* Line 1802 of yacc.c  */
#line 3302 "c.tab.c"
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


