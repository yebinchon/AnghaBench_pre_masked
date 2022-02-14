
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_4__ {char const* src_init; char const* src_end; scalar_t__ level; int * L; } ;
typedef TYPE_1__ MatchState ;


 int FUNC_0 (TYPE_1__*,int *,char const*,char const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,int,int,char*) ;
 int FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *,int,size_t*) ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,size_t) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 char* FUNC_11 (TYPE_1__*,char const*,char const*) ;

__attribute__((used)) static int FUNC_12(lua_State*VAR_0){
size_t VAR_1;
const char*VAR_2=FUNC_5(VAR_0,1,&VAR_1);
const char*VAR_3=FUNC_6(VAR_0,2);
int VAR_4=FUNC_10(VAR_0,3);
int VAR_5=FUNC_7(VAR_0,4,VAR_1+1);
int VAR_6=(*VAR_3=='^')?(VAR_3++,1):0;
int VAR_7=0;
MatchState VAR_8;
luaL_Buffer VAR_9;
FUNC_3(VAR_0,VAR_4==3||VAR_4==4||
VAR_4==6||VAR_4==5,3,
"string/function/table expected");
FUNC_4(VAR_0,&VAR_9);
VAR_8.L=VAR_0;
VAR_8.src_init=VAR_2;
VAR_8.src_end=VAR_2+VAR_1;
while(VAR_7<VAR_5){
const char*VAR_10;
VAR_8.level=0;
VAR_10=FUNC_11(&VAR_8,VAR_2,VAR_3);
if(VAR_10){
VAR_7++;
FUNC_0(&VAR_8,&VAR_9,VAR_2,VAR_10);
}
if(VAR_10&&VAR_10>VAR_2)
VAR_2=VAR_10;
else if(VAR_2<VAR_8.src_end)
FUNC_1(&VAR_9,*VAR_2++);
else break;
if(VAR_6)break;
}
FUNC_2(&VAR_9,VAR_2,VAR_8.src_end-VAR_2);
FUNC_8(&VAR_9);
FUNC_9(VAR_0,VAR_7);
return 2;
}
