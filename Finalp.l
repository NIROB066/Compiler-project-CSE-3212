%{
	#include<stdio.h>
	#include<math.h>
	#include "Finalp.tab.h"
	#include<stdlib.h>
	extern YYSTYPE yylval;
%}

%%

"পূর্ণ সংখ্যা"            { return INT; }
"ছোট ভগ্নাংশ"        { return FLOAT; }
"বড় ভগ্নাংশ"          { return DOUBLE; }
"অক্ষর"                  { return CHAR; }
"$সম$"                   { return EQUAL; }
"$বড়$"                   { return GREATER_THAN; }
"$ছোট$"                 { return LESS_THAN; }
"$বড় বা সম$"        { return GREATER_OR_EQUAL; }
"$ছোট বা সম$"     {return LESS_OR_EQUAL; }
"$+$"       { return PLUS; }
"$-$"       { return MINUS; }
"$*$"       { return MULTIPLICATION; }
"$/$"       { return DIVISION; }
"$%$"       { return MOD; }
"$++$"      { return INC; }
"$--$"      { return DEC; }
"$==$"      { return EQEQ; }
"$!=$"      { return NOTEQ; }
"$&&$"      { return ANDAND; }
"$||$"      { return OROR; }
"..."       { return STOP; }
"-->"       { return FIRST_S_BRACKET; }
"<--"       { return FIRST_E_BRACKET; }
"--!"       { return SECOND_S_BRACKET; }
"!--"       { return SECOND_e_BRACKET; }
"--#"       { return THIRD_S_BRACKET; }
"#--"       { return THIRD_E_BRACKET; }
"শুরু"                     { return MAIN; }
"//"        { return COMMA; }
"দেখাও"                  { return PRINTIT; }
"যদি"                      { return IF; }
"তবে"                     { return DO; }	
"না হয় যদি"           { return ELSEIF; }
"না হয়"                  { return ELSE; }
"যতক্ষণ"                { return WHILE; }
"যতক্ষণ মিলে"      { return FOR; }
"ঘটনা "                   { return SWITCH; }
"বিষয়"                    { return CASE; }
"সাধারন বিষয়"      { return DEFAULT; }
"::"        { return SWITCHCOLON; }
"***"       { return BREAK; }
"ফাংশান"               {  return FUNCTION; }
"ফেরত"                 {  return RETURNING;  }

[ \t\n]* ;

"-"?[0-9]+     {
	yylval.DOB=atoi(yytext);
	return NUMBER;
}
"-"?[0-9]+?"."[0-9]+   {
	yylval.DOB=atof(yytext);
	return NUMBER;
}
[a-zA-Z]+   {
	int i,p;
	p=0;
	
	for(i=0;i<yyleng;i++)
	{
		p+=(yytext[i]-'a')+p;
	}
	if(i>0)
	{
	  p+=(26*i);
	}
	for(i=0;i<yyleng;i++)
	{
	  yylval.s1.CHARV[i]=yytext[i];
	}
	yylval.s1.INTV=p;
	yylval.s1.INTL=yyleng;
	return VARIABLE;
}

.          { yyerror("Unknown charecter\n"); }

%%

int main()
{
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("out.txt","w",stdout);
	yyparse();

}
