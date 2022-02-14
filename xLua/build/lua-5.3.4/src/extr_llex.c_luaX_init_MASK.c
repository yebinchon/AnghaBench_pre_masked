
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int extra; } ;
typedef TYPE_1__ TString ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int * VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5 (lua_State *VAR_3) {
  int VAR_4;
  TString *VAR_5 = FUNC_3(VAR_3, VAR_0);
  FUNC_1(VAR_3, FUNC_4(VAR_5));
  for (VAR_4=0; VAR_4<VAR_1; VAR_4++) {
    TString *VAR_6 = FUNC_2(VAR_3, VAR_2[VAR_4]);
    FUNC_1(VAR_3, FUNC_4(VAR_6));
    VAR_6->extra = FUNC_0(VAR_4+1);
  }
}
