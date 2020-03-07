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
#define YYLAST   5359

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  191
/* YYNRULES -- Number of rules.  */
#define YYNRULES  581
/* YYNRULES -- Number of states.  */
#define YYNSTATES  966

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
     965,   967,   970,   974,   979,   983,   988,   990,   993,   996,
    1000,  1004,  1008,  1012,  1017,  1019,  1021,  1023,  1025,  1027,
    1029,  1031,  1036,  1041,  1048,  1052,  1057,  1058,  1060,  1062,
    1065,  1069,  1071,  1075,  1076,  1079,  1081,  1083,  1085,  1087,
    1090,  1093,  1099,  1107,  1113,  1119,  1127,  1137,  1139,  1141,
    1143,  1145,  1149,  1154,  1157,  1160,  1164,  1166,  1168,  1170,
    1172,  1174,  1176,  1179,  1181,  1183,  1185,  1189,  1191,  1193,
    1195,  1202,  1208,  1210,  1212,  1214,  1216,  1218,  1220,  1222,
    1224,  1229,  1233,  1238,  1242,  1246,  1249,  1252,  1259,  1261,
    1265,  1267,  1270,  1273,  1276,  1279,  1284,  1286,  1288,  1290,
    1292,  1294,  1301,  1308,  1311,  1316,  1319,  1321,  1323,  1326,
    1328,  1330,  1332,  1334,  1336,  1338,  1340,  1345,  1347,  1351,
    1355,  1359,  1361,  1365,  1369,  1371,  1375,  1379,  1381,  1385,
    1389,  1393,  1397,  1399,  1403,  1407,  1409,  1413,  1415,  1419,
    1421,  1425,  1427,  1431,  1433,  1437,  1439,  1445,  1450,  1452,
    1456,  1458,  1460,  1462,  1464,  1466,  1468,  1470,  1472,  1474,
    1476,  1478,  1479,  1481,  1483,  1487,  1489,  1490,  1492,  1494,
    1497,  1504,  1506,  1508,  1509,  1511,  1514,  1519,  1520,  1523,
    1527,  1529,  1531,  1533,  1535,  1537,  1539,  1541,  1543,  1545,
    1547,  1549,  1551,  1553,  1555,  1557,  1559,  1561,  1563,  1565,
    1567,  1569,  1571,  1573,  1575,  1577,  1579,  1581,  1583,  1585,
    1587,  1589,  1591,  1593,  1595,  1597,  1599,  1601,  1603,  1605,
    1607,  1609,  1611,  1613,  1615,  1617,  1619,  1621,  1623,  1625,
    1627,  1629,  1631,  1633,  1635,  1637,  1639,  1641,  1643,  1645,
    1647,  1649,  1651,  1653,  1655,  1657,  1659,  1662,  1667,  1668,
    1670,  1676,  1683,  1690,  1698,  1704,  1708,  1710,  1711,  1713,
    1715,  1719,  1724,  1732,  1733,  1735,  1737,  1741,  1751,  1753,
    1757,  1759,  1761,  1763,  1764,  1765,  1766,  1767,  1768,  1769,
    1770,  1771
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
      72,   154,    73,    -1,   229,    72,   154,    73,    -1,    72,
     289,    73,    -1,   229,    72,   289,    73,    -1,    76,    -1,
      76,   149,    -1,    76,   226,    -1,    76,   149,   226,    -1,
      65,   230,    66,    -1,    65,   231,    66,    -1,    65,   227,
      66,    -1,    65,   230,    66,   227,    -1,   233,    -1,   234,
      -1,   242,    -1,   243,    -1,   244,    -1,   245,    -1,   301,
      -1,   193,    88,   290,   232,    -1,    11,   289,    88,   232,
      -1,    11,   289,    54,   289,    88,   232,    -1,    27,    88,
     232,    -1,    70,   235,   239,    71,    -1,    -1,   236,    -1,
     237,    -1,   236,   237,    -1,   115,   238,    89,    -1,    35,
      -1,   238,    67,    35,    -1,    -1,   239,   240,    -1,   142,
      -1,   232,    -1,   139,    -1,   142,    -1,   241,   142,    -1,
     287,    89,    -1,    32,    65,   288,    66,   232,    -1,    32,
      65,   288,    66,   232,     8,   232,    -1,    10,    65,   288,
      66,   232,    -1,    34,    65,   288,    66,   232,    -1,    31,
     232,    34,    65,   288,    66,    89,    -1,    24,    65,   287,
      89,   287,    89,   287,    66,   232,    -1,   246,    -1,   247,
      -1,   248,    -1,   249,    -1,    28,   193,    89,    -1,    28,
      76,   288,    89,    -1,    23,    89,    -1,     7,    89,    -1,
      17,   287,    89,    -1,    37,    -1,    38,    -1,    40,    -1,
      41,    -1,    39,    -1,    36,    -1,   251,    36,    -1,   253,
      -1,   250,    -1,   251,    -1,    65,   288,    66,    -1,   255,
      -1,   254,    -1,    35,    -1,   106,    65,   285,    67,   194,
      66,    -1,    65,   315,   234,   316,    66,    -1,   252,    -1,
     257,    -1,   258,    -1,   259,    -1,   260,    -1,   261,    -1,
     262,    -1,   263,    -1,   256,    72,   288,    73,    -1,   256,
      65,    66,    -1,   256,    65,   264,    66,    -1,   256,    74,
     193,    -1,   256,    43,   193,    -1,   256,    44,    -1,   256,
      45,    -1,    65,   194,    66,    70,   198,    71,    -1,   285,
      -1,   264,    67,   285,    -1,   256,    -1,    44,   265,    -1,
      45,   265,    -1,   272,   273,    -1,    29,   265,    -1,    29,
      65,   194,    66,    -1,   271,    -1,   269,    -1,   268,    -1,
     267,    -1,   266,    -1,   105,    65,   194,    67,   194,    66,
      -1,   104,    65,   194,    67,   256,    66,    -1,   111,   273,
      -1,   270,    65,   194,    66,    -1,   270,   265,    -1,    96,
      -1,    95,    -1,    52,    35,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    80,    -1,   265,    -1,
      65,   194,    66,   273,    -1,   273,    -1,   274,    76,   273,
      -1,   274,    81,   273,    -1,   274,    82,   273,    -1,   274,
      -1,   275,    77,   274,    -1,   275,    78,   274,    -1,   275,
      -1,   276,    46,   275,    -1,   276,    47,   275,    -1,   276,
      -1,   277,    83,   276,    -1,   277,    84,   276,    -1,   277,
      48,   276,    -1,   277,    49,   276,    -1,   277,    -1,   278,
      50,   277,    -1,   278,    51,   277,    -1,   278,    -1,   279,
      75,   278,    -1,   279,    -1,   280,    85,   279,    -1,   280,
      -1,   281,    86,   280,    -1,   281,    -1,   282,    52,   281,
      -1,   282,    -1,   283,    53,   282,    -1,   283,    -1,   283,
      87,   288,    88,   284,    -1,   283,    87,    88,   284,    -1,
     284,    -1,   265,   286,   285,    -1,    90,    -1,    55,    -1,
      56,    -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,
      61,    -1,    62,    -1,    63,    -1,    64,    -1,    -1,   288,
      -1,   285,    -1,   288,    67,   285,    -1,   284,    -1,    -1,
     291,    -1,   292,    -1,   291,   292,    -1,   293,    65,    65,
     294,    66,    66,    -1,   102,    -1,   103,    -1,    -1,   295,
      -1,   297,   296,    -1,   295,    67,   297,   296,    -1,    -1,
      65,    66,    -1,    65,   264,    66,    -1,    35,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,
      -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    91,    -1,    92,    -1,    93,    -1,    94,
      -1,    95,    -1,    96,    -1,    97,    -1,    98,    -1,    99,
      -1,   102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,
      -1,   107,    -1,   108,    -1,   109,    -1,   110,    -1,   111,
      -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,   116,
      -1,   117,    -1,   118,    -1,   119,    -1,   120,    -1,   121,
      -1,   122,    -1,   123,    -1,   124,    -1,   125,    -1,   299,
      89,    -1,   310,    65,   251,    66,    -1,    -1,   299,    -1,
     310,    65,   302,    66,    89,    -1,   310,    28,    65,   308,
      66,    89,    -1,   310,   151,    65,   302,    66,    89,    -1,
     251,    88,   303,    88,   303,    88,   307,    -1,   251,    88,
     303,    88,   303,    -1,   251,    88,   303,    -1,   251,    -1,
      -1,   304,    -1,   305,    -1,   304,    67,   305,    -1,   251,
      65,   288,    66,    -1,    72,   297,    73,   251,    65,   288,
      66,    -1,    -1,   307,    -1,   251,    -1,   307,    67,   251,
      -1,   251,    88,   303,    88,   303,    88,   306,    88,   309,
      -1,   192,    -1,   309,    67,   192,    -1,    97,    -1,    98,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1
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
     835,   839,   840,   841,   842,   843,   847,   848,   849,   850,
     854,   855,   856,   857,   863,   864,   865,   866,   867,   868,
     869,   873,   874,   875,   876,   887,   890,   892,   896,   897,
     901,   905,   906,   909,   910,   914,   915,   916,   920,   921,
     930,   934,   935,   936,   940,   941,   942,   947,   948,   949,
     950,   954,   955,   959,   963,   967,   974,   975,   979,   980,
     981,   986,   987,   993,   994,   995,   996,   997,   998,  1002,
    1006,  1010,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1025,  1029,  1030,  1034,  1038,  1042,  1046,  1054,  1058,  1059,
    1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,  1072,
    1073,  1077,  1081,  1085,  1089,  1090,  1094,  1095,  1099,  1103,
    1104,  1105,  1106,  1107,  1108,  1112,  1113,  1117,  1118,  1119,
    1120,  1124,  1125,  1126,  1130,  1131,  1132,  1136,  1137,  1138,
    1139,  1140,  1144,  1145,  1146,  1150,  1151,  1155,  1156,  1160,
    1161,  1165,  1166,  1170,  1171,  1175,  1176,  1178,  1183,  1184,
    1188,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,
    1198,  1201,  1203,  1207,  1208,  1212,  1215,  1217,  1221,  1222,
    1226,  1230,  1231,  1234,  1236,  1240,  1241,  1244,  1246,  1247,
    1251,  1252,  1253,  1254,  1255,  1256,  1257,  1258,  1259,  1260,
    1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,  1269,  1270,
    1271,  1272,  1273,  1274,  1275,  1276,  1277,  1278,  1279,  1280,
    1281,  1282,  1283,  1284,  1285,  1286,  1287,  1288,  1289,  1290,
    1291,  1292,  1293,  1294,  1295,  1296,  1297,  1298,  1299,  1300,
    1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,  1309,  1310,
    1311,  1312,  1313,  1314,  1315,  1316,  1322,  1326,  1329,  1331,
    1335,  1337,  1338,  1342,  1343,  1344,  1345,  1348,  1350,  1354,
    1355,  1359,  1360,  1363,  1365,  1369,  1370,  1374,  1378,  1379,
    1383,  1384,  1385,  1394,  1397,  1400,  1403,  1406,  1409,  1412,
    1415,  1418
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
     228,   229,   229,   229,   229,   229,   230,   230,   230,   230,
     231,   231,   231,   231,   232,   232,   232,   232,   232,   232,
     232,   233,   233,   233,   233,   234,   235,   235,   236,   236,
     237,   238,   238,   239,   239,   240,   240,   240,   241,   241,
     242,   243,   243,   243,   244,   244,   244,   245,   245,   245,
     245,   246,   246,   247,   248,   249,   250,   250,   250,   250,
     250,   251,   251,   252,   252,   252,   252,   252,   252,   253,
     254,   255,   256,   256,   256,   256,   256,   256,   256,   256,
     257,   258,   258,   259,   260,   261,   262,   263,   264,   264,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   266,   267,   268,   269,   269,   270,   270,   271,   272,
     272,   272,   272,   272,   272,   273,   273,   274,   274,   274,
     274,   275,   275,   275,   276,   276,   276,   277,   277,   277,
     277,   277,   278,   278,   278,   279,   279,   280,   280,   281,
     281,   282,   282,   283,   283,   284,   284,   284,   285,   285,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   287,   287,   288,   288,   289,   290,   290,   291,   291,
     292,   293,   293,   294,   294,   295,   295,   296,   296,   296,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   298,   299,   300,   300,
     301,   301,   301,   302,   302,   302,   302,   303,   303,   304,
     304,   305,   305,   306,   306,   307,   307,   308,   309,   309,
     310,   310,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319
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
       1,     2,     3,     4,     3,     4,     1,     2,     2,     3,
       3,     3,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     6,     3,     4,     0,     1,     1,     2,
       3,     1,     3,     0,     2,     1,     1,     1,     1,     2,
       2,     5,     7,     5,     5,     7,     9,     1,     1,     1,
       1,     3,     4,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     1,     1,     1,
       6,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     6,     6,     2,     4,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     3,     1,     0,     1,     1,     2,
       6,     1,     1,     0,     1,     2,     4,     0,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     0,     1,
       5,     6,     6,     7,     5,     3,     1,     0,     1,     1,
       3,     4,     7,     0,     1,     1,     3,     9,     1,     3,
       1,     1,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     2,     1,   135,   143,   140,   161,   141,     0,
     136,   132,   138,   133,   162,    78,   142,   139,   145,   148,
     137,    81,   134,   287,   107,     0,     0,     9,   146,   151,
      84,   570,   571,   572,   471,   472,   131,   152,    79,    80,
       0,    87,    88,    89,    85,    86,   149,   150,   120,   121,
     122,    82,    83,     4,     8,     5,    10,   580,   580,     6,
      44,   581,   581,     0,     0,     0,     0,    69,    73,    74,
      75,    77,    56,    61,    57,    62,    58,    63,    60,    65,
     114,     0,    59,    64,   127,    66,    94,   144,   147,   101,
     153,   577,   154,   575,   271,   272,   274,   279,   277,   278,
     273,   285,   575,   288,    76,     0,     7,     0,     0,   219,
     220,     0,   184,     0,   468,     0,     0,     0,     0,   275,
     289,    11,    45,     0,     0,   466,     0,   466,     0,   253,
       0,     0,   573,   248,   250,   252,   255,   256,   251,   261,
     249,   573,   573,   249,   573,   105,    68,    71,   111,   124,
      72,    91,    99,   573,   573,   108,    70,   115,   128,    67,
      95,   102,   573,   573,    92,    93,    96,    90,    97,   100,
       0,   103,    98,     0,   106,   109,   104,   112,   113,   116,
     117,   110,     0,   125,   126,   129,   130,   123,   157,   577,
       0,    15,   577,     0,   282,   284,    25,     0,   546,     0,
     576,   576,     0,   192,     0,     0,   189,   469,   281,   286,
     292,   276,   290,   326,     0,   338,     0,     0,     0,     0,
       0,     0,   467,    49,     0,    48,   577,   254,   297,   269,
       0,     0,     0,     0,     0,     0,   257,   264,   548,    16,
      26,   548,    17,    27,   548,    28,   548,    29,    46,    47,
       0,   369,   361,   356,   357,   360,   358,   359,     0,     0,
       0,   577,   409,   410,   411,   412,   413,   414,   407,   406,
       0,     0,     0,     0,   221,   223,    61,    62,    63,    65,
      64,     0,   364,   365,   372,   363,   368,   367,   390,   373,
     374,   375,   376,   377,   378,   379,   415,   400,   399,   398,
     397,     0,   396,     0,   417,   421,   424,   427,   432,   435,
     437,   439,   441,   443,   445,   448,   463,     0,     0,   160,
       0,   163,   299,   301,     0,   415,   465,     0,     0,   473,
       0,   196,   196,     0,   182,     0,     0,     0,   280,   293,
       0,   578,   333,   327,   328,     0,     0,   249,   273,     0,
       0,   573,   573,   326,   339,   574,   574,   299,     0,   259,
     266,     0,     0,     0,   258,   265,   549,   466,   466,   466,
     466,   577,   394,   577,   391,   392,   408,     0,     0,     0,
       0,     0,     0,   403,   577,   306,   222,   296,   294,   295,
     224,   118,   362,     0,   385,   386,     0,     0,     0,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   450,
       0,   577,   405,   393,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,     0,   163,     0,   163,   578,   575,
     202,   209,   206,   213,    57,    62,   300,   198,   200,   579,
     216,   579,   302,   304,     0,     0,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   480,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,     0,   474,   477,   547,     0,   194,   195,   185,
     193,     0,   183,     0,   187,     0,   331,     0,     0,    14,
     329,     0,     0,     0,     0,   577,     0,   548,   548,   578,
     548,   548,   579,   270,   260,   268,   267,   262,     0,   225,
     225,   225,   225,     0,     0,     0,   366,   326,   578,     0,
       0,     0,     0,     0,     0,   307,   308,   384,   381,     0,
     388,     0,   383,   449,     0,   418,   419,   420,   422,   423,
     425,   426,   430,   431,   428,   429,   433,   434,   436,   438,
     440,   442,   444,     0,     0,   464,   578,   163,   578,   169,
       0,     0,     0,   164,     0,     0,     0,   218,   577,   306,
     573,   573,   203,   573,   573,   210,   577,   306,   573,   207,
     573,   214,     0,     0,     0,     0,   303,   305,     0,     0,
       0,   475,   197,   186,   190,     0,   188,     0,   330,    12,
       0,     0,     0,   461,     0,     0,     0,     0,   461,     0,
       0,   369,   107,     0,   337,   580,   580,   335,     0,     0,
       0,     0,     0,   336,   314,   315,   334,   316,   317,   318,
     319,   347,   348,   349,   350,     0,   462,   320,     0,     0,
     299,     0,   466,   466,     0,   263,     0,    53,    54,    50,
      51,   395,     0,   234,   416,   333,     0,     0,     0,     0,
     312,   310,   311,   309,   382,     0,   380,   404,   447,     0,
       0,   578,     0,   170,     0,   168,   466,   176,   179,   167,
     466,   178,   179,     0,   166,     0,   165,   155,   307,   466,
     466,   466,   466,   307,   466,   466,   199,   201,   217,   291,
     283,   470,   477,   478,     0,   191,   332,   354,     0,     0,
       0,   353,   461,   461,     0,     0,     0,     0,     0,     0,
       0,   249,   573,   249,   573,   573,   573,   573,   573,   466,
     340,     0,     0,     0,    13,   225,   225,   298,   369,   234,
       0,     0,   226,   227,     0,     0,   239,   237,   238,   231,
       0,   232,   461,   371,     0,     0,     0,   313,   389,   446,
     156,     0,   158,   181,   173,   175,   180,   171,   177,   466,
     466,   205,   204,   212,   211,   208,   215,   476,   479,     0,
       0,   461,   355,     0,   324,     0,   351,     0,     0,     0,
     326,     0,    32,    40,    33,    41,   548,    42,   548,    43,
     461,     0,   556,     0,     0,    52,    55,   247,     0,     0,
     243,   244,   228,     0,   236,   240,   387,   233,   325,   402,
     401,   370,   159,   172,   174,   461,     0,   322,   461,   352,
       0,   461,   461,   333,   326,   321,     0,     0,   557,     0,
       0,   229,     0,     0,   245,     0,   235,   343,   461,     0,
       0,   341,   344,   461,   333,   557,     0,     0,     0,   555,
     558,   559,   550,     0,   230,     0,     0,   241,   323,   461,
       0,   461,     0,   461,     0,   551,     0,     0,   557,     0,
     552,   246,     0,     0,   345,   342,    30,     0,   557,     0,
       0,   554,   560,   242,   461,    31,     0,     0,   561,     0,
     346,   563,     0,   565,   553,     0,   564,     0,     0,     0,
     562,   566,   568,   567,     0,   569
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    53,    54,    55,    56,   341,    57,    58,
     664,   665,   666,   667,    60,    61,    62,   216,   274,   218,
     275,   146,    67,    68,    69,    70,    71,    72,    73,    74,
     277,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,   438,   613,   614,
     615,   726,   730,   815,   727,    92,   202,   203,   527,   446,
     447,   448,   449,   450,   672,   281,   697,   792,   793,   800,
     801,   794,   795,   796,   797,   798,   132,   133,   134,   135,
     136,   137,   138,   139,   233,   119,    94,    95,    96,    97,
      98,   194,    99,   348,   101,   117,   103,   576,   387,   451,
     228,   388,   389,   673,   674,   675,   342,   343,   344,   537,
     539,   676,   220,   677,   678,   679,   680,   681,   682,   683,
     684,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   579,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   410,   685,   686,
     327,   221,   222,   104,   105,   522,   523,   641,   524,   106,
     366,   369,   687,   853,   909,   910,   911,   955,   954,   887,
     963,   688,   238,   550,   191,   331,   357,   538,   634,   123,
     126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -766
static const yytype_int16 yypact[] =
{
    -766,    34,  2147,  -766,  -766,  -766,  -766,  -766,  -766,   131,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,    66,  3978,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    2516,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,    27,    30,   190,   190,  2639,  2762,  -766,  -766,  -766,
    -766,  -766,  2205,  2205,  1392,  1392,  2458,  2458,  1251,  1251,
    -766,    37,  2335,  2335,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,    57,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
     196,  -766,  -766,  -766,  -766,    75,  -766,    36,   158,  -766,
    -766,   290,   197,   195,  -766,   173,   367,   239,  3978,  -766,
    -766,  -766,  -766,   284,  3206,   182,   174,   182,   222,   404,
     354,  4116,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
     295,  -766,  -766,   295,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
     289,  -766,  -766,   297,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  3608,  -766,  -766,  -766,  -766,  -766,   322,    57,
     328,  -766,  -766,  4470,  -766,   288,   334,   341,  -766,   382,
    -766,  -766,   103,  -766,   290,   290,   357,  -766,   404,  -766,
     404,  -766,  -766,   314,  3486,  -766,   381,   381,  2885,  3008,
    3049,    76,   182,  -766,   381,  -766,  -766,  -766,   288,  -766,
     354,   387,   402,   404,   354,  4155,  -766,  -766,    90,  -766,
     407,    90,  -766,   423,   271,   429,   283,   450,  -766,  -766,
    5070,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  5148,  5148,
     501,  3608,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
     458,   479,   487,  5170,   241,  3852,  2697,  2574,  2574,  1848,
    1091,   494,  -766,   519,  -766,  -766,  -766,  -766,   898,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  1120,  -766,  -766,  -766,
    -766,  5248,  -766,  5170,  -766,   177,   262,   488,   226,   400,
     513,   509,   481,   549,     8,  -766,  -766,   482,   542,   322,
     545,  -766,  3329,  -766,   551,  -766,  -766,   556,  4553,  1901,
      79,   550,   550,   150,  -766,   248,   462,   290,  -766,  -766,
     568,  -766,  -766,   314,  -766,   399,  4172,  -766,   431,    76,
    4225,  -766,  -766,   314,  -766,  -766,  -766,  3486,   377,   404,
     404,   575,   393,   354,  -766,  -766,  -766,   182,   182,   182,
     182,  3608,  -766,  3608,  -766,  -766,  -766,   599,   492,   596,
    4015,  4015,  5170,  -766,   241,  4281,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,   474,  -766,  -766,  4792,  5170,   474,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    5170,  3608,  -766,  -766,  5170,  5170,  5170,  5170,  5170,  5170,
    5170,  5170,  5170,  5170,  5170,  5170,  5170,  5170,  5170,  5170,
    5170,  5170,  4870,  -766,  5170,  -766,   598,  -766,  3893,  -766,
     349,   349,  2270,  2393,  2458,  2458,  -766,   602,  -766,   603,
    -766,  -766,  -766,  -766,   604,   605,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,   606,   609,   610,  -766,  5170,  -766,  -766,  -766,
    -766,   169,  -766,   208,  -766,   475,  -766,    11,   611,  1532,
    -766,   399,   420,   399,  4257,  -766,  4225,    90,    90,  -766,
      90,    90,  -766,  -766,  -766,  -766,  -766,  -766,   456,   589,
     589,   589,   589,   620,   635,  4892,  -766,   314,  -766,   636,
     637,   640,   642,   643,   644,  4281,  -766,  -766,  -766,   498,
    -766,   175,  -766,  -766,   646,  -766,  -766,  -766,   177,   177,
     262,   262,   488,   488,   488,   488,   226,   226,   400,   513,
     509,   481,   549,  5170,    10,  -766,  3893,  -766,  3893,  -766,
    3893,   238,  3730,  -766,   111,   113,   647,  -766,   236,  4054,
    -766,  -766,  -766,  -766,  -766,  -766,   380,  3448,  -766,  -766,
    -766,  -766,  3363,   678,   657,   658,  -766,  -766,   659,  1901,
    4970,  -766,  -766,  -766,  -766,   210,  -766,   691,  -766,  -766,
     638,   663,  5170,  5170,   648,   664,   666,   140,  4392,   667,
     671,   668,   669,  2024,  -766,  -766,  -766,  -766,   190,   190,
    2639,  2762,   672,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,   662,   692,  -766,  2830,   399,
    3486,   690,   182,   182,   696,  -766,  4714,  -766,  -766,  -766,
    -766,   694,   694,  -766,  -766,  -766,   700,    44,  4015,  4015,
    -766,   404,  -766,  -766,  -766,  5170,  -766,   694,  -766,  5170,
     704,  3893,   705,  -766,  5170,  -766,   182,  -766,   699,  -766,
     182,  -766,   699,    38,  -766,   329,  -766,  -766,  4054,   182,
     182,   182,   182,  3448,   182,   182,  -766,  -766,  -766,  -766,
    -766,  -766,   610,  -766,   507,  -766,  -766,  -766,  5170,    22,
     701,  -766,  5170,  4392,  5170,   703,   757,  5170,  5170,   723,
    3206,   295,  -766,   295,  -766,  -766,  -766,  -766,  -766,   182,
    -766,   730,   382,   731,  -766,   589,   589,  -766,   709,  -766,
    5170,   489,  -766,  -766,  5048,   244,  -766,  -766,  -766,  -766,
     735,  4714,  1655,  -766,   810,   742,   746,  -766,  -766,  -766,
    -766,   743,  -766,  -766,  -766,  -766,  -766,  -766,  -766,   182,
     182,  -766,  -766,  -766,  -766,  -766,  -766,  -766,  -766,   515,
    5170,  4392,  -766,   724,  -766,   162,  -766,   751,   518,   520,
     314,  3172,  -766,   749,  -766,   752,   374,   753,   385,   758,
    4392,   382,    19,   764,   382,  -766,  -766,  -766,  4636,    33,
    -766,  -766,  -766,  5170,  -766,  -766,  -766,   766,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,  4392,   748,  -766,  5170,  -766,
    5170,  4392,  4392,  -766,   314,  -766,    28,   771,    85,   755,
     772,  -766,   476,  5170,   313,   110,  -766,  -766,  4392,   759,
     524,   834,  -766,  1778,  -766,    85,   761,  1901,    39,   770,
     780,  -766,  -766,   763,  -766,   773,  5170,  -766,  -766,  5170,
     782,  4392,   788,  1778,   774,  -766,   799,  5170,    85,    85,
    -766,   323,   805,   814,  -766,  -766,  -766,   815,    85,   382,
     530,   800,  -766,  -766,  4392,  -766,   801,   161,  -766,   382,
    -766,   382,  5170,   519,   820,   803,   820,   533,   382,   678,
    -766,   519,  -766,   826,   678,  -766
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -766,  -766,  -766,  -766,  -766,  -766,   855,   541,  -766,  -766,
    -766,  -766,  -766,     4,   -28,  -766,  -766,     1,    -1,     2,
      -2,   -24,   791,  -766,  -766,  -144,  -766,  -766,   708,  -297,
       0,  -766,   732,  -766,   776,    68,  -766,  -766,   779,   554,
     854,   503,  -766,  -766,   608,  -766,  -766,  -400,   286,  -766,
    -766,   163,   164,   167,  -584,  -766,  -142,  -316,   574,  -766,
    -766,   268,  -766,  -622,    14,  -218,  -516,  -765,   114,  -766,
     118,  -766,  -766,   116,  -766,  -766,   -48,  -766,  -766,   -74,
    -117,  -766,   -63,  -766,  -164,    72,  -766,   472,  -766,  -766,
    -766,  -766,  -766,   336,  -766,    25,  -766,    20,   702,   559,
     -44,  -364,  -362,   227,  -766,   534,  -538,  -766,   591,  -766,
    -673,  -766,   147,  -766,  -766,  -766,  -766,  -766,  -766,  -766,
    -766,  -766,  -140,  -766,  -766,  -766,  -766,   211,  -766,  -766,
    -766,  -766,  -766,  -766,  -766,   298,   229,  -766,  -766,  -766,
    -766,  -766,  -766,  -766,   -65,   193,   194,   156,   213,   512,
     516,   511,   517,   521,  -766,  -163,  -363,  -766,  -643,  -175,
     191,    41,    60,     5,  -766,  -766,  -766,   198,  -608,  -766,
     947,  -220,  -766,    97,  -747,  -766,    26,  -766,     6,  -766,
    -766,     3,   364,   600,   -94,   765,    17,  -429,  -398,   -43,
     373
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -582
static const yytype_int16 yytable[] =
{
      66,    64,    75,    63,    65,   108,    59,   317,   196,   616,
     760,   748,   122,   231,   114,   124,   142,   530,   367,   571,
     573,   368,   574,   112,   118,   444,   370,   102,   731,   705,
     326,   752,   802,   580,     3,   606,   867,   608,    66,    64,
      75,    63,    65,   377,   698,   699,   700,   583,   164,   324,
     169,   120,   174,   635,   177,   392,   195,   236,   183,   330,
     444,   431,   335,   336,   392,   102,   358,   232,   237,   113,
     362,   605,   195,    23,    93,   392,   830,   434,   647,   251,
     252,   253,   254,   255,   256,   257,   378,   893,   141,   144,
     154,   163,   109,   892,   125,   432,   114,   127,   719,   110,
     648,    23,   182,   349,   927,   188,   894,   888,   190,   373,
     831,    23,    93,   231,   350,   392,   905,   231,   207,   833,
     691,   252,   219,   217,    75,   198,   724,   206,   215,   235,
     114,    25,   114,   148,   157,   140,   143,   153,   162,   706,
     197,   349,    26,   212,   816,   525,   178,   180,   816,   731,
     272,   189,   350,   563,   694,   564,   120,   907,   924,    34,
      35,   364,   569,   570,   916,   326,   109,   232,   224,   142,
     333,   232,   365,   110,   334,   109,   356,   720,   733,   722,
     735,   941,   110,   917,   454,   200,   122,    31,    32,    33,
     211,   946,   201,   584,   207,   535,   378,   392,   378,   558,
     734,   111,   736,   319,   200,   318,   320,   721,   383,   322,
     903,   201,   219,   217,    75,   530,   764,   530,   219,   217,
      75,   529,   581,   199,   354,    23,   952,   207,   231,   434,
     109,   923,   129,    34,    35,   899,   378,   110,   413,   208,
     643,   108,   434,   200,   108,   200,   231,   108,   716,   108,
     201,   879,   201,   414,   573,   130,   574,   604,   415,   416,
     212,   192,   573,   223,   574,   205,   131,   204,   193,   855,
     856,    23,   236,    23,   421,   422,   933,   580,   379,   644,
     129,   755,   232,   237,    34,    35,   148,   157,   347,   347,
     351,   352,   811,   355,   386,   390,   347,    34,    35,   926,
     232,   618,   883,   345,   195,   210,   384,   211,   193,   423,
     424,   225,   619,   193,   346,   531,   863,   385,   791,   532,
     443,   441,   445,   440,   442,   200,   724,   725,   370,   530,
     692,   693,   201,   799,   864,   444,   436,   962,   100,   417,
     418,   -18,   965,   157,   544,   617,   904,   180,   546,   585,
     586,   587,   808,   -19,   213,   443,   441,   445,   440,   442,
     328,   116,   100,   326,    23,  -573,   620,   623,    31,    32,
      33,   129,   114,   114,   114,   114,   100,   358,   248,   362,
      31,    32,    33,   575,    23,  -241,   249,  -241,   379,    23,
     379,   129,  -577,   444,   345,  -242,   229,  -242,   321,   100,
     100,   100,   100,  -241,   -20,   346,   329,   577,   559,   560,
     561,   562,   582,  -242,   618,    23,    23,   724,   252,   230,
     169,   193,   325,   129,   231,   619,   231,   337,   379,   340,
     131,   799,   192,   209,    23,   128,   612,   611,   799,   193,
     718,   229,   226,   553,   -34,   626,   345,   170,   173,   193,
     425,   426,   193,   359,   100,   -35,   627,   346,   226,   557,
     622,   625,   629,   631,   541,   193,   116,   100,   360,   226,
     364,    31,    32,    33,   922,   346,   193,   -21,   232,   372,
     232,   365,    31,    32,    33,   545,   209,   374,   375,   326,
     805,   806,   193,   -22,   937,   799,   545,   115,   195,   -23,
     704,   231,   325,   193,   239,   240,   241,   242,   243,   109,
     148,   157,   621,   624,   628,   630,   110,   244,   245,   455,
     -24,   226,   695,   380,   860,   558,   246,   247,   193,   533,
     412,   861,   325,   534,   419,   420,   376,   671,   669,    75,
     668,   670,   645,   896,   381,   236,   646,   914,   433,   434,
     108,   108,   382,   108,   108,   392,   809,   325,   566,   434,
     391,   326,   690,   728,   714,   715,   116,   429,   151,   160,
     116,   100,   231,   828,   715,   165,   168,   592,   593,   594,
     595,   875,   434,   829,   881,   434,   882,   434,   427,   835,
     920,   434,   838,   839,   428,   713,   948,   434,   383,   960,
     434,   430,   115,   536,   612,   611,   612,   611,   612,   611,
     588,   589,   435,   590,   591,   437,   211,   738,   211,   149,
     158,   142,   769,   770,   452,   743,   232,   326,   370,   453,
     443,   441,   445,   440,   442,   122,   184,   186,   596,   597,
     526,   556,   852,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   219,   217,    75,   364,   565,   567,   326,   607,   632,
     633,   765,   638,   152,   161,   640,   639,   636,   637,   696,
     157,   542,   649,   347,   732,   542,   701,   728,   443,   441,
     445,   440,   442,   772,   774,   776,   778,   114,   114,   116,
     326,   702,   115,   707,   708,   900,   115,   709,   710,   711,
     712,   886,   717,   439,   852,   547,   548,   642,   737,   612,
     611,   151,   160,   749,   750,   751,   756,   757,   758,   762,
     326,   114,   767,   785,   786,   114,   768,   761,   148,   157,
     771,   773,   775,   777,   114,   114,   114,   114,   908,   114,
     114,   780,   940,   326,   763,   325,  -219,  -220,   713,   434,
     779,   784,   787,   713,   703,   908,   803,   814,   219,   217,
      75,   817,   149,   158,   215,   810,   812,   957,   160,   168,
     821,   822,   823,   824,   114,   825,   826,   724,   908,   908,
     832,   837,   836,   840,   325,   851,   854,   857,   908,   947,
     671,   669,    75,   668,   670,   732,   866,   347,   870,   953,
     211,   953,   871,   878,   872,   211,   880,   115,   961,   -36,
     850,   115,   -37,   -38,   114,   114,   152,   161,   -39,   158,
     889,   227,   325,   896,   186,   115,   898,   906,   913,   219,
     217,    75,   921,   759,   912,   354,   931,   929,   919,   108,
     925,   108,   930,   393,   394,   395,   147,   156,   928,   936,
     873,   874,   938,   147,   166,   147,   171,   147,   175,   147,
     179,   934,   939,   147,   185,   396,   869,   542,   943,   542,
     944,   325,   397,   161,   398,   766,   945,   958,   949,   951,
     276,   959,   325,   964,   549,   121,   723,   819,   820,   818,
     747,   671,   669,    75,   668,   670,   528,   858,   862,   156,
     338,   865,   339,   568,   278,   813,   552,   841,   804,   150,
     159,   671,   669,    75,   668,   670,   150,   167,   150,   172,
     150,   176,   150,   181,   540,   361,   150,   187,   754,   598,
     600,   393,   394,   395,   599,   151,   160,   601,   325,   107,
     827,   890,   602,   325,   542,   942,   551,   956,   279,     0,
       0,   280,   542,   396,     0,     0,   332,     0,     0,   276,
     397,     0,   398,     0,     0,     0,     0,     0,     0,     0,
       0,   859,     0,     0,   739,   740,     0,   741,   742,     0,
     834,     0,   744,   278,   745,     0,   149,   158,     0,     0,
       0,     0,     0,     0,   100,   100,   100,   100,     0,   147,
     156,     0,     0,   115,     0,   115,     0,     0,     0,   325,
       0,   876,     0,     0,     0,   542,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   279,     0,     0,
     280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,   161,     0,     0,   895,     0,     0,     0,   877,   325,
     361,   554,   555,     0,   361,     0,   156,   166,   171,   175,
     179,   185,   150,   159,     0,     0,     0,   885,     0,   276,
       0,   276,     0,     0,   915,     0,   572,     0,   276,   276,
     115,     0,   325,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   897,   278,     0,   278,     0,   932,   901,   902,
      15,     0,   278,   278,     0,   160,     0,     0,     0,   276,
       0,    21,   325,     0,     0,   918,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   842,   843,   844,   845,   846,
     847,   848,   849,   278,     0,   325,   276,   279,   935,   279,
     280,     0,   280,     0,     0,     0,   279,   279,     0,   280,
     280,   115,     0,     0,     0,     0,   158,     0,     0,     0,
     278,   950,     0,   151,   160,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,    30,     0,   279,     0,     0,
     280,     0,     0,    34,    35,     0,     0,     0,    36,     0,
      38,    39,     0,    41,    42,    43,     0,    44,    45,     0,
     409,     0,     0,     0,   279,    51,    52,   280,     0,     0,
     161,     0,     0,     0,   149,   158,     0,     0,     0,     0,
       0,     0,     0,   147,   156,   147,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
     361,     0,     0,     0,    10,    11,     0,    13,     0,     0,
      15,     0,     0,     0,     0,     0,     0,     0,   152,   161,
       0,    21,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   150,   159,   150,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   276,     0,   276,     0,   276,     0,
     572,     0,     0,     0,     0,     0,     0,     0,   572,     0,
       0,     0,     0,     0,     0,   156,     0,   156,   278,     0,
     278,     0,   278,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,    34,    35,     0,     0,     0,     0,     0,
      38,    39,     0,    41,    42,    43,   156,    44,    45,     0,
       0,     0,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,   279,     0,   279,   280,   279,   280,     0,   280,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,   156,     0,    10,    11,     0,    13,     0,
       0,    15,     0,   807,     0,     0,   276,   276,     0,     0,
       0,     0,    21,     0,     0,    22,     0,     0,     0,   276,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     278,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   278,     0,     0,     0,     0,     0,     0,
       0,   147,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   783,
       0,  -581,     0,     0,   279,   279,    30,   280,   280,     0,
       0,     0,     0,     0,    34,    35,     0,   279,     0,     0,
     280,    38,    39,     0,    41,    42,    43,     0,    44,    45,
       0,     0,     0,     0,     0,     0,    51,    52,     0,     0,
       0,     0,     0,     0,   150,   159,     0,     0,     0,   156,
       0,     0,     0,     0,   156,     4,     5,     6,     7,   650,
       0,     8,   651,   652,     9,    10,    11,    12,    13,   653,
      14,    15,    16,    17,    18,   654,   655,    19,    20,   656,
     657,   250,    21,   658,   659,    22,   660,   661,   252,   253,
     254,   255,   256,   257,   662,     0,   258,   259,     0,     0,
       0,     0,     0,     0,   260,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   261,     0,     0,
       0,     0,   567,     0,     0,     0,     0,   262,   263,   264,
     265,   266,   267,     0,     0,     0,     0,     0,     0,     0,
       0,  -461,     0,     0,    28,    29,    30,   268,   269,    31,
      32,    33,     0,     0,    34,    35,   270,   271,   272,    36,
      37,    38,    39,   663,    41,    42,    43,     0,    44,    45,
      46,    47,     0,    48,    49,    50,    51,    52,     4,     5,
       6,     7,   650,     0,     8,   651,   652,     9,    10,    11,
      12,    13,   653,    14,    15,    16,    17,    18,   654,   655,
      19,    20,   656,   657,   250,    21,   658,   659,    22,   660,
     661,   252,   253,   254,   255,   256,   257,   662,     0,   258,
     259,     0,     0,     0,     0,     0,     0,   260,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     261,     0,     0,     0,     0,   567,   868,     0,     0,     0,
     262,   263,   264,   265,   266,   267,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,    30,
     268,   269,    31,    32,    33,     0,     0,    34,    35,   270,
     271,   272,    36,    37,    38,    39,   663,    41,    42,    43,
       0,    44,    45,    46,    47,     0,    48,    49,    50,    51,
      52,     4,     5,     6,     7,   650,     0,     8,   651,   652,
       9,    10,    11,    12,    13,   653,    14,    15,    16,    17,
      18,   654,   655,    19,    20,   656,   657,   250,    21,   658,
     659,    22,   660,   661,   252,   253,   254,   255,   256,   257,
     662,     0,   258,   259,     0,     0,     0,     0,     0,     0,
     260,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,     0,     0,     0,     0,   567,  -578,
       0,     0,     0,   262,   263,   264,   265,   266,   267,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
      28,    29,    30,   268,   269,    31,    32,    33,    21,     0,
      34,    35,   270,   271,   272,    36,    37,    38,    39,   663,
      41,    42,    43,     0,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,     0,     0,     0,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,     0,     0,    38,    39,     0,
      41,    42,    43,     0,    44,    45,     0,     0,     0,    48,
      49,    50,    51,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,     4,     5,     6,
       7,     0,     0,     8,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,    19,
      20,     0,     0,   250,    21,     0,     0,    22,     0,   251,
     252,   253,   254,   255,   256,   257,    24,     0,   258,   259,
       0,     0,     0,     0,     0,     0,   260,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   261,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   262,
     263,   264,   265,   266,   267,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,   268,
     269,     0,     0,     0,     0,     0,    34,    35,   270,   271,
     272,    36,    37,    38,    39,   273,    41,    42,    43,     0,
      44,    45,    46,    47,     0,    48,    49,    50,    51,    52,
       4,     5,     6,     7,     0,     0,     8,     0,     0,     9,
      10,    11,    12,    13,     0,    14,    15,    16,    17,    18,
       0,     0,    19,    20,     0,     0,     0,    21,     0,     0,
      22,     0,    23,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
       6,     0,    25,     0,     8,     0,     0,     0,    10,    11,
      12,    13,     0,    26,    15,    16,    17,    18,     0,     0,
      19,    20,     0,     0,     0,    21,    27,     0,    22,    28,
      29,    30,     0,     0,    31,    32,    33,     0,     0,    34,
      35,     0,     0,     0,    36,    37,    38,    39,    40,    41,
      42,    43,     0,    44,    45,    46,    47,     0,    48,    49,
      50,    51,    52,     4,     5,     6,     7,     0,     0,     8,
       0,     0,     9,    10,    11,    12,    13,     0,    14,    15,
      16,    17,    18,     0,     0,    19,    20,    28,    29,    30,
      21,     0,     0,    22,     0,    23,     0,    34,    35,     0,
       0,     0,   145,    37,    38,    39,     0,    41,    42,    43,
       0,    44,    45,    46,    47,     0,     0,     0,     0,    51,
      52,     0,     0,     0,     0,   626,     0,     0,     4,     0,
       0,     0,   193,     0,     0,     0,   627,     0,    10,    11,
       0,    13,     0,     0,    15,     0,     0,     0,     0,     0,
       0,     0,    28,    29,    30,    21,     0,     0,    22,     0,
       0,     0,    34,    35,     0,     0,     0,    36,    37,    38,
      39,     0,    41,    42,    43,     0,    44,    45,    46,    47,
       0,    48,    49,    50,    51,    52,     4,     5,     6,     7,
       0,     0,     8,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,    16,    17,    18,     0,     0,    19,    20,
       0,     0,     0,    21,     0,     0,    22,     0,    23,    30,
       0,     0,     0,     0,     0,   155,     0,    34,    35,     0,
       0,     0,    36,     0,    38,    39,     0,    41,    42,    43,
       0,    44,    45,     0,     0,     0,     0,     0,   626,    51,
      52,     4,     0,     0,     0,   193,     0,     0,     0,   627,
       0,    10,    11,     0,    13,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,    28,    29,    30,    21,     0,
       0,    22,     0,     0,     0,    34,    35,     0,     0,     0,
      36,    37,    38,    39,     0,    41,    42,    43,     0,    44,
      45,    46,    47,     0,    48,    49,    50,    51,    52,     4,
       5,     6,     7,     0,     0,     8,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,    19,    20,     0,     0,     0,    21,     0,     0,    22,
       0,    23,    30,     0,     0,     0,     0,     0,    24,     0,
      34,    35,     0,     0,     0,     0,     0,    38,    39,     0,
      41,    42,    43,     0,    44,    45,     0,     0,     0,     0,
       0,    25,    51,    52,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    34,    35,
       0,     0,     0,    36,    37,    38,    39,     0,    41,    42,
      43,     0,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,     4,     5,     6,     7,     0,     0,     8,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,     0,     0,    19,    20,     0,     0,    30,    21,
       0,     0,    22,     0,    23,     0,    34,    35,     0,     0,
       0,   145,     0,    38,    39,     0,    41,    42,    43,     0,
      44,    45,     0,     0,     0,     0,     0,     0,    51,    52,
       0,     5,     6,     0,    25,     0,     8,     0,     0,     0,
       0,     0,    12,     0,     0,    26,    15,    16,    17,    18,
       0,     0,    19,    20,     0,     0,     0,    21,     0,     0,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    41,    42,    43,     0,    44,    45,    46,    47,     0,
      48,    49,    50,    51,    52,     4,     5,     6,     7,     0,
       0,     8,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,    16,    17,    18,     0,     0,    19,    20,    28,
      29,    30,    21,     0,     0,    22,     0,    23,     0,    34,
      35,     0,     0,     0,   155,    37,    38,    39,     0,    41,
      42,    43,     0,    44,    45,    46,    47,     0,     0,     0,
       0,    51,    52,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,    28,    29,    30,     0,   781,     0,
      21,     0,     0,     0,    34,    35,     0,     0,     0,    36,
      37,    38,    39,     0,    41,    42,    43,     0,    44,    45,
      46,    47,     0,    48,    49,    50,    51,    52,     4,     5,
       6,     7,     0,     0,     8,   782,     0,     9,    10,    11,
      12,    13,     0,    14,    15,    16,    17,    18,     0,     0,
      19,    20,     0,     0,     0,    21,     0,     0,    22,     0,
      23,     0,     0,     0,    30,     0,     0,   145,     0,     0,
       0,     0,    34,    35,     0,     0,     0,     0,     0,    38,
      39,     0,    41,    42,    43,     0,    44,    45,     0,     0,
     349,     0,     0,     0,    51,    52,     0,     0,     0,     0,
       0,   350,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,    34,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    41,    42,    43,
       0,    44,    45,    46,    47,     0,    48,    49,    50,    51,
      52,     4,     5,     6,     7,     0,     0,     8,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,    19,    20,     0,     0,     0,    21,     0,
       0,    22,     0,    23,     0,     0,     0,     0,     0,     0,
     155,     0,     4,     5,     6,     7,     0,     0,     8,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,     0,   349,    19,    20,     0,     0,     0,    21,
       0,     0,    22,     0,   350,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,    36,    37,    38,    39,   353,
      41,    42,    43,     0,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,     0,     0,     0,     0,     0,     0,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    36,    37,    38,    39,
     214,    41,    42,    43,     0,    44,    45,    46,    47,     0,
      48,    49,    50,    51,    52,     4,     5,     6,     7,     0,
       0,     8,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,    16,    17,    18,     0,     0,    19,    20,     0,
       0,     0,    21,     0,     0,    22,     0,     0,     0,     4,
       5,     6,     7,     0,    24,     8,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,    19,    20,     0,     0,     0,    21,     0,     0,    22,
       0,     0,   884,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,     0,     0,    36,
      37,    38,    39,   214,    41,    42,    43,     0,    44,    45,
      46,    47,     0,    48,    49,    50,    51,    52,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    34,    35,
       0,     0,     0,    36,    37,    38,    39,   214,    41,    42,
      43,     0,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,     4,     5,     6,     7,     0,     0,     8,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,     0,     0,    19,    20,     0,     0,     0,    21,
       0,     0,    22,     0,   439,     0,     4,     5,     6,     7,
       0,    24,     8,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,    16,    17,    18,     0,     0,    19,    20,
       0,     0,     0,    21,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   746,     0,     0,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    41,    42,    43,     0,    44,    45,    46,    47,     0,
      48,    49,    50,    51,    52,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    15,     0,     0,
      36,    37,    38,    39,     0,    41,    42,    43,    21,    44,
      45,    46,    47,    23,    48,    49,    50,    51,    52,     4,
       5,     6,     7,     0,     0,     8,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,    19,    20,   626,     0,     0,    21,     0,     0,    22,
     193,     0,     0,     0,   627,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,     0,     0,    38,    39,     0,
      41,    42,    43,     0,    44,    45,     0,     0,     0,     0,
       0,     0,    51,    52,     0,     0,     0,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    34,    35,
       0,     0,     0,    36,    37,    38,    39,     0,    41,    42,
      43,     0,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,     5,     6,     7,     0,     0,     8,     0,     0,
       9,     0,     0,    12,     0,     0,    14,    15,    16,    17,
      18,     0,     0,    19,    20,     0,     0,   250,    21,     0,
       0,     0,     0,   251,   252,   253,   254,   255,   256,   257,
      24,     0,   258,   259,     0,     0,     0,     0,     0,     0,
     260,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   262,   263,   264,   265,   266,   267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,   268,   269,     0,     0,     0,     0,     0,
      34,    35,   270,   271,   272,    36,    37,    38,    39,   273,
      41,    42,    43,     0,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,     5,     6,     7,     0,     0,     8,
       0,     0,     9,     0,     0,    12,     0,     0,    14,    15,
      16,    17,    18,     0,     0,    19,    20,     0,     0,     0,
      21,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   724,   729,
       0,     0,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,    34,    35,     0,     0,     0,    36,    37,    38,
      39,     0,    41,    42,    43,     0,    44,    45,    46,    47,
       0,    48,    49,    50,    51,    52,     5,     6,     7,     0,
       0,     8,     0,     0,     9,     0,     0,    12,     0,     0,
      14,    15,    16,    17,    18,     0,     0,    19,    20,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   155,     0,     0,     5,     6,     7,
       0,     0,     8,     0,     0,     9,     0,     0,    12,     0,
       0,    14,    15,    16,    17,    18,     0,   384,    19,    20,
       0,     0,     0,    21,   193,     0,     0,     0,   385,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,     0,     0,    36,
      37,    38,    39,     0,    41,    42,    43,     0,    44,    45,
      46,    47,     0,    48,    49,    50,    51,    52,     0,     0,
       0,     0,   609,     0,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    15,     0,     0,
      36,    37,    38,    39,   610,    41,    42,    43,    21,    44,
      45,    46,    47,    23,    48,    49,    50,    51,    52,     5,
       6,     7,     0,     0,     8,     0,     0,     9,     0,     0,
      12,     0,     0,    14,    15,    16,    17,    18,     0,     0,
      19,    20,     0,    25,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    15,     0,     0,     0,     0,     0,     0,
      34,    35,     0,     0,    21,     0,     0,    38,    39,    23,
      41,    42,    43,     0,    44,    45,   129,     0,     0,     0,
       0,     0,    51,    52,     0,     0,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,    34,    35,   618,
       0,     0,    36,    37,    38,    39,   193,    41,    42,    43,
     619,    44,    45,    46,    47,    15,    48,    49,    50,    51,
      52,     0,     0,     0,     0,     0,    21,     0,    30,     0,
       0,    23,     0,     0,     0,     0,    34,    35,   129,     0,
       0,     0,     0,    38,    39,     0,    41,    42,    43,     0,
      44,    45,     0,     0,    15,     0,     0,     0,    51,    52,
       0,   234,     0,     0,     0,    21,     0,     0,     0,     0,
      23,    15,   131,     0,     0,     0,     0,   129,     0,     0,
       0,     0,    21,     0,     0,     0,     0,    23,     0,     0,
      30,     0,     0,     0,   129,     0,     0,     0,    34,    35,
     363,     0,     0,     0,     0,    38,    39,     0,    41,    42,
      43,   131,    44,    45,     0,     0,     0,   543,     0,     0,
      51,    52,     0,     0,    15,     0,     0,     0,   346,    30,
       0,     0,     0,     0,     0,    21,     0,    34,    35,     0,
      23,     0,     0,     0,    38,    39,    30,    41,    42,    43,
       0,    44,    45,     0,    34,    35,    15,     0,     0,    51,
      52,    38,    39,     0,    41,    42,    43,    21,    44,    45,
     349,     0,    23,     0,     0,     0,    51,    52,     0,   129,
      15,   350,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,   689,     0,     0,     0,     0,    34,    35,     0,
       0,     0,     0,   346,    38,    39,     0,    41,    42,    43,
       0,    44,    45,     0,     0,     0,   384,     0,     0,    51,
      52,    30,     0,   193,     0,     0,     0,   385,     0,    34,
      35,     0,     0,     0,     0,     0,    38,    39,     0,    41,
      42,    43,     0,    44,    45,    30,     0,     0,     0,     0,
       0,    51,    52,    34,    35,     0,     0,     0,     0,     0,
      38,    39,     0,    41,    42,    43,     0,    44,    45,   650,
       0,     0,   651,   652,     0,    51,    52,     0,     0,   653,
       0,     0,     0,     0,     0,   654,   655,     0,     0,   656,
     657,   250,     0,   658,   659,     0,   660,   661,   252,   253,
     254,   255,   256,   257,   110,     0,   258,   259,     0,     0,
       0,     0,     0,     0,   260,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   261,     0,     0,
       0,     0,   567,     0,     0,     0,     0,   262,   263,   264,
     265,   266,   267,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   268,   269,    31,
      32,    33,     0,     0,     0,     0,   270,   271,   272,   250,
       0,     0,     0,   273,     0,   251,   252,   253,   254,   255,
     256,   257,     0,     0,   258,   259,     0,     0,     0,     0,
       0,     0,   260,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   261,     0,     0,     0,     0,
       0,     0,     0,   323,     0,   262,   263,   264,   265,   266,
     267,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,   268,   269,     0,     0,     0,
       0,     0,     0,     0,   270,   271,   272,     0,     0,     0,
       0,   273,   250,     0,     0,     0,    44,    45,   251,   252,
     253,   254,   255,   256,   257,     0,     0,   258,   259,     0,
       0,     0,     0,     0,     0,   260,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   261,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   262,   263,
     264,   265,   266,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,   268,   269,
       0,     0,     0,     0,     0,     0,     0,   270,   271,   272,
       0,     0,     0,     0,   273,   250,     0,     0,     0,    44,
      45,   788,   252,   253,   254,   255,   256,   257,     0,     0,
     258,   259,     0,     0,     0,     0,     0,     0,   260,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   261,     0,     0,     0,     0,   789,   891,   790,     0,
     791,   262,   263,   264,   265,   266,   267,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   268,   269,     0,     0,     0,     0,     0,     0,     0,
     270,   271,   272,   250,     0,     0,     0,   273,     0,   788,
     252,   253,   254,   255,   256,   257,     0,     0,   258,   259,
       0,     0,     0,     0,     0,     0,   260,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   261,
       0,     0,     0,     0,   789,     0,   790,     0,   791,   262,
     263,   264,   265,   266,   267,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   268,
     269,     0,     0,     0,     0,     0,     0,     0,   270,   271,
     272,   250,     0,     0,     0,   273,     0,   251,   252,   253,
     254,   255,   256,   257,     0,     0,   258,   259,     0,     0,
       0,     0,     0,     0,   260,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   261,   578,     0,
       0,     0,     0,     0,     0,     0,     0,   262,   263,   264,
     265,   266,   267,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   268,   269,     0,
       0,     0,     0,     0,     0,     0,   270,   271,   272,   250,
       0,     0,     0,   273,     0,   251,   252,   253,   254,   255,
     256,   257,     0,     0,   258,   259,     0,     0,     0,     0,
       0,   250,   260,     0,     0,     0,     0,   251,   252,   253,
     254,   255,   256,   257,     0,   261,   258,   259,     0,     0,
       0,     0,     0,     0,   260,   262,   263,   264,   265,   266,
     267,     0,     0,     0,     0,     0,     0,   261,   603,     0,
       0,     0,   703,     0,     0,   268,   269,   262,   263,   264,
     265,   266,   267,     0,   270,   271,   272,     0,     0,     0,
       0,   273,     0,     0,     0,     0,     0,   268,   269,     0,
       0,     0,     0,     0,     0,     0,   270,   271,   272,   250,
       0,     0,     0,   273,     0,   251,   252,   253,   254,   255,
     256,   257,     0,     0,   258,   259,     0,     0,     0,     0,
       0,     0,   260,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   261,   753,     0,     0,     0,
       0,     0,     0,     0,     0,   262,   263,   264,   265,   266,
     267,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   268,   269,     0,     0,     0,
       0,     0,     0,     0,   270,   271,   272,   250,     0,     0,
       0,   273,     0,   251,   252,   253,   254,   255,   256,   257,
       0,     0,   258,   259,     0,     0,     0,     0,     0,   250,
     260,     0,     0,     0,     0,   251,   252,   253,   254,   255,
     256,   257,     0,   261,   258,   259,     0,     0,   789,     0,
       0,     0,   260,   262,   263,   264,   265,   266,   267,     0,
       0,     0,     0,     0,     0,   371,     0,     0,     0,     0,
       0,     0,     0,   268,   269,   262,   263,   264,   265,   266,
     267,     0,   270,   271,   272,     0,     0,     0,     0,   273,
       0,     0,     0,     0,     0,   268,   269,     0,     0,     0,
       0,     0,     0,     0,   270,   271,   272,   250,     0,     0,
       0,   273,     0,   251,   252,   253,   254,   255,   256,   257,
       0,     0,   258,   259,     0,     0,     0,     0,     0,   250,
     260,     0,     0,     0,     0,   251,   252,   253,   254,   255,
     256,   257,     0,   373,   258,   259,     0,     0,     0,     0,
       0,     0,   260,   262,   263,   264,   265,   266,   267,     0,
       0,     0,     0,     0,     0,   261,     0,     0,     0,     0,
       0,     0,     0,   268,   269,   262,   263,   264,   265,   266,
     267,     0,   270,   271,   272,     0,     0,     0,     0,   273,
       0,     0,     0,     0,     0,   268,   269,     0,     0,     0,
       0,     0,     0,     0,   270,   271,   272,   250,     0,     0,
       0,   273,     0,   251,   252,   253,   254,   255,   256,   257,
       0,     0,   258,   259,     0,     0,     0,     0,     0,     0,
     260,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   262,   263,   264,   265,   266,   267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   268,   269,     0,     0,     0,     0,     0,
       0,     0,   270,   271,   272,     0,     0,     0,     0,   273
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-766)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,     2,     2,     2,     2,     2,     2,   182,   102,   438,
     653,   633,    40,   130,     9,    58,    64,   333,   238,   382,
     384,   241,   384,     9,    26,   322,   246,     2,   612,   567,
     193,   639,   705,   396,     0,   435,   801,   437,    40,    40,
      40,    40,    40,   261,   560,   561,   562,   410,    72,   193,
      74,    26,    76,   451,    78,    36,   100,   131,    82,   199,
     357,    53,   204,   205,    36,    40,   230,   130,   131,     9,
     234,   434,   116,    35,     2,    36,    54,    67,    67,    35,
      36,    37,    38,    39,    40,    41,   261,    54,    63,    64,
      65,    66,    35,   858,    67,    87,    91,    67,    88,    42,
      89,    35,    65,    65,    65,    91,    73,    88,    91,    65,
      88,    35,    40,   230,    76,    36,    88,   234,   113,   762,
     549,    36,   124,   124,   124,    89,    88,   113,   124,   131,
     125,    65,   127,    65,    66,    63,    64,    65,    66,   568,
      65,    65,    76,   118,   728,    66,    78,    79,   732,   733,
     106,    91,    76,   371,   552,   373,   131,    72,   905,   102,
     103,   235,   380,   381,    54,   328,    35,   230,   127,   217,
      67,   234,   235,    42,    71,    35,   224,   606,    67,   608,
      67,   928,    42,    73,   328,    35,   214,    97,    98,    99,
     118,   938,    42,   411,   189,   337,   371,    36,   373,   363,
      89,    70,    89,   189,    35,   188,   189,   607,   273,   192,
     883,    42,   214,   214,   214,   531,    76,   533,   220,   220,
     220,    71,   397,    65,   220,    35,    65,   222,   345,    67,
      35,   904,    42,   102,   103,   878,   411,    42,   303,    66,
      71,   238,    67,    35,   241,    35,   363,   244,    73,   246,
      42,    89,    42,    76,   618,    65,   618,   432,    81,    82,
     235,    65,   626,    89,   626,    70,    76,    70,    72,   785,
     786,    35,   346,    35,    48,    49,   919,   640,   261,    71,
      42,    71,   345,   346,   102,   103,   218,   219,   216,   217,
     218,   219,   721,   221,   274,   275,   224,   102,   103,   907,
     363,    65,   840,    65,   348,    66,    65,   235,    72,    83,
      84,    89,    76,    72,    76,    67,    72,    76,    74,    71,
     322,   322,   322,   322,   322,    35,    88,    89,   548,   645,
     550,   551,    42,   696,    90,   632,   319,   959,     2,    77,
      78,    70,   964,   275,   346,   439,   884,   279,   350,   414,
     415,   416,   715,    70,    70,   357,   357,   357,   357,   357,
      72,    25,    26,   526,    35,    70,   440,   441,    97,    98,
      99,    42,   367,   368,   369,   370,    40,   541,    89,   543,
      97,    98,    99,   385,    35,    72,    89,    74,   371,    35,
     373,    42,    70,   690,    65,    72,    42,    74,    70,    63,
      64,    65,    66,    90,    70,    76,    65,   393,   367,   368,
     369,   370,   398,    90,    65,    35,    35,    88,    36,    65,
     444,    72,   193,    42,   541,    76,   543,    70,   411,   115,
      76,   794,    65,    66,    35,    62,   438,   438,   801,    72,
     603,    42,    65,    66,    70,    65,    65,    74,    75,    72,
      50,    51,    72,    66,   118,    70,    76,    76,    65,    66,
     440,   441,   442,   443,    65,    72,   130,   131,    66,    65,
     544,    97,    98,    99,   903,    76,    72,    70,   541,   250,
     543,   544,    97,    98,    99,    65,    66,   258,   259,   652,
     708,   709,    72,    70,   923,   858,    65,    25,   542,    70,
     565,   618,   273,    72,   140,   141,   142,   143,   144,    35,
     442,   443,   440,   441,   442,   443,    42,   153,   154,   328,
      70,    65,    66,    65,    35,   689,   162,   163,    72,    67,
     301,    42,   303,    71,    46,    47,    35,   539,   539,   539,
     539,   539,    67,    67,    65,   619,    71,    71,    66,    67,
     547,   548,    65,   550,   551,    36,   719,   328,    66,    67,
      66,   724,   545,   611,    66,    67,   230,    86,    65,    66,
     234,   235,   689,    66,    67,    72,    73,   421,   422,   423,
     424,    66,    67,   758,    66,    67,    66,    67,    75,   764,
      66,    67,   767,   768,    85,   575,    66,    67,   663,    66,
      67,    52,   130,    35,   606,   606,   608,   608,   610,   610,
     417,   418,    70,   419,   420,    70,   544,   619,   546,    65,
      66,   669,   665,   666,    73,   627,   689,   790,   848,    73,
     632,   632,   632,   632,   632,   663,    82,    83,   425,   426,
      90,    66,   782,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   663,   663,   663,   738,    66,    70,   830,    70,    67,
      67,   657,    66,    65,    66,    65,    67,    73,    73,    90,
     612,   345,    71,   611,   612,   349,    66,   735,   690,   690,
     690,   690,   690,   668,   669,   670,   671,   692,   693,   363,
     863,    66,   230,    67,    67,   880,   234,    67,    66,    66,
      66,   851,    66,    35,   854,   351,   352,   526,    71,   721,
     721,   218,   219,    66,    66,    66,    35,    89,    65,    65,
     893,   726,    65,   692,   693,   730,    65,    89,   670,   671,
     668,   669,   670,   671,   739,   740,   741,   742,   888,   744,
     745,    89,   927,   916,    88,   526,    88,    88,   738,    67,
      88,    71,    66,   743,    70,   905,    66,   726,   770,   770,
     770,   730,   218,   219,   770,    71,    71,   952,   275,   276,
     739,   740,   741,   742,   779,   744,   745,    88,   928,   929,
      89,    34,    89,    70,   565,    65,    65,    88,   938,   939,
     802,   802,   802,   802,   802,   733,    71,   735,    66,   949,
     738,   951,    66,    89,    71,   743,    65,   345,   958,    70,
     779,   349,    70,    70,   819,   820,   218,   219,    70,   275,
      66,   129,   603,    67,   280,   363,    88,    66,    66,   841,
     841,   841,     8,   652,    89,   841,    73,    67,    89,   846,
      89,   848,    89,    43,    44,    45,    65,    66,    88,    71,
     819,   820,    88,    72,    73,    74,    75,    76,    77,    78,
      79,    89,    73,    82,    83,    65,    66,   541,    73,   543,
      66,   652,    72,   275,    74,   658,    71,    67,    88,    88,
     182,    88,   663,    67,   353,    40,   610,   733,   735,   732,
     632,   903,   903,   903,   903,   903,   332,   789,   794,   118,
     208,   795,   210,   379,   182,   724,   357,   770,   707,    65,
      66,   923,   923,   923,   923,   923,    72,    73,    74,    75,
      76,    77,    78,    79,   343,   233,    82,    83,   640,   427,
     429,    43,    44,    45,   428,   442,   443,   430,   719,     2,
     752,   854,   431,   724,   618,   929,   356,   951,   182,    -1,
      -1,   182,   626,    65,    -1,    -1,   201,    -1,    -1,   261,
      72,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   790,    -1,    -1,   620,   621,    -1,   623,   624,    -1,
     763,    -1,   628,   261,   630,    -1,   442,   443,    -1,    -1,
      -1,    -1,    -1,    -1,   668,   669,   670,   671,    -1,   218,
     219,    -1,    -1,   541,    -1,   543,    -1,    -1,    -1,   790,
      -1,   830,    -1,    -1,    -1,   689,   235,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
     261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     442,   443,    -1,    -1,   863,    -1,    -1,    -1,   831,   830,
     358,   359,   360,    -1,   362,    -1,   275,   276,   277,   278,
     279,   280,   218,   219,    -1,    -1,    -1,   850,    -1,   371,
      -1,   373,    -1,    -1,   893,    -1,   384,    -1,   380,   381,
     618,    -1,   863,    -1,    -1,    -1,    -1,    -1,   626,    -1,
      -1,    -1,   875,   371,    -1,   373,    -1,   916,   881,   882,
      19,    -1,   380,   381,    -1,   612,    -1,    -1,    -1,   411,
      -1,    30,   893,    -1,    -1,   898,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   771,   772,   773,   774,   775,
     776,   777,   778,   411,    -1,   916,   438,   371,   921,   373,
     371,    -1,   373,    -1,    -1,    -1,   380,   381,    -1,   380,
     381,   689,    -1,    -1,    -1,    -1,   612,    -1,    -1,    -1,
     438,   944,    -1,   670,   671,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    94,    -1,   411,    -1,    -1,
     411,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,    -1,
     109,   110,    -1,   112,   113,   114,    -1,   116,   117,    -1,
      90,    -1,    -1,    -1,   438,   124,   125,   438,    -1,    -1,
     612,    -1,    -1,    -1,   670,   671,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   442,   443,   444,   445,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
     558,    -1,    -1,    -1,    13,    14,    -1,    16,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   670,   671,
      -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   442,   443,   444,   445,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   606,    -1,   608,    -1,   610,    -1,
     618,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   626,    -1,
      -1,    -1,    -1,    -1,    -1,   544,    -1,   546,   606,    -1,
     608,    -1,   610,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,
     109,   110,    -1,   112,   113,   114,   575,   116,   117,    -1,
      -1,    -1,   121,   122,   123,   124,   125,    -1,    -1,    -1,
      -1,    -1,   606,    -1,   608,   606,   610,   608,    -1,   610,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   612,    -1,    13,    14,    -1,    16,    -1,
      -1,    19,    -1,   711,    -1,    -1,   708,   709,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,   721,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     708,   709,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   721,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   670,   671,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   688,
      -1,    89,    -1,    -1,   708,   709,    94,   708,   709,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,   721,    -1,    -1,
     721,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,   670,   671,    -1,    -1,    -1,   738,
      -1,    -1,    -1,    -1,   743,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,    30,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,    -1,    -1,    -1,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    65,    -1,     9,    -1,    -1,    -1,    13,    14,
      15,    16,    -1,    76,    19,    20,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    89,    -1,    33,    92,
      93,    94,    -1,    -1,    97,    98,    99,    -1,    -1,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,     3,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    25,    26,    92,    93,    94,
      30,    -1,    -1,    33,    -1,    35,    -1,   102,   103,    -1,
      -1,    -1,    42,   108,   109,   110,    -1,   112,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,    -1,    -1,   124,
     125,    -1,    -1,    -1,    -1,    65,    -1,    -1,     3,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    76,    -1,    13,    14,
      -1,    16,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    30,    -1,    -1,    33,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,   125,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    35,    94,
      -1,    -1,    -1,    -1,    -1,    42,    -1,   102,   103,    -1,
      -1,    -1,   107,    -1,   109,   110,    -1,   112,   113,   114,
      -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    65,   124,
     125,     3,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,
      -1,    13,    14,    -1,    16,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    30,    -1,
      -1,    33,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,   114,    -1,   116,
     117,   118,   119,    -1,   121,   122,   123,   124,   125,     3,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,
      -1,    35,    94,    -1,    -1,    -1,    -1,    -1,    42,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,    -1,    -1,    -1,    -1,
      -1,    65,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    25,    26,    -1,    -1,    94,    30,
      -1,    -1,    33,    -1,    35,    -1,   102,   103,    -1,    -1,
      -1,    42,    -1,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
      -1,     4,     5,    -1,    65,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    76,    19,    20,    21,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,   114,    -1,   116,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    92,
      93,    94,    30,    -1,    -1,    33,    -1,    35,    -1,   102,
     103,    -1,    -1,    -1,    42,   108,   109,   110,    -1,   112,
     113,   114,    -1,   116,   117,   118,   119,    -1,    -1,    -1,
      -1,   124,   125,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    92,    93,    94,    -1,    28,    -1,
      30,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,     3,     4,
       5,     6,    -1,    -1,     9,    65,    -1,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    94,    -1,    -1,    42,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,    -1,    -1,
      65,    -1,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,   114,
      -1,   116,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    -1,    65,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,    70,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    42,     9,    -1,    -1,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    -1,    35,    -1,     3,     4,     5,     6,
      -1,    42,     9,    -1,    -1,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,   114,    -1,   116,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,    92,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    19,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,   114,    30,   116,
     117,   118,   119,    35,   121,   122,   123,   124,   125,     3,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    25,    26,    65,    -1,    -1,    30,    -1,    -1,    33,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,   125,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    65,    25,    26,
      -1,    -1,    -1,    30,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    19,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,   114,    30,   116,
     117,   118,   119,    35,   121,   122,   123,   124,   125,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      25,    26,    -1,    65,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    19,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    30,    -1,    -1,   109,   110,    35,
     112,   113,   114,    -1,   116,   117,    42,    -1,    -1,    -1,
      -1,    -1,   124,   125,    -1,    -1,    -1,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    65,
      -1,    -1,   107,   108,   109,   110,    72,   112,   113,   114,
      76,   116,   117,   118,   119,    19,   121,   122,   123,   124,
     125,    -1,    -1,    -1,    -1,    -1,    30,    -1,    94,    -1,
      -1,    35,    -1,    -1,    -1,    -1,   102,   103,    42,    -1,
      -1,    -1,    -1,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,    -1,    -1,    19,    -1,    -1,    -1,   124,   125,
      -1,    65,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      35,    19,    76,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      94,    -1,    -1,    -1,    42,    -1,    -1,    -1,   102,   103,
      65,    -1,    -1,    -1,    -1,   109,   110,    -1,   112,   113,
     114,    76,   116,   117,    -1,    -1,    -1,    65,    -1,    -1,
     124,   125,    -1,    -1,    19,    -1,    -1,    -1,    76,    94,
      -1,    -1,    -1,    -1,    -1,    30,    -1,   102,   103,    -1,
      35,    -1,    -1,    -1,   109,   110,    94,   112,   113,   114,
      -1,   116,   117,    -1,   102,   103,    19,    -1,    -1,   124,
     125,   109,   110,    -1,   112,   113,   114,    30,   116,   117,
      65,    -1,    35,    -1,    -1,    -1,   124,   125,    -1,    42,
      19,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    65,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,    -1,    76,   109,   110,    -1,   112,   113,   114,
      -1,   116,   117,    -1,    -1,    -1,    65,    -1,    -1,   124,
     125,    94,    -1,    72,    -1,    -1,    -1,    76,    -1,   102,
     103,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,   112,
     113,   114,    -1,   116,   117,    94,    -1,    -1,    -1,    -1,
      -1,   124,   125,   102,   103,    -1,    -1,    -1,    -1,    -1,
     109,   110,    -1,   112,   113,   114,    -1,   116,   117,     7,
      -1,    -1,    10,    11,    -1,   124,   125,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,   105,   106,    29,
      -1,    -1,    -1,   111,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,    -1,
      -1,   111,    29,    -1,    -1,    -1,   116,   117,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,    -1,    -1,    -1,   111,    29,    -1,    -1,    -1,   116,
     117,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,    29,    -1,    -1,    -1,   111,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     106,    29,    -1,    -1,    -1,   111,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    29,
      -1,    -1,    -1,   111,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    29,    52,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    65,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    65,    88,    -1,
      -1,    -1,    70,    -1,    -1,    95,    96,    75,    76,    77,
      78,    79,    80,    -1,   104,   105,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    29,
      -1,    -1,    -1,   111,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,    29,    -1,    -1,
      -1,   111,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    29,
      52,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    65,    44,    45,    -1,    -1,    70,    -1,
      -1,    -1,    52,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    75,    76,    77,    78,    79,
      80,    -1,   104,   105,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,    29,    -1,    -1,
      -1,   111,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    29,
      52,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    65,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    75,    76,    77,    78,    79,
      80,    -1,   104,   105,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,    29,    -1,    -1,
      -1,   111,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,    -1,    -1,    -1,    -1,   111
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
     315,    70,   315,    73,   154,   265,   284,   289,    72,    65,
     251,   314,   314,    67,    71,   185,   185,    70,   227,   227,
     115,   136,   235,   236,   237,    65,    76,   214,   222,    65,
      76,   214,   214,    70,   142,   214,   205,   315,   213,    66,
      66,   227,   213,    65,   208,   211,   299,   300,   300,   300,
     300,    65,   265,    65,   265,   265,    35,   194,   288,   315,
      65,    65,    65,   273,    65,    76,   226,   227,   230,   231,
     226,    66,    36,    43,    44,    45,    65,    72,    74,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    90,
     286,    65,   265,   273,    76,    81,    82,    77,    78,    46,
      47,    48,    49,    83,    84,    50,    51,    75,    85,    86,
      52,    53,    87,    66,    67,    70,   315,    70,   176,    35,
     146,   147,   148,   149,   158,   159,   188,   189,   190,   191,
     192,   228,    73,    73,   154,   289,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   294,   295,   297,    66,    90,   187,   187,    71,
     186,    67,    71,    67,    71,   185,    35,   238,   316,   239,
     237,    65,   222,    65,   149,    65,   149,   311,   311,   136,
     312,   312,   228,    66,   227,   227,    66,    66,   213,   290,
     290,   290,   290,   194,   194,    66,    66,    70,   234,   194,
     194,   285,   227,   230,   231,   149,   226,   193,    66,   264,
     285,   288,   193,   285,   194,   273,   273,   273,   274,   274,
     275,   275,   276,   276,   276,   276,   277,   277,   278,   279,
     280,   281,   282,    88,   288,   285,   176,    70,   176,    89,
     111,   147,   149,   177,   178,   179,   316,   313,    65,    76,
     208,   214,   226,   208,   214,   226,    65,    76,   214,   226,
     214,   226,    67,    67,   317,   317,    73,    73,    66,    67,
      65,   296,   289,    71,    71,    67,    71,    67,    89,    71,
       7,    10,    11,    17,    23,    24,    27,    28,    31,    32,
      34,    35,    42,   111,   139,   140,   141,   142,   146,   147,
     148,   149,   193,   232,   233,   234,   240,   242,   243,   244,
     245,   246,   247,   248,   249,   287,   288,   301,   310,    65,
     315,   316,   300,   300,   317,    66,    90,   195,   195,   195,
     195,    66,    66,    70,   273,   235,   316,    67,    67,    67,
      66,    66,    66,   226,    66,    67,    73,    66,   284,    88,
     316,   176,   316,   177,    88,    89,   180,   183,   205,    89,
     181,   183,   214,    67,    89,    67,    89,    71,   149,   311,
     311,   311,   311,   149,   311,   311,    54,   190,   192,    66,
      66,    66,   297,    66,   264,    71,    35,    89,    65,   289,
     287,    89,    65,    88,    76,   193,   232,    65,    65,   318,
     318,   214,   224,   214,   224,   214,   224,   214,   224,    88,
      89,    28,    65,   151,    71,   290,   290,    66,    35,    70,
      72,    74,   196,   197,   200,   201,   202,   203,   204,   285,
     198,   199,   239,    66,   256,   194,   194,   227,   285,   284,
      71,   316,    71,   289,   290,   182,   183,   290,   182,   181,
     180,   290,   290,   290,   290,   290,   290,   296,    66,   288,
      54,    88,    89,   287,   232,   288,    89,    34,   288,   288,
      70,   241,   311,   311,   311,   311,   311,   311,   311,   311,
     290,    65,   251,   302,    65,   195,   195,    88,   199,   289,
      35,    42,   197,    72,    90,   202,    71,   196,    71,    66,
      66,    66,    71,   290,   290,    66,   289,   232,    89,    89,
      65,    66,    66,   235,    70,   232,   251,   308,    88,    66,
     302,    71,   196,    54,    73,   289,    67,   232,    88,   287,
     288,   232,   232,   239,   235,    88,    66,    72,   251,   303,
     304,   305,    89,    66,    71,   289,    54,    73,   232,    89,
      66,     8,   316,   239,   303,    89,   297,    65,    88,    67,
      89,    73,   289,   287,    89,   232,    71,   316,    88,    73,
     288,   303,   305,    73,    66,    71,   303,   251,    66,    88,
     232,    88,    65,   251,   307,   306,   307,   288,    67,    88,
      66,   251,   192,   309,    67,   192
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
#line 3349 "c.tab.c"
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


