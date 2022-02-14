
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ k; } ;
struct TYPE_10__ {int * prev; TYPE_7__ v; } ;
struct TYPE_9__ {int * fs; } ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ LHSVarList ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_7__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(LexState *VAR_1)
{
  FuncState *VAR_2 = VAR_1->fs;
  LHSVarList VAR_3;
  FUNC_1(VAR_1, &VAR_3.v);
  if (VAR_3.v.k == VAR_0) {
    FUNC_3(FUNC_0(VAR_2, &VAR_3.v), 1);
  } else {
    VAR_3.prev = ((void*)0);
    FUNC_2(VAR_1, &VAR_3, 1);
  }
}
