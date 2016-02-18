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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         quickstep_yyparse
#define yylex           quickstep_yylex
#define yyerror         quickstep_yyerror
#define yydebug         quickstep_yydebug
#define yynerrs         quickstep_yynerrs


/* Copy the first part of user declarations.  */
#line 33 "../SqlParser.ypp" /* yacc.c:339  */


/* Override the default definition, as we only need <first_line> and <first_column>. */
typedef struct YYLTYPE {
  int first_line;
  int first_column;
} YYLTYPE;

#define YYLTYPE_IS_DECLARED 1

/*
 * Modified from the default YYLLOC_DEFAULT
 * (http://www.gnu.org/software/bison/manual/html_node/Location-Default-Action.html).
 * The assignments for last_line and last_column are removed as they are not used.
 */
#define YYLLOC_DEFAULT(current, rhs, n)                         \
  do {                                                          \
    if (n) {                                                    \
      (current).first_line   = YYRHSLOC(rhs, 1).first_line;     \
      (current).first_column = YYRHSLOC(rhs, 1).first_column;   \
    } else {                                                    \
      /* empty RHS */                                           \
      (current).first_line = YYRHSLOC(rhs, 0).first_line;       \
      (current).first_column = YYRHSLOC(rhs, 0).first_column;   \
    }                                                           \
  } while (0)

#line 62 "../SqlParser.ypp" /* yacc.c:339  */

#include <cstdlib>
#include <string>
#include <utility>

#include "parser/ParseAssignment.hpp"
#include "parser/ParseAttributeDefinition.hpp"
#include "parser/ParseBasicExpressions.hpp"
#include "parser/ParseExpression.hpp"
#include "parser/ParseGroupBy.hpp"
#include "parser/ParseHaving.hpp"
#include "parser/ParseKeyValue.hpp"
#include "parser/ParseLimit.hpp"
#include "parser/ParseLiteralValue.hpp"
#include "parser/ParseOrderBy.hpp"
#include "parser/ParsePredicate.hpp"
#include "parser/ParserUtil.hpp"
#include "parser/ParseSelect.hpp"
#include "parser/ParseSelectionClause.hpp"
#include "parser/ParseSimpleTableReference.hpp"
#include "parser/ParseStatement.hpp"
#include "parser/ParseString.hpp"
#include "parser/ParseSubqueryExpression.hpp"
#include "parser/ParseSubqueryTableReference.hpp"
#include "parser/ParseTableReference.hpp"
#include "types/Type.hpp"
#include "types/TypeFactory.hpp"
#include "types/TypeID.hpp"
#include "types/operations/binary_operations/BinaryOperation.hpp"
#include "types/operations/binary_operations/BinaryOperationFactory.hpp"
#include "types/operations/binary_operations/BinaryOperationID.hpp"
#include "types/operations/comparisons/Comparison.hpp"
#include "types/operations/comparisons/ComparisonFactory.hpp"
#include "types/operations/comparisons/ComparisonID.hpp"
#include "types/operations/unary_operations/UnaryOperation.hpp"
#include "types/operations/unary_operations/UnaryOperationFactory.hpp"
#include "types/operations/unary_operations/UnaryOperationID.hpp"
#include "utility/PtrList.hpp"
#include "utility/PtrVector.hpp"

// Needed for Bison 2.6 and higher, which do not automatically provide this typedef.
typedef void* yyscan_t;

#line 144 "SqlParser_gen.cpp" /* yacc.c:339  */

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
   by #include "SqlParser_gen.hpp".  */
#ifndef YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
# define YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int quickstep_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_NAME = 258,
    TOKEN_STRING_SINGLE_QUOTED = 259,
    TOKEN_STRING_DOUBLE_QUOTED = 260,
    TOKEN_UNSIGNED_NUMVAL = 261,
    TOKEN_OR = 262,
    TOKEN_AND = 263,
    TOKEN_NOT = 264,
    TOKEN_EQ = 265,
    TOKEN_LT = 266,
    TOKEN_LEQ = 267,
    TOKEN_GT = 268,
    TOKEN_GEQ = 269,
    TOKEN_NEQ = 270,
    TOKEN_LIKE = 271,
    TOKEN_BETWEEN = 272,
    TOKEN_IS = 273,
    UNARY_PLUS = 274,
    UNARY_MINUS = 275,
    TOKEN_ADD = 276,
    TOKEN_ALL = 277,
    TOKEN_ALTER = 278,
    TOKEN_AS = 279,
    TOKEN_ASC = 280,
    TOKEN_BIGINT = 281,
    TOKEN_BIT = 282,
    TOKEN_BLOOM_FILTER = 283,
    TOKEN_CSB_TREE = 284,
    TOKEN_BY = 285,
    TOKEN_CHARACTER = 286,
    TOKEN_CHECK = 287,
    TOKEN_COLUMN = 288,
    TOKEN_CONSTRAINT = 289,
    TOKEN_COPY = 290,
    TOKEN_CREATE = 291,
    TOKEN_DATE = 292,
    TOKEN_DATETIME = 293,
    TOKEN_DECIMAL = 294,
    TOKEN_DEFAULT = 295,
    TOKEN_DELETE = 296,
    TOKEN_DELIMITER = 297,
    TOKEN_DESC = 298,
    TOKEN_DISTINCT = 299,
    TOKEN_DOUBLE = 300,
    TOKEN_DROP = 301,
    TOKEN_ESCAPE_STRINGS = 302,
    TOKEN_FALSE = 303,
    TOKEN_FIRST = 304,
    TOKEN_FLOAT = 305,
    TOKEN_FOREIGN = 306,
    TOKEN_FROM = 307,
    TOKEN_FULL = 308,
    TOKEN_GROUP = 309,
    TOKEN_HAVING = 310,
    TOKEN_INDEX = 311,
    TOKEN_INNER = 312,
    TOKEN_INSERT = 313,
    TOKEN_INTEGER = 314,
    TOKEN_INTERVAL = 315,
    TOKEN_INTO = 316,
    TOKEN_JOIN = 317,
    TOKEN_KEY = 318,
    TOKEN_LAST = 319,
    TOKEN_LEFT = 320,
    TOKEN_LIMIT = 321,
    TOKEN_LONG = 322,
    TOKEN_NULL = 323,
    TOKEN_NULLS = 324,
    TOKEN_OFF = 325,
    TOKEN_ON = 326,
    TOKEN_ORDER = 327,
    TOKEN_OUTER = 328,
    TOKEN_PRIMARY = 329,
    TOKEN_QUIT = 330,
    TOKEN_REAL = 331,
    TOKEN_REFERENCES = 332,
    TOKEN_RIGHT = 333,
    TOKEN_ROW_DELIMITER = 334,
    TOKEN_SELECT = 335,
    TOKEN_SET = 336,
    TOKEN_SMALLINT = 337,
    TOKEN_TABLE = 338,
    TOKEN_TIME = 339,
    TOKEN_TIMESTAMP = 340,
    TOKEN_TRUE = 341,
    TOKEN_UNIQUE = 342,
    TOKEN_UPDATE = 343,
    TOKEN_USING = 344,
    TOKEN_VALUES = 345,
    TOKEN_VARCHAR = 346,
    TOKEN_WHERE = 347,
    TOKEN_WITH = 348,
    TOKEN_YEARMONTH = 349,
    TOKEN_EOF = 350,
    TOKEN_LEX_ERROR = 351
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 106 "../SqlParser.ypp" /* yacc.c:355  */

  quickstep::ParseString *string_value_;

  quickstep::PtrList<quickstep::ParseString> *string_list_;

  bool boolean_value_;

  quickstep::NumericParseLiteralValue *numeric_literal_value_;
  quickstep::ParseLiteralValue *literal_value_;
  quickstep::PtrList<quickstep::ParseScalarLiteral> *literal_value_list_;

  quickstep::ParseExpression *expression_;

  quickstep::ParseScalarLiteral *scalar_literal_;
  quickstep::ParseAttribute *attribute_;

  quickstep::ParsePredicate *predicate_;

  quickstep::ParseSubqueryExpression *subquery_expression_;

  quickstep::ParseSelectionClause *selection_;
  quickstep::ParseSelectionItem *selection_item_;
  quickstep::ParseSelectionList *selection_list_;

  quickstep::ParseTableReference *table_reference_;
  quickstep::PtrList<quickstep::ParseTableReference> *table_reference_list_;
  quickstep::ParseTableReferenceSignature *table_reference_signature_;

  quickstep::ParseDataType *data_type_;
  quickstep::ParseAttributeDefinition *attribute_definition_;
  quickstep::ParseColumnConstraint *column_constraint_;
  quickstep::PtrList<quickstep::ParseColumnConstraint> *column_constraint_list_;
  quickstep::PtrList<quickstep::ParseAttributeDefinition> *attribute_definition_list_;

  quickstep::ParseKeyValue *key_value_;
  quickstep::PtrList<quickstep::ParseKeyValue> *key_value_list_;
  quickstep::ParseKeyStringValue *key_string_value_;
  quickstep::ParseKeyStringList *key_string_list_;
  quickstep::ParseKeyLiteralValue *key_literal_value_;

  quickstep::ParseCopyFromParams *copy_from_params_;

  quickstep::ParseAssignment *assignment_;
  quickstep::PtrList<quickstep::ParseAssignment> *assignment_list_;

  quickstep::ParseStatement *statement_;
  quickstep::ParseStatementSelect *select_statement_;
  quickstep::ParseStatementUpdate *update_statement_;
  quickstep::ParseStatementInsert *insert_statement_;
  quickstep::ParseStatementDelete *delete_statement_;
  quickstep::ParseStatementCopyFrom *copy_from_statement_;
  quickstep::ParseStatementCreateTable *create_table_statement_;
  quickstep::ParseStatementDropTable *drop_table_statement_;
  quickstep::ParseStatementQuit *quit_statement_;

  const quickstep::Comparison *comparison_;
  const quickstep::UnaryOperation *unary_operation_;
  const quickstep::BinaryOperation *binary_operation_;

  quickstep::ParseFunctionCall *function_call_;
  quickstep::PtrList<quickstep::ParseExpression> *expression_list_;

  quickstep::ParseSelect *select_query_;
  quickstep::ParseGroupBy *opt_group_by_clause_;
  quickstep::ParseHaving *opt_having_clause_;
  quickstep::ParseOrderBy *opt_order_by_clause_;
  bool *order_direction_;
  quickstep::ParseLimit *opt_limit_clause_;

  quickstep::PtrList<quickstep::ParseOrderByItem> *order_commalist_;
  quickstep::ParseOrderByItem *order_item_;

  quickstep::PtrVector<quickstep::ParseSubqueryTableReference> *with_list_;
  quickstep::ParseSubqueryTableReference *with_list_element_;

#line 357 "SqlParser_gen.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int quickstep_yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement);

#endif /* !YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 182 "../SqlParser.ypp" /* yacc.c:358  */

/* This header needs YYSTYPE, which is defined by the %union directive above */
#include "SqlLexer_gen.hpp"
void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature);

#line 392 "SqlParser_gen.cpp" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   975

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  404

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

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
     103,   104,    21,    19,   105,    20,    25,    22,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   102,
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
      15,    16,    17,    18,    23,    24,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   491,   491,   495,   499,   502,   509,   512,   515,   518,
     521,   524,   527,   530,   533,   536,   542,   548,   555,   561,
     568,   577,   582,   594,   599,   604,   608,   614,   619,   622,
     625,   630,   633,   636,   639,   642,   645,   648,   651,   654,
     657,   669,   672,   675,   693,   713,   716,   719,   724,   729,
     735,   741,   750,   754,   760,   763,   768,   773,   778,   785,
     792,   796,   802,   805,   810,   813,   821,   825,   831,   834,
     837,   842,   847,   852,   857,   862,   869,   872,   879,   887,
     892,   897,   900,   905,   909,   913,   917,   923,   928,   933,
     937,   943,   949,   954,   957,   962,   966,   972,   978,   984,
     987,   991,   997,  1000,  1005,  1009,  1015,  1018,  1021,  1026,
    1031,  1034,  1040,  1044,  1050,  1056,  1062,  1068,  1074,  1080,
    1086,  1092,  1100,  1105,  1109,  1113,  1118,  1121,  1126,  1129,
    1134,  1138,  1144,  1147,  1152,  1155,  1160,  1163,  1168,  1171,
    1190,  1194,  1200,  1207,  1210,  1213,  1218,  1221,  1224,  1230,
    1233,  1238,  1243,  1252,  1257,  1266,  1271,  1274,  1279,  1282,
    1287,  1293,  1299,  1306,  1309,  1316,  1319,  1324,  1327,  1332,
    1335,  1340,  1343,  1346,  1349,  1354,  1358,  1362,  1367,  1371,
    1377,  1380,  1383,  1386,  1398,  1402,  1421,  1436,  1440,  1446,
    1449,  1455,  1458,  1461,  1464,  1467,  1470,  1475,  1486,  1489,
    1494,  1497,  1503,  1507,  1513,  1516,  1524,  1527,  1530,  1533
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_NAME",
  "TOKEN_STRING_SINGLE_QUOTED", "TOKEN_STRING_DOUBLE_QUOTED",
  "TOKEN_UNSIGNED_NUMVAL", "TOKEN_OR", "TOKEN_AND", "TOKEN_NOT",
  "TOKEN_EQ", "TOKEN_LT", "TOKEN_LEQ", "TOKEN_GT", "TOKEN_GEQ",
  "TOKEN_NEQ", "TOKEN_LIKE", "TOKEN_BETWEEN", "TOKEN_IS", "'+'", "'-'",
  "'*'", "'/'", "UNARY_PLUS", "UNARY_MINUS", "'.'", "TOKEN_ADD",
  "TOKEN_ALL", "TOKEN_ALTER", "TOKEN_AS", "TOKEN_ASC", "TOKEN_BIGINT",
  "TOKEN_BIT", "TOKEN_BLOOM_FILTER", "TOKEN_CSB_TREE", "TOKEN_BY",
  "TOKEN_CHARACTER", "TOKEN_CHECK", "TOKEN_COLUMN", "TOKEN_CONSTRAINT",
  "TOKEN_COPY", "TOKEN_CREATE", "TOKEN_DATE", "TOKEN_DATETIME",
  "TOKEN_DECIMAL", "TOKEN_DEFAULT", "TOKEN_DELETE", "TOKEN_DELIMITER",
  "TOKEN_DESC", "TOKEN_DISTINCT", "TOKEN_DOUBLE", "TOKEN_DROP",
  "TOKEN_ESCAPE_STRINGS", "TOKEN_FALSE", "TOKEN_FIRST", "TOKEN_FLOAT",
  "TOKEN_FOREIGN", "TOKEN_FROM", "TOKEN_FULL", "TOKEN_GROUP",
  "TOKEN_HAVING", "TOKEN_INDEX", "TOKEN_INNER", "TOKEN_INSERT",
  "TOKEN_INTEGER", "TOKEN_INTERVAL", "TOKEN_INTO", "TOKEN_JOIN",
  "TOKEN_KEY", "TOKEN_LAST", "TOKEN_LEFT", "TOKEN_LIMIT", "TOKEN_LONG",
  "TOKEN_NULL", "TOKEN_NULLS", "TOKEN_OFF", "TOKEN_ON", "TOKEN_ORDER",
  "TOKEN_OUTER", "TOKEN_PRIMARY", "TOKEN_QUIT", "TOKEN_REAL",
  "TOKEN_REFERENCES", "TOKEN_RIGHT", "TOKEN_ROW_DELIMITER", "TOKEN_SELECT",
  "TOKEN_SET", "TOKEN_SMALLINT", "TOKEN_TABLE", "TOKEN_TIME",
  "TOKEN_TIMESTAMP", "TOKEN_TRUE", "TOKEN_UNIQUE", "TOKEN_UPDATE",
  "TOKEN_USING", "TOKEN_VALUES", "TOKEN_VARCHAR", "TOKEN_WHERE",
  "TOKEN_WITH", "TOKEN_YEARMONTH", "TOKEN_EOF", "TOKEN_LEX_ERROR", "';'",
  "'('", "')'", "','", "$accept", "start", "sql_statement",
  "quit_statement", "alter_table_statement", "create_table_statement",
  "create_index_statement", "drop_table_statement", "column_def",
  "column_def_commalist", "data_type", "column_constraint_def",
  "column_constraint_def_list", "opt_column_constraint_def_list",
  "table_constraint_def", "table_constraint_def_commalist",
  "opt_table_constraint_def_commalist", "opt_column_list",
  "key_value_list", "key_value", "key_string_value", "key_string_list",
  "key_literal_value", "index_type", "opt_index_properties",
  "insert_statement", "copy_from_statement", "opt_copy_from_params",
  "copy_from_params", "update_statement", "delete_statement",
  "assignment_list", "assignment_item", "select_statement",
  "opt_with_clause", "with_list", "with_list_element", "select_query",
  "opt_all_distinct", "selection", "selection_item_commalist",
  "selection_item", "from_clause", "opt_join_chain", "join_chain", "join",
  "subquery_expression", "table_reference", "table_reference_signature",
  "table_reference_signature_primary", "table_reference_commalist",
  "opt_group_by_clause", "opt_having_clause", "opt_order_by_clause",
  "opt_limit_clause", "order_commalist", "order_item",
  "opt_order_direction", "opt_nulls_first", "opt_where_clause",
  "where_clause", "or_expression", "and_expression", "not_expression",
  "predicate_expression_base", "add_expression", "multiply_expression",
  "unary_expression", "expression_base", "function_call",
  "expression_list", "literal_value", "literal_value_commalist",
  "attribute_ref", "comparison_operation", "unary_operation",
  "add_operation", "multiply_operation", "name_commalist", "any_name",
  "boolean_value", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    43,
      45,    42,    47,   274,   275,    46,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,    59,    40,    41,    44
};
# endif

#define YYPACT_NINF -188

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-188)))

#define YYTABLE_NINF -94

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      83,  -188,    19,    18,    -5,     0,    26,    67,  -188,    18,
      18,  -188,   120,    87,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,    52,    18,  -188,  -188,    99,    18,
      18,    18,    18,    18,    73,    57,  -188,   136,    81,  -188,
    -188,  -188,    23,  -188,    54,   202,   116,   110,   118,  -188,
     -30,    18,    18,   129,    18,  -188,  -188,   426,    28,   172,
     125,    18,    18,   499,  -188,  -188,   140,    18,    35,  -188,
     241,  -188,    52,  -188,   122,  -188,  -188,  -188,   250,   252,
    -188,  -188,  -188,   161,  -188,   201,  -188,  -188,  -188,  -188,
     264,  -188,  -188,  -188,  -188,  -188,  -188,   167,   208,   572,
     272,   223,   173,  -188,   183,   207,  -188,  -188,  -188,  -188,
    -188,   645,   -11,    18,    39,    18,    18,   181,  -188,   191,
    -188,   132,   135,   718,   499,   279,   290,  -188,  -188,   955,
     282,   864,   137,    18,  -188,   572,   198,  -188,    18,  -188,
    -188,   298,  -188,  -188,   303,  -188,    -8,  -188,     5,   118,
     572,  -188,  -188,    18,   572,  -188,  -188,  -188,   572,   252,
    -188,    18,   352,  -188,   214,   253,   259,   226,  -188,  -188,
    -188,   -28,    18,   236,    39,    18,  -188,    82,  -188,    -4,
      24,   499,   499,   314,  -188,  -188,  -188,  -188,  -188,  -188,
     329,   572,   572,     6,  -188,   141,   240,  -188,   219,  -188,
    -188,   232,   235,  -188,   146,  -188,    90,   146,   284,  -188,
    -188,   207,  -188,  -188,   237,  -188,   219,   143,   499,   243,
     244,    18,   340,   -21,   150,   157,   255,  -188,   245,  -188,
    -188,   276,   248,   864,  -188,   285,    18,  -188,  -188,    82,
    -188,  -188,   290,  -188,   572,  -188,   134,   219,   281,  -188,
    -188,   864,   249,  -188,  -188,    18,  -188,  -188,    21,   292,
      18,    48,   130,     5,  -188,   147,  -188,  -188,   325,   301,
    -188,  -188,   572,    -2,    18,    18,   186,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,    89,  -188,  -188,  -188,   260,    39,
    -188,   499,  -188,  -188,   262,  -188,   174,   572,  -188,  -188,
     864,  -188,    18,   295,    18,   -58,    18,   302,    18,   307,
    -188,  -188,   572,   499,   291,   219,  -188,   188,   192,  -188,
     371,   -21,    18,  -188,  -188,     2,    18,   572,   219,   203,
     -31,    18,   -16,   499,   -15,    18,    -7,    18,   271,   279,
     342,   308,   296,  -188,  -188,  -188,   209,  -188,  -188,  -188,
    -188,   791,  -188,   277,   219,  -188,   499,    -1,   499,   279,
     499,    11,   499,    17,   572,   374,  -188,    18,  -188,    18,
      18,  -188,  -188,  -188,   279,   499,   279,   279,   499,   279,
     499,   280,  -188,    33,  -188,   283,  -188,   211,   279,   279,
     279,   572,  -188,  -188,   313,    18,  -188,  -188,     8,  -188,
     221,  -188,  -188,  -188
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     5,     0,     0,    13,     6,     8,     9,    11,    12,
       7,    15,    10,    14,     0,     0,   204,   205,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,   128,     1,
       3,     2,    99,    92,     0,     0,     0,     0,   149,    23,
       0,     0,     0,     0,     0,   100,   101,     0,     0,     0,
      81,     0,     0,     0,    88,   150,     0,     0,   149,    90,
       0,    96,     0,    97,     0,   202,   184,   181,     0,   197,
     102,    38,    27,     0,    28,    29,    32,    34,    35,    37,
       0,    39,   180,    33,    36,    30,    31,     0,     0,     0,
       0,     0,   103,   104,   108,   166,   168,   170,   173,   172,
     171,     0,   189,     0,     0,     0,     0,     0,    80,    64,
      25,     0,     0,     0,     0,   151,   153,   155,   157,     0,
     171,     0,     0,     0,    87,     0,     0,   129,     0,   182,
     183,     0,    41,   185,     0,    42,     0,   186,     0,   149,
       0,   198,   199,     0,     0,   107,   200,   201,     0,     0,
     169,     0,     0,    17,     0,     0,     0,     0,    18,    19,
      20,     0,     0,     0,    62,     0,    40,    54,   156,     0,
       0,     0,     0,     0,   191,   193,   194,   195,   196,   192,
       0,     0,     0,     0,   187,     0,     0,    89,    91,   122,
     203,     0,     0,   174,     0,   130,   110,   125,   132,   105,
     106,   165,   167,   190,     0,   175,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    63,    21,
      26,     0,     0,     0,    45,     0,     0,    47,    53,    55,
      24,   164,   152,   154,     0,   162,     0,   163,     0,   161,
      79,     0,     0,    43,    44,     0,   123,   126,     0,     0,
       0,     0,     0,     0,   109,   111,   113,   124,     0,   134,
     176,   177,     0,     0,     0,     0,     0,    83,   208,   209,
     207,   206,    84,    82,     0,    65,    74,    75,    76,     0,
      46,     0,    49,    48,     0,    52,     0,     0,   160,   188,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
     131,   112,     0,     0,   136,   179,    59,     0,     0,    56,
       0,     0,     0,    22,    60,     0,     0,     0,   158,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,   135,
       0,   138,     0,    57,    85,    86,     0,    66,    68,    69,
      70,     0,    50,     0,   159,    78,     0,     0,     0,   115,
       0,     0,     0,     0,     0,     0,    98,     0,    77,     0,
       0,    73,    71,    51,   121,     0,   114,   117,     0,   119,
       0,   137,   140,   143,   139,     0,    67,     0,   120,   116,
     118,     0,   144,   145,   146,     0,    72,   141,     0,   142,
       0,   147,   148,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,   -97,  -188,
     267,   151,  -188,  -188,  -172,  -188,  -188,  -188,  -188,    13,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,   258,  -188,  -188,  -188,   341,   326,  -188,  -188,
    -188,   247,  -188,  -188,  -188,   138,   346,   142,   193,  -187,
    -188,  -188,  -188,  -188,  -188,  -188,    10,  -188,  -188,   -55,
    -188,   -93,   225,   222,   286,   -53,   254,   256,   299,  -188,
     100,  -130,   111,   -38,  -188,  -188,  -188,  -188,   -25,    -3,
      92
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,    15,    16,    17,    18,   120,   121,
     100,   238,   239,   240,   168,   228,   229,   173,   346,   347,
     348,   349,   350,   288,   323,    19,    20,   118,   224,    21,
      22,    68,    69,    23,    24,    35,    36,    43,    57,   101,
     102,   103,   149,   264,   265,   266,   204,   205,   256,    37,
     206,   269,   314,   341,   366,   381,   382,   394,   399,    64,
      65,   125,   126,   127,   128,   129,   105,   106,   107,   108,
     217,   109,   195,   110,   192,   111,   154,   158,    74,   112,
     282
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,   194,   227,   181,   104,   181,    34,    38,    26,   181,
      27,   151,   152,   134,   161,   248,   163,   257,   333,   222,
     257,    26,    44,    27,   223,   130,    46,    47,    48,    49,
      50,   179,   278,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   132,   151,   152,   356,   146,   138,    70,    38,
      55,    75,   151,   152,   279,   280,    29,    31,   119,   122,
     358,   360,   401,   392,    75,    66,   113,   114,   301,   362,
     281,   180,    56,    67,   138,   375,   164,   402,   230,   249,
      58,   393,   198,    30,     1,   130,   130,   378,   302,   138,
     138,   231,   162,   380,   208,   165,   203,   104,   138,   303,
     241,   155,   316,   292,   138,    59,   352,    25,    72,   216,
     122,     2,   169,   170,    32,   306,   138,   324,   166,   232,
      39,   299,   138,     3,     4,   273,   307,   233,   203,     5,
      70,   167,    63,    33,     6,   200,   320,    42,   246,   247,
     133,   321,   297,   130,   130,   207,     7,   225,   258,    26,
     210,    27,   259,   151,   152,   234,    45,   260,   213,    51,
     261,   235,    52,     8,   236,    53,    81,    82,   -93,    75,
     194,    83,   122,   262,   237,   255,     9,    84,    85,    86,
     130,    10,   327,    11,    54,    87,    26,    40,    27,    41,
      88,   296,    61,   151,   152,   263,   276,   308,   325,    89,
     176,    38,   151,   152,    38,   258,    60,    91,   309,   259,
     115,   116,   153,    62,   260,    63,    93,   261,    75,   315,
     339,   371,    94,   117,    95,    96,   137,   138,   156,   157,
     262,    97,    72,   294,    98,   305,   174,   175,   151,   152,
     359,   196,   138,   131,   328,   250,   251,   271,   272,   317,
     318,   135,    38,   130,   283,   284,   139,    75,   140,   216,
     207,   285,   138,   374,   141,   376,   142,   377,   143,   379,
     144,    75,    75,   145,   354,   130,   147,   330,   150,   332,
     148,   334,   388,   336,   171,   389,   181,   390,   286,   287,
     319,   138,   342,   138,   172,   130,   343,   138,   182,    75,
     193,    75,   199,    75,   201,    75,   357,   355,   251,   202,
     361,   383,   363,   368,   369,   396,   138,   218,   130,   351,
     130,   219,   130,   353,   130,   403,   138,   220,    75,   221,
     226,   244,    75,   245,    75,   252,   253,   130,   383,   254,
     130,   270,   130,   268,   277,   387,   274,   275,   372,   290,
     289,   291,   300,   293,   298,    26,    76,    27,    77,   304,
     312,   313,   331,   322,   385,   326,   351,    75,   340,   335,
     400,    78,    79,   214,   337,   344,   272,   364,   367,   365,
     384,   373,   386,    81,    82,   391,   395,   398,    83,   177,
     295,   197,    75,    71,    84,    85,    86,   209,   136,    73,
     267,   397,    87,   311,   243,   310,   242,    88,   211,   178,
     160,   329,   338,   345,   212,     0,    89,    90,     0,     0,
       0,     0,     0,     0,    91,    92,     0,     0,     0,    26,
      76,    27,    77,    93,     0,     0,     0,     0,     0,    94,
       0,    95,    96,     0,     0,    78,    79,    80,    97,     0,
       0,    98,     0,     0,     0,    99,   215,    81,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,     0,     0,     0,     0,     0,     0,    91,    92,
       0,     0,    26,    76,    27,    77,     0,    93,   123,     0,
       0,     0,     0,    94,     0,    95,    96,     0,    78,    79,
       0,     0,    97,     0,     0,    98,     0,     0,     0,    99,
      81,    82,     0,     0,     0,    83,     0,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,     0,    89,    90,     0,     0,     0,     0,     0,
       0,    91,    92,     0,     0,    26,    76,    27,    77,     0,
      93,     0,     0,     0,     0,     0,    94,     0,    95,    96,
       0,    78,    79,     0,     0,    97,     0,     0,    98,     0,
       0,     0,   124,    81,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,    89,    90,     0,     0,
       0,     0,     0,     0,    91,    92,     0,     0,    26,    76,
      27,    77,     0,    93,     0,     0,     0,     0,     0,    94,
       0,    95,    96,     0,    78,   159,     0,     0,    97,     0,
       0,    98,     0,     0,     0,    99,    81,    82,     0,     0,
       0,    83,     0,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,    89,
      90,     0,     0,     0,     0,     0,     0,    91,    92,     0,
       0,    26,    76,    27,    77,     0,    93,     0,     0,     0,
       0,     0,    94,     0,    95,    96,     0,    78,    79,     0,
       0,    97,     0,     0,    98,     0,     0,     0,    99,    81,
      82,     0,     0,     0,    83,     0,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    90,     0,     0,     0,     0,     0,     0,
      91,    92,     0,     0,    26,    76,    27,    77,     0,    93,
       0,     0,     0,     0,     0,    94,     0,    95,    96,     0,
      78,   159,     0,     0,    97,     0,     0,    98,     0,     0,
       0,   124,    81,    82,     0,     0,     0,    83,     0,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    91,    92,     0,     0,     0,    76,     0,
      77,     0,    93,     0,     0,     0,     0,     0,    94,     0,
      95,    96,     0,    78,   159,     0,     0,    97,     0,     0,
      98,     0,     0,     0,   370,    81,    82,     0,     0,     0,
      83,     0,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    90,
       0,     0,     0,     0,     0,     0,    91,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,    94,     0,    95,    96,     0,     0,     0,     0,     0,
      97,     0,     0,    98,   183,   184,   185,   186,   187,   188,
     189,   190,   191,     0,   151,   152
};

static const yytype_int16 yycheck[] =
{
       3,   131,   174,     7,    57,     7,     9,    10,     3,     7,
       5,    19,    20,    68,    25,     9,   113,   204,    76,    47,
     207,     3,    25,     5,    52,    63,    29,    30,    31,    32,
      33,   124,    53,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    67,    19,    20,    76,    99,   105,    51,    52,
      27,    54,    19,    20,    75,    76,    61,    57,    61,    62,
      76,    76,    54,    30,    67,    95,    38,    39,   255,    76,
      91,   124,    49,   103,   105,    76,    37,    69,   175,    73,
      26,    48,   135,    88,     1,   123,   124,    76,    67,   105,
     105,     9,   103,    76,   149,    56,   104,   150,   105,    78,
     104,   104,   104,   233,   105,    51,   104,    88,   103,   162,
     113,    28,   115,   116,    88,    67,   105,   289,    79,    37,
       0,   251,   105,    40,    41,   218,    78,    45,   104,    46,
     133,    92,    97,    66,    51,   138,    47,    85,   191,   192,
     105,    52,     8,   181,   182,   148,    63,   172,    58,     3,
     153,     5,    62,    19,    20,    73,    57,    67,   161,    86,
      70,    79,   105,    80,    82,    29,    31,    32,    85,   172,
     300,    36,   175,    83,    92,    29,    93,    42,    43,    44,
     218,    98,     8,   100,   103,    50,     3,   100,     5,   102,
      55,   244,    76,    19,    20,   105,   221,    67,   291,    64,
      65,   204,    19,    20,   207,    58,     4,    72,    78,    62,
      38,    39,    29,   103,    67,    97,    81,    70,   221,   272,
     313,   351,    87,    98,    89,    90,   104,   105,    21,    22,
      83,    96,   103,   236,    99,   260,   104,   105,    19,    20,
     333,   104,   105,   103,   297,   104,   105,   104,   105,   274,
     275,    10,   255,   291,   104,   105,     6,   260,     6,   312,
     263,   104,   105,   356,   103,   358,    65,   360,     4,   362,
     103,   274,   275,    65,   327,   313,     4,   302,   105,   304,
      57,   306,   375,   308,   103,   378,     7,   380,    33,    34,
     104,   105,   104,   105,   103,   333,   104,   105,     8,   302,
      18,   304,   104,   306,     6,   308,   331,   104,   105,     6,
     335,   364,   337,   104,   105,   104,   105,   103,   356,   322,
     358,    68,   360,   326,   362,   104,   105,    68,   331,   103,
      94,    17,   335,     4,   337,    95,   104,   375,   391,   104,
     378,   104,   380,    59,     4,   370,   103,   103,   351,    73,
     105,   103,   103,    68,    73,     3,     4,     5,     6,    67,
      35,    60,    67,   103,   367,   103,   369,   370,    77,    67,
     395,    19,    20,    21,    67,     4,   105,    35,    82,    71,
       6,   104,   369,    31,    32,   105,   103,    74,    36,   122,
     239,   133,   395,    52,    42,    43,    44,   150,    72,    53,
     207,   391,    50,   265,   182,   263,   181,    55,   154,   123,
     111,   300,   312,   321,   158,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,     3,
       4,     5,     6,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    -1,    -1,    19,    20,    21,    96,    -1,
      -1,    99,    -1,    -1,    -1,   103,   104,    31,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,     3,     4,     5,     6,    -1,    81,     9,    -1,
      -1,    -1,    -1,    87,    -1,    89,    90,    -1,    19,    20,
      -1,    -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
      31,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,     3,     4,     5,     6,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    89,    90,
      -1,    19,    20,    -1,    -1,    96,    -1,    -1,    99,    -1,
      -1,    -1,   103,    31,    32,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,     3,     4,
       5,     6,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    -1,    19,    20,    -1,    -1,    96,    -1,
      -1,    99,    -1,    -1,    -1,   103,    31,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,     3,     4,     5,     6,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    89,    90,    -1,    19,    20,    -1,
      -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,    31,
      32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,     3,     4,     5,     6,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    89,    90,    -1,
      19,    20,    -1,    -1,    96,    -1,    -1,    99,    -1,    -1,
      -1,   103,    31,    32,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,     4,    -1,
       6,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      89,    90,    -1,    19,    20,    -1,    -1,    96,    -1,    -1,
      99,    -1,    -1,    -1,   103,    31,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    99,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    28,    40,    41,    46,    51,    63,    80,    93,
      98,   100,   107,   108,   109,   110,   111,   112,   113,   131,
     132,   135,   136,   139,   140,    88,     3,     5,   185,    61,
      88,    57,    88,    66,   185,   141,   142,   155,   185,     0,
     100,   102,    85,   143,   185,    57,   185,   185,   185,   185,
     185,    86,   105,    29,   103,    27,    49,   144,    26,    51,
       4,    76,   103,    97,   165,   166,    95,   103,   137,   138,
     185,   142,   103,   152,   184,   185,     4,     6,    19,    20,
      21,    31,    32,    36,    42,    43,    44,    50,    55,    64,
      65,    72,    73,    81,    87,    89,    90,    96,    99,   103,
     116,   145,   146,   147,   171,   172,   173,   174,   175,   177,
     179,   181,   185,    38,    39,    38,    39,    98,   133,   185,
     114,   115,   185,     9,   103,   167,   168,   169,   170,   171,
     179,   103,   184,   105,   165,    10,   143,   104,   105,     6,
       6,   103,    65,     4,   103,    65,   171,     4,    57,   148,
     105,    19,    20,    29,   182,   185,    21,    22,   183,    20,
     174,    25,   103,   114,    37,    56,    79,    92,   120,   185,
     185,   103,   103,   123,   104,   105,    65,   116,   170,   167,
     171,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   180,    18,   177,   178,   104,   138,   171,   104,
     185,     6,     6,   104,   152,   153,   156,   185,   165,   147,
     185,   172,   173,   185,    21,   104,   171,   176,   103,    68,
      68,   103,    47,    52,   134,   184,    94,   120,   121,   122,
     114,     9,    37,    45,    73,    79,    82,    92,   117,   118,
     119,   104,   168,   169,    17,     4,   171,   171,     9,    73,
     104,   105,    95,   104,   104,    29,   154,   155,    58,    62,
      67,    70,    83,   105,   149,   150,   151,   154,    59,   157,
     104,   104,   105,   167,   103,   103,   184,     4,    53,    75,
      76,    91,   186,   104,   105,   104,    33,    34,   129,   105,
      73,   103,   177,    68,   185,   117,   171,     8,    73,   177,
     103,   155,    67,    78,    67,   184,    67,    78,    67,    78,
     153,   151,    35,    60,   158,   171,   104,   184,   184,   104,
      47,    52,   103,   130,   120,   167,   103,     8,   171,   178,
     184,    67,   184,    76,   184,    67,   184,    67,   176,   167,
      77,   159,   104,   104,     4,   186,   124,   125,   126,   127,
     128,   185,   104,   185,   171,   104,    76,   184,    76,   167,
      76,   184,    76,   184,    35,    71,   160,    82,   104,   105,
     103,   177,   185,   104,   167,    76,   167,   167,    76,   167,
      76,   161,   162,   171,     6,   185,   125,   184,   167,   167,
     167,   105,    30,    48,   163,   103,   104,   162,    74,   164,
     184,    54,    69,   104
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   106,   107,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   109,   110,   110,   110,
     110,   111,   112,   113,   114,   115,   115,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     125,   126,   127,   128,   129,   129,   130,   130,   131,   131,
     132,   133,   133,   134,   134,   134,   134,   135,   136,   137,
     137,   138,   139,   140,   140,   141,   141,   142,   143,   144,
     144,   144,   145,   145,   146,   146,   147,   147,   147,   148,
     149,   149,   150,   150,   151,   151,   151,   151,   151,   151,
     151,   151,   152,   153,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   162,   163,   163,   163,   164,   164,   164,   165,
     165,   166,   167,   167,   168,   168,   169,   169,   170,   170,
     170,   170,   170,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   174,   174,   175,   175,   175,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   178,   178,   179,
     179,   180,   180,   180,   180,   180,   180,   181,   182,   182,
     183,   183,   184,   184,   185,   185,   186,   186,   186,   186
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     6,     6,
       6,     7,     9,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     4,     1,     2,     1,     2,     2,
       4,     5,     2,     1,     0,     1,     4,     5,    10,     4,
       3,     1,     0,     1,     0,     3,     1,     3,     1,     1,
       1,     2,     4,     2,     1,     1,     0,     3,    10,     7,
       5,     0,     4,     2,     2,     4,     4,     5,     4,     3,
       1,     3,     2,     0,     2,     1,     3,     3,     9,     0,
       1,     1,     1,     1,     1,     3,     3,     2,     1,     3,
       0,     1,     2,     1,     5,     4,     6,     5,     6,     5,
       6,     5,     3,     2,     2,     1,     1,     2,     1,     4,
       1,     3,     0,     3,     0,     2,     0,     3,     0,     2,
       1,     3,     3,     0,     1,     1,     0,     2,     2,     0,
       1,     2,     3,     1,     3,     1,     2,     1,     5,     6,
       4,     3,     3,     3,     3,     3,     1,     3,     1,     2,
       1,     1,     1,     1,     3,     3,     4,     4,     1,     3,
       1,     1,     2,     2,     1,     2,     2,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1
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
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, yyscanner, parsedStatement); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, yyscanner, parsedStatement);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , yyscanner, parsedStatement);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, yyscanner, parsedStatement); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* TOKEN_NAME  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1742 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOKEN_STRING_SINGLE_QUOTED  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1752 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOKEN_STRING_DOUBLE_QUOTED  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1762 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOKEN_UNSIGNED_NUMVAL  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 1772 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 108: /* sql_statement  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 1782 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 109: /* quit_statement  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).quit_statement_) != nullptr) {
    delete ((*yyvaluep).quit_statement_);
  }
}
#line 1792 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 110: /* alter_table_statement  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 1802 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 111: /* create_table_statement  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).create_table_statement_) != nullptr) {
    delete ((*yyvaluep).create_table_statement_);
  }
}
#line 1812 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 112: /* create_index_statement  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 1822 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 113: /* drop_table_statement  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).drop_table_statement_) != nullptr) {
    delete ((*yyvaluep).drop_table_statement_);
  }
}
#line 1832 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 114: /* column_def  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_);
  }
}
#line 1842 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 115: /* column_def_commalist  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_list_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_list_);
  }
}
#line 1852 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 116: /* data_type  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).data_type_) != nullptr) {
    delete ((*yyvaluep).data_type_);
  }
}
#line 1862 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 117: /* column_constraint_def  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_) != nullptr) {
    delete ((*yyvaluep).column_constraint_);
  }
}
#line 1872 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 118: /* column_constraint_def_list  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 1882 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 119: /* opt_column_constraint_def_list  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 1892 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 123: /* opt_column_list  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_list_) != nullptr) {
    delete ((*yyvaluep).string_list_);
  }
}
#line 1902 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 124: /* key_value_list  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 1912 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 125: /* key_value  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_) != nullptr) {
    delete ((*yyvaluep).key_value_);
  }
}
#line 1922 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 126: /* key_string_value  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_value_) != nullptr) {
    delete ((*yyvaluep).key_string_value_);
  }
}
#line 1932 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 127: /* key_string_list  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_list_) != nullptr) {
    delete ((*yyvaluep).key_string_list_);
  }
}
#line 1942 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 128: /* key_literal_value  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_literal_value_) != nullptr) {
    delete ((*yyvaluep).key_literal_value_);
  }
}
#line 1952 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 129: /* index_type  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1962 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 130: /* opt_index_properties  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 1972 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 131: /* insert_statement  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).insert_statement_) != nullptr) {
    delete ((*yyvaluep).insert_statement_);
  }
}
#line 1982 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 132: /* copy_from_statement  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_statement_) != nullptr) {
    delete ((*yyvaluep).copy_from_statement_);
  }
}
#line 1992 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 133: /* opt_copy_from_params  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_params_) != nullptr) {
    delete ((*yyvaluep).copy_from_params_);
  }
}
#line 2002 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 134: /* copy_from_params  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_params_) != nullptr) {
    delete ((*yyvaluep).copy_from_params_);
  }
}
#line 2012 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 135: /* update_statement  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).update_statement_) != nullptr) {
    delete ((*yyvaluep).update_statement_);
  }
}
#line 2022 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 136: /* delete_statement  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).delete_statement_) != nullptr) {
    delete ((*yyvaluep).delete_statement_);
  }
}
#line 2032 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 137: /* assignment_list  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_list_) != nullptr) {
    delete ((*yyvaluep).assignment_list_);
  }
}
#line 2042 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 138: /* assignment_item  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_) != nullptr) {
    delete ((*yyvaluep).assignment_);
  }
}
#line 2052 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 139: /* select_statement  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_statement_) != nullptr) {
    delete ((*yyvaluep).select_statement_);
  }
}
#line 2062 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 140: /* opt_with_clause  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2072 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 141: /* with_list  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2082 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 142: /* with_list_element  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_element_) != nullptr) {
    delete ((*yyvaluep).with_list_element_);
  }
}
#line 2092 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 143: /* select_query  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_query_) != nullptr) {
    delete ((*yyvaluep).select_query_);
  }
}
#line 2102 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 145: /* selection  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_) != nullptr) {
    delete ((*yyvaluep).selection_);
  }
}
#line 2112 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 146: /* selection_item_commalist  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_list_) != nullptr) {
    delete ((*yyvaluep).selection_list_);
  }
}
#line 2122 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 147: /* selection_item  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_item_) != nullptr) {
    delete ((*yyvaluep).selection_item_);
  }
}
#line 2132 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 148: /* from_clause  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2142 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 152: /* subquery_expression  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).subquery_expression_) != nullptr) {
    delete ((*yyvaluep).subquery_expression_);
  }
}
#line 2152 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 153: /* table_reference  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_) != nullptr) {
    delete ((*yyvaluep).table_reference_);
  }
}
#line 2162 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 154: /* table_reference_signature  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2172 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 155: /* table_reference_signature_primary  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2182 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 156: /* table_reference_commalist  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2192 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 157: /* opt_group_by_clause  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_group_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_group_by_clause_);
  }
}
#line 2202 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 158: /* opt_having_clause  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_having_clause_) != nullptr) {
    delete ((*yyvaluep).opt_having_clause_);
  }
}
#line 2212 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 159: /* opt_order_by_clause  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_order_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_order_by_clause_);
  }
}
#line 2222 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 160: /* opt_limit_clause  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_limit_clause_) != nullptr) {
    delete ((*yyvaluep).opt_limit_clause_);
  }
}
#line 2232 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 161: /* order_commalist  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_commalist_) != nullptr) {
    delete ((*yyvaluep).order_commalist_);
  }
}
#line 2242 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 162: /* order_item  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_item_) != nullptr) {
    delete ((*yyvaluep).order_item_);
  }
}
#line 2252 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 163: /* opt_order_direction  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2262 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 164: /* opt_nulls_first  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2272 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 165: /* opt_where_clause  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2282 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 166: /* where_clause  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2292 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 167: /* or_expression  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2302 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 168: /* and_expression  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2312 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 169: /* not_expression  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2322 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 170: /* predicate_expression_base  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2332 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 171: /* add_expression  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2342 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 172: /* multiply_expression  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2352 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 173: /* unary_expression  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2362 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 174: /* expression_base  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2372 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 175: /* function_call  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).function_call_) != nullptr) {
    delete ((*yyvaluep).function_call_);
  }
}
#line 2382 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 176: /* expression_list  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_list_) != nullptr) {
    delete ((*yyvaluep).expression_list_);
  }
}
#line 2392 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 177: /* literal_value  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_) != nullptr) {
    delete ((*yyvaluep).literal_value_);
  }
}
#line 2402 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 178: /* literal_value_commalist  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_list_) != nullptr) {
    delete ((*yyvaluep).literal_value_list_);
  }
}
#line 2412 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 179: /* attribute_ref  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_) != nullptr) {
    delete ((*yyvaluep).attribute_);
  }
}
#line 2422 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 180: /* comparison_operation  */
#line 478 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2428 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 181: /* unary_operation  */
#line 479 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2434 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 182: /* add_operation  */
#line 480 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2440 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 183: /* multiply_operation  */
#line 480 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2446 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 184: /* name_commalist  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_list_) != nullptr) {
    delete ((*yyvaluep).string_list_);
  }
}
#line 2456 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 185: /* any_name  */
#line 482 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2466 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 186: /* boolean_value  */
#line 477 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2472 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, yyscanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 491 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 2769 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 495 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 2778 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 499 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    YYABORT;
  }
#line 2786 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 5:
#line 502 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    // Regular yyparse() return codes are non-negative, so use a negative one here.
    return -1;
  }
#line 2795 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 509 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 2803 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 7:
#line 512 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].copy_from_statement_);
  }
#line 2811 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 515 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].create_table_statement_);
  }
#line 2819 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 9:
#line 518 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 2827 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 10:
#line 521 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].delete_statement_);
  }
#line 2835 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 11:
#line 524 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].drop_table_statement_);
  }
#line 2843 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 12:
#line 527 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].insert_statement_);
  }
#line 2851 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 13:
#line 530 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].quit_statement_);
  }
#line 2859 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 14:
#line 533 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].select_statement_);
  }
#line 2867 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 15:
#line 536 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].update_statement_);
  }
#line 2875 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 16:
#line 542 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.quit_statement_) = new quickstep::ParseStatementQuit((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 2883 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 17:
#line 548 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].attribute_definition_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 2895 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 18:
#line 555 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 2906 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 19:
#line 561 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 2918 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 568 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 2930 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 577 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.create_table_statement_) = new quickstep::ParseStatementCreateTable((yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-4].string_value_), (yyvsp[-2].attribute_definition_list_));
  }
#line 2938 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 582 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-6].string_value_);
    delete (yyvsp[-4].string_value_);
    delete (yyvsp[-3].string_list_);
    delete (yyvsp[-1].string_value_);
    delete (yyvsp[0].key_value_list_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-8]), yyscanner, "CREATE INDEX statement");
    YYERROR;
  }
#line 2953 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 594 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.drop_table_statement_) = new quickstep::ParseStatementDropTable((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_));
  }
#line 2961 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 599 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_definition_) = new quickstep::ParseAttributeDefinition((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].data_type_), (yyvsp[0].column_constraint_list_));
  }
#line 2969 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 604 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_definition_list_) = new quickstep::PtrList<quickstep::ParseAttributeDefinition>();
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 2978 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 608 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_definition_list_) = (yyvsp[-2].attribute_definition_list_);
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 2987 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 27:
#line 614 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "BIT data type");
    YYERROR;
  }
#line 2997 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 28:
#line 619 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3005 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 29:
#line 622 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3013 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 30:
#line 625 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "TIME data type");
    YYERROR;
  }
#line 3023 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 31:
#line 630 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3031 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 32:
#line 633 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3039 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 33:
#line 636 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3047 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 639 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3055 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 642 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kFloat));
  }
#line 3063 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 645 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3071 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 648 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3079 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 38:
#line 651 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3087 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 654 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3095 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 657 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This pattern exhibits a shift/reduce conflict with the
     * TOKEN_INTERVAL case in 'literal_value'. Bison prefers to shift rather
     * than reduce, so the case in 'literal_value' has precedence over this.
     **/
    (yyval.data_type_) = nullptr;
    quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr,
        "INTERVAL is ambiguous as a column type. Specify either DATETIME INTERVAL "
        "or YEARMONTH INTERVAL");
    YYERROR;
  }
#line 3112 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 669 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetimeInterval));
  }
#line 3120 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 672 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kYearMonthInterval));
  }
#line 3128 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 675 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for CHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Length for CHAR type must be at least 1");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3151 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 693 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for VARCHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() < 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Negative length supplied for VARCHAR type");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kVarChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3174 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 713 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNull((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3182 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 46:
#line 716 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNotNull((yylsp[-1]).first_line, (yylsp[-1]).first_column);
  }
#line 3190 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 719 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "Column Constraints (UNIQUE)");
    YYERROR;
  }
#line 3200 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 48:
#line 724 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3210 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 49:
#line 729 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[0].literal_value_);
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (DEFAULT)");
    YYERROR;
  }
#line 3221 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 735 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Column Constraints (CHECK)");
    YYERROR;
  }
#line 3232 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 51:
#line 741 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_value_);
    NotSupported(&(yylsp[-4]), yyscanner, "Foreign Keys");
    YYERROR;
  }
#line 3244 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 750 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = (yyvsp[-1].column_constraint_list_);
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3253 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 754 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = new quickstep::PtrList<quickstep::ParseColumnConstraint>();
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3262 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 760 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = nullptr;
  }
#line 3270 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 763 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = (yyvsp[0].column_constraint_list_);
  }
#line 3278 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 768 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (UNIQUE)");
    YYERROR;
  }
#line 3288 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 773 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-4]), yyscanner, "Table Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3298 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 778 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-6].string_list_);
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-9]), yyscanner, "Table Constraints (FOREIGN KEY)");
    YYERROR;
  }
#line 3310 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 59:
#line 785 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (CHECK)");
    YYERROR;
  }
#line 3320 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 792 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    NotSupported(&(yylsp[-2]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3329 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 796 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3338 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 62:
#line 802 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /* $$ = nullptr; */
  }
#line 3346 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 63:
#line 805 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /* $$ = $1; */
  }
#line 3354 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 64:
#line 810 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_list_) = nullptr;
  }
#line 3362 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 65:
#line 813 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-1].string_list_);
    (yyval.string_list_) = nullptr;
    NotSupported(&(yylsp[-2]), yyscanner, "list of column names in CREATE INDEX statement");
    YYERROR;
  }
#line 3373 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 66:
#line 821 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = new quickstep::PtrList<quickstep::ParseKeyValue>();
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 3382 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 67:
#line 825 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = (yyvsp[-2].key_value_list_);
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 3391 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 68:
#line 831 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_value_);
  }
#line 3399 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 69:
#line 834 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_list_);
  }
#line 3407 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 70:
#line 837 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_) = (yyvsp[0].key_literal_value_);
  }
#line 3415 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 71:
#line 842 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].string_value_));
  }
#line 3423 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 847 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_string_list_) = new quickstep::ParseKeyStringList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 3431 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 73:
#line 852 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_literal_value_) = new quickstep::ParseKeyLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].literal_value_));
  }
#line 3439 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 857 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "Bloom Filter Index");
    YYERROR;
  }
#line 3449 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 862 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "CSB Tree Index");
    YYERROR;
  }
#line 3459 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 869 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = nullptr;
  }
#line 3467 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 872 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = (yyvsp[-1].key_value_list_);
  }
#line 3475 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 879 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-7].string_value_);
    delete (yyvsp[-5].string_list_);
    delete (yyvsp[-1].literal_value_list_);
    (yyval.insert_statement_) = nullptr;
    NotSupported(&(yylsp[-6]), yyscanner, "list of column names in INSERT statement");
    YYERROR;
  }
#line 3488 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 887 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsert((yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-4].string_value_), (yyvsp[-1].literal_value_list_));
  }
#line 3496 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 892 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_from_statement_) = new quickstep::ParseStatementCopyFrom((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_value_), (yyvsp[0].copy_from_params_));
  }
#line 3504 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 897 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_from_params_) = nullptr;
  }
#line 3512 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 900 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_from_params_) = (yyvsp[-1].copy_from_params_);
  }
#line 3520 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 905 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_from_params_) = new quickstep::ParseCopyFromParams((yylsp[-1]).first_line, (yylsp[-1]).first_column);
    (yyval.copy_from_params_)->set_delimiter((yyvsp[0].string_value_));
  }
#line 3529 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 909 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_from_params_) = new quickstep::ParseCopyFromParams((yylsp[-1]).first_line, (yylsp[-1]).first_column);
    (yyval.copy_from_params_)->escape_strings = (yyvsp[0].boolean_value_);
  }
#line 3538 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 913 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_from_params_) = (yyvsp[-3].copy_from_params_);
    (yyval.copy_from_params_)->set_delimiter((yyvsp[0].string_value_));
  }
#line 3547 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 917 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_from_params_) = (yyvsp[-3].copy_from_params_);
    (yyval.copy_from_params_)->escape_strings = (yyvsp[0].boolean_value_);
  }
#line 3556 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 87:
#line 923 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.update_statement_) = new quickstep::ParseStatementUpdate((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].assignment_list_), (yyvsp[0].predicate_));
  }
#line 3564 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 88:
#line 928 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.delete_statement_) = new quickstep::ParseStatementDelete((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].predicate_));
  }
#line 3572 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 89:
#line 933 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.assignment_list_) = (yyvsp[-2].assignment_list_);
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 3581 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 90:
#line 937 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.assignment_list_) = new quickstep::PtrList<quickstep::ParseAssignment>();
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 3590 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 91:
#line 943 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.assignment_) = new quickstep::ParseAssignment((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[0].expression_));
  }
#line 3598 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 92:
#line 949 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.select_statement_) = new quickstep::ParseStatementSelect((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].select_query_), (yyvsp[-1].with_list_));
  }
#line 3606 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 93:
#line 954 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_) = nullptr;
  }
#line 3614 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 94:
#line 957 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_) = (yyvsp[0].with_list_);
  }
#line 3622 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 95:
#line 962 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_) = new quickstep::PtrVector<quickstep::ParseSubqueryTableReference>();
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 3631 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 96:
#line 966 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_) = (yyvsp[-2].with_list_);
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 3640 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 97:
#line 972 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_element_) = new quickstep::ParseSubqueryTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].subquery_expression_));
    (yyval.with_list_element_)->set_table_reference_signature((yyvsp[-2].table_reference_signature_));
  }
#line 3649 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 98:
#line 979 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.select_query_) = new quickstep::ParseSelect((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].selection_), (yyvsp[-5].table_reference_list_), (yyvsp[-4].predicate_), (yyvsp[-3].opt_group_by_clause_), (yyvsp[-2].opt_having_clause_), (yyvsp[-1].opt_order_by_clause_), (yyvsp[0].opt_limit_clause_));
  }
#line 3657 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 99:
#line 984 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /* $$ = nullptr; */
  }
#line 3665 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 100:
#line 987 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "ALL in selection");
    YYERROR;
  }
#line 3674 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 101:
#line 991 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "DISTINCT in selection");
    YYERROR;
  }
#line 3683 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 102:
#line 997 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_) = new quickstep::ParseSelectionStar((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3691 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 103:
#line 1000 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_) = (yyvsp[0].selection_list_);
  }
#line 3699 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 104:
#line 1005 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_list_) = new quickstep::ParseSelectionList((yylsp[0]).first_line, (yylsp[0]).first_column);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 3708 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 105:
#line 1009 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_list_) = (yyvsp[-2].selection_list_);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 3717 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 106:
#line 1015 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[0].string_value_));
  }
#line 3725 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 107:
#line 1018 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].expression_), (yyvsp[0].string_value_));
  }
#line 3733 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 108:
#line 1021 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].expression_));
  }
#line 3741 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 109:
#line 1026 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_list_) = (yyvsp[-1].table_reference_list_);
  }
#line 3749 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 110:
#line 1031 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /* $$ = nullptr; */
  }
#line 3757 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 111:
#line 1034 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 3766 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 112:
#line 1040 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    NotSupported(&(yylsp[-1]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 3775 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 113:
#line 1044 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 3784 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 114:
#line 1050 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 3795 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 115:
#line 1056 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 3806 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 116:
#line 1062 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-5]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3817 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 117:
#line 1068 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3828 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 118:
#line 1074 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-5]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3839 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 119:
#line 1080 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3850 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 120:
#line 1086 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-5]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3861 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 121:
#line 1092 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3872 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 122:
#line 1100 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.subquery_expression_) = new quickstep::ParseSubqueryExpression((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].select_query_));
  }
#line 3880 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 123:
#line 1105 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseSubqueryTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].subquery_expression_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 3889 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 124:
#line 1109 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 3898 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 125:
#line 1113 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 3906 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 126:
#line 1118 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 3914 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 127:
#line 1121 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 3922 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 128:
#line 1126 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 3930 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 129:
#line 1129 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 3938 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 130:
#line 1134 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_list_) = new quickstep::PtrList<quickstep::ParseTableReference>();
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 3947 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 131:
#line 1138 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_list_) = (yyvsp[-2].table_reference_list_);
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 3956 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 132:
#line 1144 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_group_by_clause_) = nullptr;
  }
#line 3964 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 133:
#line 1147 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_group_by_clause_) = new quickstep::ParseGroupBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].expression_list_));
  }
#line 3972 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 134:
#line 1152 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_having_clause_) = nullptr;
  }
#line 3980 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 135:
#line 1155 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_having_clause_) = new quickstep::ParseHaving((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 3988 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 136:
#line 1160 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_order_by_clause_) = nullptr;
  }
#line 3996 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 137:
#line 1163 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_order_by_clause_) = new quickstep::ParseOrderBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].order_commalist_));
  }
#line 4004 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 138:
#line 1168 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_limit_clause_) = nullptr;
  }
#line 4012 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 139:
#line 1171 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.opt_limit_clause_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.opt_limit_clause_) = nullptr;
        quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be positive");
        YYERROR;
      } else {
        (yyval.opt_limit_clause_) = new quickstep::ParseLimit((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 4034 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 140:
#line 1190 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_commalist_) = new quickstep::PtrList<quickstep::ParseOrderByItem>();
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 4043 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 141:
#line 1194 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_commalist_) = (yyvsp[-2].order_commalist_);
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 4052 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 142:
#line 1200 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_item_) = new quickstep::ParseOrderByItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[-1].order_direction_), (yyvsp[0].order_direction_));
    delete (yyvsp[-1].order_direction_);
    delete (yyvsp[0].order_direction_);
  }
#line 4062 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 143:
#line 1207 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 4070 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 144:
#line 1210 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 4078 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 145:
#line 1213 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 4086 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 146:
#line 1218 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 4094 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 147:
#line 1221 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 4102 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 148:
#line 1224 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 4110 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 149:
#line 1230 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = nullptr;
  }
#line 4118 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 150:
#line 1233 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4126 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 151:
#line 1238 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4134 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 152:
#line 1243 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kDisjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateDisjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 4148 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 153:
#line 1252 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4156 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 154:
#line 1257 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kConjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateConjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 4170 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 155:
#line 1266 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4178 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 156:
#line 1271 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 4186 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 157:
#line 1274 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4194 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 158:
#line 1279 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4202 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 159:
#line 1282 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line, (yylsp[-4]).first_column,
        new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_)));
  }
#line 4212 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 160:
#line 1287 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-2]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 4223 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 161:
#line 1293 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 4234 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 162:
#line 1299 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].expression_);
    delete (yyvsp[0].string_value_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "LIKE predicates");
    YYERROR;
  }
#line 4246 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 163:
#line 1306 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateComparison((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].comparison_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4254 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 164:
#line 1309 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[-1].predicate_);
  }
#line 4262 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 165:
#line 1316 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4270 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 166:
#line 1319 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4278 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 167:
#line 1324 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4286 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 168:
#line 1327 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4294 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 169:
#line 1332 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseUnaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].unary_operation_), (yyvsp[0].expression_));
  }
#line 4302 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 170:
#line 1335 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4310 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 171:
#line 1340 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].attribute_);
  }
#line 4318 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 172:
#line 1343 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_));
  }
#line 4326 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 173:
#line 1346 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].function_call_);
  }
#line 4334 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 174:
#line 1349 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[-1].expression_);
  }
#line 4342 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 175:
#line 1354 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), new quickstep::PtrList<quickstep::ParseExpression>());
  }
#line 4351 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 176:
#line 1358 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), new quickstep::ParseStar((yylsp[-1]).first_line, (yylsp[-1]).first_column));
  }
#line 4360 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 177:
#line 1362 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].expression_list_));
  }
#line 4368 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 178:
#line 1367 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_list_) = new quickstep::PtrList<quickstep::ParseExpression>();
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 4377 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 179:
#line 1371 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_list_) = (yyvsp[-2].expression_list_);
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 4386 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 180:
#line 1377 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = new quickstep::NullParseLiteralValue((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 4394 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 181:
#line 1380 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 4402 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 182:
#line 1383 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 4410 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 183:
#line 1386 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * minus character as a 'unary_operation' followed by a numeric literal.
     * Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the parser will prefer to interpret the ambiguous
     * pattern as a negative number literal rather than a unary minus operation
     * applied to a non-negative number literal).
     **/
    (yyvsp[0].numeric_literal_value_)->prependMinus();
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 4427 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 184:
#line 1398 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_),
                                                nullptr);  // No explicit type.
  }
#line 4436 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 185:
#line 1402 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * plain TOKEN_INTERVAL case in 'data_type' reduced and used in the case
     * below. Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the special
     * StringParseLiteralValue::ParseAmbiguousInterval() method will be used to
     * parse the string as either one of the interval types, rather than an
     * error being emitted because of an ambiguous type).
     **/
    quickstep::StringParseLiteralValue *parse_value;
    if (quickstep::StringParseLiteralValue::ParseAmbiguousInterval((yyvsp[0].string_value_), &parse_value)) {
      (yyval.literal_value_) = parse_value;
    } else {
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    }
  }
#line 4460 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 186:
#line 1421 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    quickstep::StringParseLiteralValue *parse_value
        = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_), &((yyvsp[-1].data_type_)->getType()));
    delete (yyvsp[-1].data_type_);
    if (!parse_value->tryExplicitTypeParse()) {
      delete parse_value;
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    } else {
      (yyval.literal_value_) = parse_value;
    }
  }
#line 4478 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 187:
#line 1436 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_list_) = new quickstep::PtrList<quickstep::ParseScalarLiteral>();
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 4487 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 188:
#line 1440 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_list_) = (yyvsp[-2].literal_value_list_);
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 4496 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 189:
#line 1446 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 4504 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 190:
#line 1449 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_), (yyvsp[-2].string_value_));
  }
#line 4512 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 191:
#line 1455 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kEqual);
  }
#line 4520 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 192:
#line 1458 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotEqual);
  }
#line 4528 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 193:
#line 1461 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLess);
  }
#line 4536 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 194:
#line 1464 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLessOrEqual);
  }
#line 4544 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 195:
#line 1467 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreater);
  }
#line 4552 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 196:
#line 1470 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreaterOrEqual);
  }
#line 4560 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 197:
#line 1475 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * '-' TOKEN_UNSIGNED_NUMVAL case in 'literal_value'. Because Bison prefers
     * to shift rather than reduce, the case in 'literal_value' has precedence
     * over this one.
     **/
    (yyval.unary_operation_) = &quickstep::UnaryOperationFactory::GetUnaryOperation(quickstep::UnaryOperationID::kNegate);
  }
#line 4574 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 198:
#line 1486 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kAdd);
  }
#line 4582 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 199:
#line 1489 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kSubtract);
  }
#line 4590 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 200:
#line 1494 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kMultiply);
  }
#line 4598 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 201:
#line 1497 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kDivide);
  }
#line 4606 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 202:
#line 1503 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_list_) = new quickstep::PtrList<quickstep::ParseString>();
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 4615 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 203:
#line 1507 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_list_) = (yyvsp[-2].string_list_);
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 4624 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 204:
#line 1513 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 4632 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 205:
#line 1516 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].string_value_)->value().empty()) {
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Zero-length identifier");
    }
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 4643 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 206:
#line 1524 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;
  }
#line 4651 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 207:
#line 1527 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;
  }
#line 4659 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 208:
#line 1530 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = false;
  }
#line 4667 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 209:
#line 1533 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = false;
  }
#line 4675 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;


#line 4679 "SqlParser_gen.cpp" /* yacc.c:1661  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error"));
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
        yyerror (&yylloc, yyscanner, parsedStatement, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, yyscanner, parsedStatement);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, yyscanner, parsedStatement, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, yyscanner, parsedStatement);
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
#line 1537 "../SqlParser.ypp" /* yacc.c:1906  */


void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature) {
  std::string msg;
  msg.append(feature);
  msg.append(" is not supported yet");

  quickstep_yyerror(location, yyscanner, nullptr, msg.c_str());
}

int quickstep_yyget_line_number(const YYLTYPE *yyloc) {
  return yyloc->first_line;
}

int quickstep_yyget_column_number(const YYLTYPE *yyloc) {
  return yyloc->first_column;
}
