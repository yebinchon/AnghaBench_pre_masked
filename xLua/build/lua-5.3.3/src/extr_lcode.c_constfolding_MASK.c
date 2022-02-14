
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ lua_Number ;
struct TYPE_10__ {scalar_t__ nval; int ival; } ;
struct TYPE_11__ {TYPE_2__ u; int k; } ;
typedef TYPE_3__ expdesc ;
struct TYPE_12__ {TYPE_1__* ls; } ;
struct TYPE_9__ {int L; } ;
typedef int TValue ;
typedef TYPE_4__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int,int *,int *) ;

__attribute__((used)) static int FUNC_7 (FuncState *VAR_2, int VAR_3, expdesc *VAR_4, expdesc *VAR_5) {
  TValue VAR_6, VAR_7, VAR_8;
  if (!FUNC_4(VAR_4, &VAR_6) || !FUNC_4(VAR_5, &VAR_7) || !FUNC_6(VAR_3, &VAR_6, &VAR_7))
    return 0;
  FUNC_2(VAR_2->ls->L, VAR_3, &VAR_6, &VAR_7, &VAR_8);
  if (FUNC_5(&VAR_8)) {
    VAR_4->k = VAR_1;
    VAR_4->u.ival = FUNC_1(&VAR_8);
  }
  else {
    lua_Number VAR_9 = FUNC_0(&VAR_8);
    if (FUNC_3(VAR_9) || VAR_9 == 0)
      return 0;
    VAR_4->k = VAR_0;
    VAR_4->u.nval = VAR_9;
  }
  return 1;
}
