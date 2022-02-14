
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int current; int buff; } ;
struct TYPE_13__ {int ts; } ;
typedef TYPE_1__ SemInfo ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_11(LexState*VAR_1,SemInfo*VAR_2,int VAR_3){
int VAR_4=0;
(void)(VAR_4);
FUNC_9(VAR_1);
if(FUNC_0(VAR_1))
FUNC_1(VAR_1);
for(;;){
switch(VAR_1->current){
case(-1):
FUNC_2(VAR_1,(VAR_2)?"unfinished long string":
"unfinished long comment",VAR_0);
break;
case']':{
if(FUNC_10(VAR_1)==VAR_3){
FUNC_9(VAR_1);
goto endloop;
}
break;
}
case'\n':
case'\r':{
FUNC_8(VAR_1,'\n');
FUNC_1(VAR_1);
if(!VAR_2)FUNC_6(VAR_1->buff);
break;
}
default:{
if(VAR_2)FUNC_9(VAR_1);
else FUNC_7(VAR_1);
}
}
}endloop:
if(VAR_2)
VAR_2->ts=FUNC_3(VAR_1,FUNC_4(VAR_1->buff)+(2+VAR_3),
FUNC_5(VAR_1->buff)-2*(2+VAR_3));
}
