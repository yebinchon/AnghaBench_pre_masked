
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {TYPE_1__* fs; int * L; } ;
struct TYPE_4__ {int h; } ;
typedef int TValue ;
typedef int TString ;
typedef TYPE_2__ LexState ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static TString*FUNC_5(LexState*VAR_0,const char*VAR_1,size_t VAR_2){
lua_State*VAR_3=VAR_0->L;
TString*VAR_4=FUNC_2(VAR_3,VAR_1,VAR_2);
TValue*VAR_5=FUNC_1(VAR_3,VAR_0->fs->h,VAR_4);
if(FUNC_4(VAR_5)){
FUNC_3(VAR_5,1);
FUNC_0(VAR_3);
}
return VAR_4;
}
