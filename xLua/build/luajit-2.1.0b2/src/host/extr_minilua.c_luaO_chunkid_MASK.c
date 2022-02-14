
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_6(char*VAR_0,const char*VAR_1,size_t VAR_2){
if(*VAR_1=='='){
FUNC_5(VAR_0,VAR_1+1,VAR_2);
VAR_0[VAR_2-1]='\0';
}
else{
if(*VAR_1=='@'){
size_t VAR_3;
VAR_1++;
VAR_2-=sizeof(" '...' ");
VAR_3=FUNC_3(VAR_1);
FUNC_1(VAR_0,"");
if(VAR_3>VAR_2){
VAR_1+=(VAR_3-VAR_2);
FUNC_0(VAR_0,"...");
}
FUNC_0(VAR_0,VAR_1);
}
else{
size_t VAR_4=FUNC_2(VAR_1,"\n\r");
VAR_2-=sizeof(" [string \"...\"] ");
if(VAR_4>VAR_2)VAR_4=VAR_2;
FUNC_1(VAR_0,"[string \"");
if(VAR_1[VAR_4]!='\0'){
FUNC_4(VAR_0,VAR_1,VAR_4);
FUNC_0(VAR_0,"...");
}
else
FUNC_0(VAR_0,VAR_1);
FUNC_0(VAR_0,"\"]");
}
}
}
