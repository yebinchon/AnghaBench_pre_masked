
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int current; int buff; } ;
struct TYPE_11__ {int ts; } ;
typedef TYPE_1__ SemInfo ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(LexState*VAR_3,int VAR_4,SemInfo*VAR_5){
FUNC_8(VAR_3);
while(VAR_3->current!=VAR_4){
switch(VAR_3->current){
case(-1):
FUNC_2(VAR_3,"unfinished string",VAR_0);
continue;
case'\n':
case'\r':
FUNC_2(VAR_3,"unfinished string",VAR_1);
continue;
case'\\':{
int VAR_6;
FUNC_6(VAR_3);
switch(VAR_3->current){
case'a':VAR_6='\a';break;
case'b':VAR_6='\b';break;
case'f':VAR_6='\f';break;
case'n':VAR_6='\n';break;
case'r':VAR_6='\r';break;
case't':VAR_6='\t';break;
case'v':VAR_6='\v';break;
case'\n':
case'\r':FUNC_7(VAR_3,'\n');FUNC_0(VAR_3);continue;
case(-1):continue;
default:{
if(!FUNC_1(VAR_3->current))
FUNC_8(VAR_3);
else{
int VAR_7=0;
VAR_6=0;
do{
VAR_6=10*VAR_6+(VAR_3->current-'0');
FUNC_6(VAR_3);
}while(++VAR_7<3&&FUNC_1(VAR_3->current));
if(VAR_6>VAR_2)
FUNC_2(VAR_3,"escape sequence too large",VAR_1);
FUNC_7(VAR_3,VAR_6);
}
continue;
}
}
FUNC_7(VAR_3,VAR_6);
FUNC_6(VAR_3);
continue;
}
default:
FUNC_8(VAR_3);
}
}
FUNC_8(VAR_3);
VAR_5->ts=FUNC_3(VAR_3,FUNC_4(VAR_3->buff)+1,
FUNC_5(VAR_3->buff)-2);
}
