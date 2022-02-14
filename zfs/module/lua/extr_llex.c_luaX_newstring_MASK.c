
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ top; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_11__ {TYPE_1__* fs; TYPE_2__* L; } ;
struct TYPE_9__ {int h; } ;
typedef int TValue ;
typedef int TString ;
typedef TYPE_3__ LexState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*,int ,scalar_t__) ;
 int * FUNC_3 (TYPE_2__*,char const*,size_t) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_7 (int *) ;

TString *FUNC_8 (LexState *VAR_0, const char *VAR_1, size_t VAR_2) {
  lua_State *VAR_3 = VAR_0->L;
  TValue *VAR_4;
  TString *VAR_5 = FUNC_3(VAR_3, VAR_1, VAR_2);
  FUNC_6(VAR_3, VAR_3->top++, VAR_5);
  VAR_4 = FUNC_2(VAR_3, VAR_0->fs->h, VAR_3->top - 1);
  if (FUNC_7(VAR_4)) {


    FUNC_5(VAR_4, 1);
    FUNC_1(VAR_3);
  }
  else {
    VAR_5 = FUNC_4(FUNC_0(VAR_4));
  }
  VAR_3->top--;
  return VAR_5;
}
