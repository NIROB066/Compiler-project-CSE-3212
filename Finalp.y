%{
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
%}

%union
{
  struct varstruct
  {
    int INTV,INTL;
	char CHARV[20];
  }s1;
  int INTI;
  float DOB;   
}

 
%token <DOB>    NUMBER 
%type  <DOB>    expression 
%type  <DOB>    ifcase 
%type  <DOB>    elseifcase 
%type  <DOB>    forstatement 
%type  <DOB>    statement 
%type  <s1>     varname 
%token <s1>     VARIABLE 

%token INT FLOAT DOUBLE CHAR EQUAL GREATER_THAN LESS_THAN GREATER_OR_EQUAL LESS_OR_EQUAL PLUS MINUS MULTIPLICATION DIVISION MOD BREAK FUNCTION RETURNING
%token INC DEC STOP FIRST_S_BRACKET FIRST_E_BRACKET SECOND_S_BRACKET SECOND_e_BRACKET THIRD_S_BRACKET THIRD_E_BRACKET MAIN COMMA PRINTIT SWITCHCOLON
%token IF ELSEIF ELSE WHILE FOR DO SWITCH CASE DEFAULT EQEQ NOTEQ ANDAND OROR
%left GREATER_THAN GREATER_OR_EQUAL LESS_OR_EQUAL LESS_THAN INC DEC
%left PLUS MINUS
%left MULTIPLICATION DIVISION MOD
%nonassoc THIRD_S_BRACKET THIRD_E_BRACKET
%nonassoc SECOND_S_BRACKET SECOND_e_BRACKET
%nonassoc FIRST_S_BRACKET FIRST_E_BRACKET NOTEQ


%%

program:pro mainfunc fsp fep ssp mystatement sep proc{ printf("Successful compilation no error\n"); }
     ;
pro:
    |pro FUNCTION changefuncvarval VARIABLE FIRST_S_BRACKET infunction decforfunc FIRST_E_BRACKET {printf("Successful Function Declaration\n"); functionvalue[$4.INTV]=0; }
    ;
proc:
   |proc duplicatesolvelevel FUNCTION changefuncvval VARIABLE FIRST_S_BRACKET infunction decforfunc FIRST_E_BRACKET SECOND_S_BRACKET mystatement RETURNING expression STOP SECOND_e_BRACKET { 
             printf("Successful Function defination\n ");
			 functionvalue[$5.INTV]=$13;
			 printf("Function ");
			 for(funci=0;funci<$5.INTL;funci++)
		        {
		          printf("%c",$5.CHARV[funci]);
		        }
		     printf(" value is: ");
			 printf("%.2f",functionvalue[$5.INTV]);
			 printf("\n");
	}
   ;
duplicatesolvelevel: { i=0; }
   ;
changefuncvval: { 
                for(funci=0;funci<500;funci++)
				  {
				    duplicatecheck[funci]=-1;
					duplicate[funci]=-1;
					iSdeclared[funci]=-1;
				  }
   }
   ;
decforfunc:
   |type varnam { }
   ;
varnam:varnam COMMA VARIABLE  {
						if(functionvar==1)
						{
						  for(funci=0;functionvariableval[funci]!=-1;funci++){}
						  functionvariableval[funci]=$3.INTV;
						}
                                
	}
   |VARIABLE {
                        if(functionvar==1)
						{
						  for(funci=0;functionvariableval[funci]!=-1;funci++){}
						  functionvariableval[funci]=$1.INTV;
						}						
   }
   ;
changefuncvarval: {
               for(funci=0;funci<500;funci++)
				  {
				    functionvariableval[funci]=-1;
					functionvalue[funci]=-1;
					iSdeclared[funci]=-1;
				  }
}
    ;
infunction: { functionvar=1; }
    ;
mainfunc:MAIN {
                for(i=0;i<500;i++)
				  {
				    functionvar=0;
				    duplicatecheck[i]=-1;
					duplicate[i]=-1;
					iSdeclared[i]=-1;
				    
				  }
                printf("Starting main function\n");
				i=0;
			  }
   ;
fsp:FIRST_S_BRACKET
   ;
fep:FIRST_E_BRACKET
   ;
ssp:SECOND_S_BRACKET
   ;
mystatement:
   |mystatement statement
   |mystatement decsolv declaration
   |mystatement print
   |mystatement ifcase
   ;
decsolv: {
		   for(i=0;i<500;i++)
		   {
		     duplicatecheck[i]=-1;
		   }
		   i=0;

}
   ;
declaration:type varname semi {
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
					 }

   ;
type:INT
   |FLOAT
   |DOUBLE
   |CHAR
   ;
varname:varname COMMA VARIABLE  { $$=$3; duplicatecheck[i++]=$$.INTV; iSdeclared[$3.INTV]=1;
					    if(duplicate[$3.INTV]==-1)
						{
						  duplicate[$3.INTV]=1;
						}
						else
						{
						      printf("Duplicate variable : ");
							  for(varprint=0;varprint<$3.INTL;varprint++)
							  {
							    printf("%c",$3.CHARV[varprint]);
							  }
							  printf("\n");
						}
						if(functionvar==1)
						{
						  for(funci=0;functionvariableval[funci]!=-1;funci++){}
						  functionvariableval[funci]=$3.INTV;
						}
                                
	}
   |VARIABLE { $$=$1; duplicatecheck[i++]=$$.INTV; iSdeclared[$1.INTV]=1; 
                      if(duplicate[$1.INTV]==-1)
						{
						  duplicate[$1.INTV]=1;
						}
						else
						{
						      printf("Duplicate variable : ");
							  for(varprint=0;varprint<$1.INTL;varprint++)
							  {
							    printf("%c",$1.CHARV[varprint]);
							  }
							  printf("\n");
						}
                        if(functionvar==1)
						{
						  for(funci=0;functionvariableval[funci]!=-1;funci++){}
						  functionvariableval[funci]=$1.INTV;
						}						
   }
   ;
semi:STOP
   ;
statement:VARIABLE EQUAL solution expression semi {
                                           if(iSdeclared[$1.INTV]==-1)
                                             {
											      printf("Undeclared variable : ");
												  for(varprint=0;varprint<$1.INTL;varprint++)
												  {
													printf("%c",$1.CHARV[varprint]);
												  }
												  printf("\n");
											 }
										   if(elsevar==1)
										   {
										      $$=variablevalue[$1.INTV];
										   }
										   else if(ifexecutionstarted==0)
                                                {
												  variablevalue[$1.INTV]=$4;
												  $$=$4;
												}
                                            else if(ifexecutionstarted==1)
                                                {
												  if(ifvalue==0)
												  {
												    $$=variablevalue[$1.INTV];
												  }
												  else
												  {
												    elsevar=3;
												    variablevalue[$1.INTV]=$4;
												    $$=$4;
												  }
												  ifexecutionstarted=0;
												  ifexecutionstarted1=0;
												}											
                                           
										 }
    |expression semi										 
   ;
solution: { if(ifexecutionstarted==1){ifexecutionstarted1=1;} else{ifexecutionstarted=0;} }
   ;

expression:NUMBER { $$=$1; if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;}  if($$!=0){whilevalstart=1;}else{whilevalstart=0;} expvalforswitch=$$; }
   |VARIABLE { $$=variablevalue[$1.INTV]; if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;} if($$!=0){whilevalstart=1;}else{whilevalstart=0;} expvalforswitch=$$;}
   |expression PLUS expression { $$=$1+$3; if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;} if($$!=0){whilevalstart=1;}else{whilevalstart=0;} expvalforswitch=$$;}
   |expression MINUS expression { $$=$1-$3; if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;} if($$!=0){whilevalstart=1;}else{whilevalstart=0;} expvalforswitch=$$;}
   |expression MULTIPLICATION expression { $$=$1*$3; if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;} if($$!=0){whilevalstart=1;}else{whilevalstart=0;} expvalforswitch=$$;}
   |expression DIVISION expression { if($3>0)
                                       {
									     $$=$1/$3;
									   }
									  else
									  {
									    printf("Division by zero error\n");
										$$=0;
									  }
									  if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;}
									  if($$!=0){whilevalstart=1;}else{whilevalstart=0;}
									  expvalforswitch=$$;

								    }
	|expression MOD expression { if($3>0)
                                       {
									     $$=(int)$1%(int)$3;
									   }
									  else
									  {
									    printf("MOD by zero error\n");
										$$=0;
									  }
									  if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;}
									  if($$!=0){whilevalstart=1;}else{whilevalstart=0;}
									  expvalforswitch=$$;

								}
	|expression EQEQ expression { if($1==$3)
	                              {
								    $$=1;
								  }
								  else
								  {
								    $$=0;
								  }
								  if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;}
								  if($$!=0){whilevalstart=1;}else{whilevalstart=0;}
								  expvalforswitch=whilevalstart;
							
	}
	|expression NOTEQ expression { if($1!=$3)
	                               {
								     $$=1;
								   }
								   else
								   {
								     $$=0;
								   }
								   if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;}
								   if($$!=0){whilevalstart=1;}else{whilevalstart=0;}
								   expvalforswitch=whilevalstart;
						
	}
	|expression ANDAND expression { if(($1!=0) && ($3!=0))
	                                {
									  $$=1;
									}
									else
									{
									  $$=0;
									}
									if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;}
									if($$!=0){whilevalstart=1;}else{whilevalstart=0;}
									expvalforswitch=whilevalstart;
								
	}
	|expression OROR expression { if(($1!=0) || ($3!=0))
	                               {
								     $$=1;
								   }
								   else
								   {
								     $$=0;
								   }
								   if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;}
								   if($$!=0){whilevalstart=1;}else{whilevalstart=0;}
								   expvalforswitch=whilevalstart;
							
	}
	|expression GREATER_THAN expression { if($1>$3)
	                                      {
										    $$=1;
											forvalue=$3;
											whilevalstart=1;
										  }
										  else
										  {
										    $$=0;
											forvalue=$1;
											whilevalstart=0;
										  }
										  if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;}
										  expvalforswitch=whilevalstart;
									
	}
	|expression LESS_THAN expression { if($1<$3)
	                                    {
										  $$=1;
										  forvalue=$3;
										  whilevalstart=1;
										}
										else
										{
										  forvalue=$1;
										  whilevalstart=0;
										  $$=0;
										}
										if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;}
										expvalforswitch=whilevalstart;
								
	}
	|expression GREATER_OR_EQUAL expression { if($1>=$3)
	                                          {
											    forvalue=$3+1;
												whilevalstart=1;
											    $$=1;
											  }
											  else
											  {
											    forvalue=$1;
												whilevalstart=0;
											    $$=0;
											  }
											  if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;}
											  expvalforswitch=whilevalstart;
									
	}
	|expression LESS_OR_EQUAL expression { if($1<=$3)
	                                       {
										     forvalue=$3+1;
											 whilevalstart=1;
										     $$=1;
										   }
										   else
										   {
										     forvalue=$1;
											 whilevalstart=0;
										     $$=0;
										   }
										   if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;}
										   expvalforswitch=whilevalstart;
							
	}
	|expression INC {                      $$=++$1;
										   if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;
										   if($$!=0){whilevalstart=1;}else{whilevalstart=0;}
										   expvalforswitch=$$;
										   }
							
	}
	|expression DEC {                      $$=--$1;
										   if(ifexecutionstarted==1 && ifexecutionstarted1==0){ifvalue=$$;
										   if($$!=0){whilevalstart=1;}else{whilevalstart=0;}
										   expvalforswitch=$$;
										   }
							
	}
	|FUNCTION VARIABLE FIRST_S_BRACKET ex FIRST_E_BRACKET {
	  if(functionvalue[$2.INTV]!=-1)
	  { 
	    $$=functionvalue[$2.INTV];
		printf("Successfully calling Function name : ");
		for(funci=0;funci<$2.INTL;funci++)
		{
		  printf("%c",$2.CHARV[funci]);
		}
		printf("\n");
	  }
	  else
	  {
	    printf("NO function of name : ");
		for(funci=0;funci<$2.INTL;funci++)
		{
		  printf("%c",$2.CHARV[funci]);
		}
		printf("\n");
	  }
	}
	;

ex:
  |ex COMMA expression { for(funci=0;functionvariableval[funci]==-1;funci++){} 
    variablevalue[functionvariableval[funci]]=$3;
	functionvariableval[funci]=-1;
  }
  |expression { for(funci=0;functionvariableval[funci]==-1;funci++){} 
    variablevalue[functionvariableval[funci]]=$1;
	functionvariableval[funci]=-1;
  }
  ;


sep:SECOND_e_BRACKET
   ;
print:PRINTIT FIRST_S_BRACKET var FIRST_E_BRACKET semi {
                                                          l--;
														  printf("value is :");
                                                          for(test=0;test<=l;test++)
                                                          {
														     printf("%.2f ",store[test]);
														  }
                                                          printf("\n");
                                                          l=0;test=0;													  
                                                       }
   ;
var:var COMMA VARIABLE {
                        if(iSdeclared[$3.INTV]==-1)
                          {
						    printf("Undeclared variable : ");
							for(varprint=0;varprint<$3.INTL;varprint++)
							{
							  printf("%c",$3.CHARV[varprint]);
							}
							printf("\n");
						  }
						 else
						 {
						   store[l++]=variablevalue[$3.INTV];
						 }
                        
					   }
   |VARIABLE  {
                        if(iSdeclared[$1.INTV]==-1)
                          {
						    printf("Undeclared variable : ");
							for(varprint=0;varprint<$1.INTL;varprint++)
							{
							  printf("%c",$1.CHARV[varprint]);
							}
							printf("\n");
						  }
						 else
						 {
						   store[l++]=variablevalue[$1.INTV];
						 }
                        
              }
   ;

ifcase:
      |IF ifexecution FIRST_S_BRACKET expression FIRST_E_BRACKET SECOND_S_BRACKET ifcase SECOND_e_BRACKET elseifcase varchange{ 
	      printf("Successful IF declaration\n"); 
		  if($4!=0){ printf("IF executes\nValue of IF is %.2f\n",$7); elseifexecuted=1; }
		  else { printf("IF doesn't execute\n"); elseifexecuted=0;}
	  }
      |IF ifexecution FIRST_S_BRACKET expression FIRST_E_BRACKET SECOND_S_BRACKET ifcase SECOND_e_BRACKET elseifcase ELSE SECOND_S_BRACKET elsecasecheck ifcase SECOND_e_BRACKET varchange{ 
	      printf("Successful IF declaration\n"); 
		  if($4!=0){ printf("IF executes\nValue of IF is %.2f\n",$7); elseifexecuted=1; }
		  else if(elseifexecuted==0){ printf("ELSE executes\nValue of ELSE is %.2f\n",$13); }
		  
	  }
	  |ifcase print
	  |FOR FIRST_S_BRACKET forstatement COMMA forstatement COMMA forstatement FIRST_E_BRACKET SECOND_S_BRACKET ifcase SECOND_e_BRACKET {
	      int loopval=($7-$3);
		  if(loopval<0)
		  {
		    loopval=-loopval;
			for(i=$3;i>forvalue;i-=loopval)
		      { printf("For loop executes\n");
		        printf("For value is %.2f \n",$10);
		      }
		  }
		  else
		  {
		    for(i=$3;i<forvalue;i+=loopval)
		      { printf("For loop executes\n");
		        printf("For value is %.2f \n",$10);
		      }
		  }
		    
		  
		  variablevalue[varlocation]=i;
	  }
	  |ifcase statement { $$=$2; }
	  |WHILE FIRST_S_BRACKET forstatement FIRST_E_BRACKET SECOND_S_BRACKET ifcase SECOND_e_BRACKET {
	    
		while(whilevalstart)
		{
		  printf("While executes\n");
		  break;
		}
		if(!whilevalstart)
		{
		  printf("While doesnot execute\n");
		}
	  }
	  |WHILE SECOND_S_BRACKET ifcase SECOND_e_BRACKET DO FIRST_S_BRACKET forstatement FIRST_E_BRACKET {
	    while(whilevalstart)
		{
		  printf("Do While executes\n");
		  break;
		}
		if(!whilevalstart)
		{
		  printf("Do While doesnot execute\n");
		}
	  }
	  |SWITCH FIRST_S_BRACKET expression swithvalue FIRST_E_BRACKET SECOND_S_BRACKET switchcase defaultcase SECOND_e_BRACKET {
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
	  }
	  ;
switchcase:
      |switchcase SWITCH FIRST_S_BRACKET expression swithvalue FIRST_E_BRACKET SECOND_S_BRACKET switchcase defaultcase SECOND_e_BRACKET {
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
	  }
	  |switchcase CASE expression SWITCHCOLON statement BREAK STOP { if($3==swithexpval){printf("Case %.0f executes\n",$3);switchcount=1;} }
      ;
swithvalue: {swithexpval=expvalforswitch;}
      ;
defaultcase:DEFAULT SWITCHCOLON statement BREAK STOP
      ;
	  
elseifcase:
      |elseifcase ifexecution ELSEIF FIRST_S_BRACKET expression FIRST_E_BRACKET SECOND_S_BRACKET ifcase SECOND_e_BRACKET { 
	      if($5!=0 && elseifexecuted==0 ){ printf("ELSEIF executes\nValue of ELSEIF is %.2f\n",$8); elseifexecuted=1; }
		  else { printf("ELSEIF doesn't execute\n"); }
		  }
	  ;
forstatement:
      |VARIABLE EQUAL expression { variablevalue[$1.INTV]=$3; $$=$3; varlocation=$1.INTV; }
	  |expression { $$=$1; }
	  |print
	  ;
ifexecution: {ifexecutionstarted=1; ifexecutionstarted1=0;}
      ;
varchange: {elsevar=0; ifexecutionstarted=0; ifexecutionstarted1=0; }
      ;
elsecasecheck:{if(elsevar==3){elsevar=1;}else{elsevar=0;}}
      ;
   
%%

int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}


