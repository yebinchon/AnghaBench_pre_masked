
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {int base; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_15__ {size_t len; } ;
struct TYPE_13__ {int buff; } ;
typedef int StkId ;


 TYPE_11__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int,int,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,size_t) ;
 char* FUNC_5 (TYPE_1__*,int *,size_t) ;
 int FUNC_6 (char*,int ,size_t) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(lua_State*VAR_1,int VAR_2,int VAR_3){
do{
StkId VAR_4=VAR_1->base+VAR_3+1;
int VAR_5=2;
if(!(FUNC_12(VAR_4-2)||FUNC_11(VAR_4-2))||!FUNC_9(VAR_1,VAR_4-1)){
if(!FUNC_1(VAR_1,VAR_4-2,VAR_4-1,VAR_4-2,VAR_0))
FUNC_2(VAR_1,VAR_4-2,VAR_4-1);
}else if(FUNC_10(VAR_4-1)->len==0)
(void)FUNC_9(VAR_1,VAR_4-2);
else{
size_t VAR_6=FUNC_10(VAR_4-1)->len;
char*VAR_7;
int VAR_8;
for(VAR_5=1;VAR_5<VAR_2&&FUNC_9(VAR_1,VAR_4-VAR_5-1);VAR_5++){
size_t VAR_9=FUNC_10(VAR_4-VAR_5-1)->len;
if(VAR_9>=((size_t)(~(size_t)0)-2)-VAR_6)FUNC_3(VAR_1,"string length overflow");
VAR_6+=VAR_9;
}
VAR_7=FUNC_5(VAR_1,&FUNC_0(VAR_1)->buff,VAR_6);
VAR_6=0;
for(VAR_8=VAR_5;VAR_8>0;VAR_8--){
size_t VAR_10=FUNC_10(VAR_4-VAR_8)->len;
FUNC_6(VAR_7+VAR_6,FUNC_8(VAR_4-VAR_8),VAR_10);
VAR_6+=VAR_10;
}
FUNC_7(VAR_1,VAR_4-VAR_5,FUNC_4(VAR_1,VAR_7,VAR_6));
}
VAR_2-=VAR_5-1;
VAR_3-=VAR_5-1;
}while(VAR_2>1);
}
