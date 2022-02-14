
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int Table ;
struct TYPE_15__ {int numparams; int is_vararg; int maxstacksize; } ;
typedef int StkId ;
typedef TYPE_2__ Proto ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int * FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,int ,int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_1__*,int ,int) ;
 int FUNC_14 (TYPE_1__*,int ,int) ;

__attribute__((used)) static StkId FUNC_15 (lua_State *VAR_2, Proto *VAR_3, int VAR_4) {
  int VAR_5;
  int VAR_6 = VAR_3->numparams;
  Table *VAR_7 = ((void*)0);
  StkId VAR_8, VAR_9;
  for (; VAR_4 < VAR_6; ++VAR_4)
    FUNC_11(VAR_2->top++);
  VAR_9 = VAR_2->top - VAR_4;
  VAR_8 = VAR_2->top;
  for (VAR_5=0; VAR_5<VAR_6; VAR_5++) {
    FUNC_14(VAR_2, VAR_2->top++, VAR_9+VAR_5);
    FUNC_11(VAR_9+VAR_5);
  }

  if (VAR_7) {
    FUNC_10(VAR_2, VAR_2->top++, VAR_7);
    FUNC_8(FUNC_1(FUNC_9(VAR_7)));
  }
  return VAR_8;
}
