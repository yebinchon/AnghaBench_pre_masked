
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct CallS {int func; int nresults; } ;
typedef int ptrdiff_t ;
struct TYPE_10__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int StkId ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int ,struct CallS*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(lua_State*VAR_1,int VAR_2,int VAR_3,int VAR_4){
struct CallS VAR_5;
int VAR_6;
ptrdiff_t VAR_7;
FUNC_1(VAR_1,VAR_2+1);
FUNC_3(VAR_1,VAR_2,VAR_3);
if(VAR_4==0)
VAR_7=0;
else{
StkId VAR_8=FUNC_4(VAR_1,VAR_4);
FUNC_2(VAR_1,VAR_8);
VAR_7=FUNC_6(VAR_1,VAR_8);
}
VAR_5.func=VAR_1->top-(VAR_2+1);
VAR_5.nresults=VAR_3;
VAR_6=FUNC_5(VAR_1,VAR_0,&VAR_5,FUNC_6(VAR_1,VAR_5.func),VAR_7);
FUNC_0(VAR_1,VAR_3);
return VAR_6;
}
