
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 17 "Finalp.y"

  struct varstruct
  {
    int INTV,INTL;
	char CHARV[20];
  }s1;
  int INTI;
  float DOB;   



/* Line 1676 of yacc.c  */
#line 111 "Finalp.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


