
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_7__ {int source; } ;
typedef int CallInfo ;


 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (TYPE_1__*,char*,char*,int,char const*) ;

__attribute__((used)) static void FUNC_6(lua_State*VAR_0,const char*VAR_1){
CallInfo*VAR_2=VAR_0->ci;
if(FUNC_3(VAR_2)){
char VAR_3[60];
int VAR_4=FUNC_0(VAR_0,VAR_2);
FUNC_4(VAR_3,FUNC_2(FUNC_1(VAR_2)->source),60);
FUNC_5(VAR_0,"%s:%d: %s",VAR_3,VAR_4,VAR_1);
}
}
