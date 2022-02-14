
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int L; int * base; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_11__ {int nres; int * argv; } ;
struct TYPE_10__ {int mobjv; int mobj; int tabv; int tab; } ;
typedef int TValue ;
typedef TYPE_2__ RecordIndex ;
typedef TYPE_3__ RecordFFData ;
typedef int MMS ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_3 (int ,int *,TYPE_1__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(jit_State *VAR_2, RecordFFData *VAR_3, MMS VAR_4)
{
  RecordIndex VAR_5;
  VAR_5.tab = VAR_2->base[0];
  FUNC_0(VAR_2->L, &VAR_5.tabv, &VAR_3->argv[0]);
  if (FUNC_2(VAR_2, &VAR_5, VAR_4)) {
    int VAR_6;
    TValue VAR_7;

    VAR_2->base[1+VAR_0] = VAR_2->base[0];
    VAR_2->base[0] = VAR_5.mobj;
    FUNC_0(VAR_2->L, &VAR_7, &VAR_3->argv[0]);
    FUNC_0(VAR_2->L, &VAR_3->argv[1+VAR_0], &VAR_3->argv[0]);
    FUNC_0(VAR_2->L, &VAR_3->argv[0], &VAR_5.mobjv);

    VAR_6 = FUNC_3(VAR_2->L, ((void*)0), VAR_2, VAR_1);

    FUNC_0(VAR_2->L, &VAR_3->argv[0], &VAR_7);
    if (VAR_6)
      FUNC_1(VAR_2->L, VAR_6);
    VAR_3->nres = -1;
    return 1;
  }
  return 0;
}
