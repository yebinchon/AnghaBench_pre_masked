
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
typedef int cTValue ;
struct TYPE_9__ {int strempty; } ;
struct TYPE_8__ {TYPE_3__* g; int miscmap; } ;
struct TYPE_7__ {int info; } ;
typedef int MMS ;
typedef scalar_t__ CTypeID ;
typedef TYPE_1__ CType ;
typedef TYPE_2__ CTState ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ,int *) ;
 int * FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

cTValue *FUNC_12(CTState *VAR_0, CTypeID VAR_1, MMS VAR_2)
{
  CType *VAR_3 = FUNC_1(VAR_0, VAR_1);
  cTValue *VAR_4;
  while (FUNC_2(VAR_3->info) || FUNC_5(VAR_3->info)) {
    VAR_1 = FUNC_0(VAR_3->info);
    VAR_3 = FUNC_1(VAR_0, VAR_1);
  }
  if (FUNC_4(VAR_3->info) &&
      FUNC_3(FUNC_1(VAR_0, FUNC_0(VAR_3->info))->info))
    VAR_4 = FUNC_7(VAR_0->miscmap, &VAR_0->g->strempty);
  else
    VAR_4 = FUNC_6(VAR_0->miscmap, -(int32_t)VAR_1);
  if (VAR_4 && FUNC_11(VAR_4) &&
      (VAR_4 = FUNC_7(FUNC_9(VAR_4), FUNC_8(VAR_0->g, VAR_2))) && !FUNC_10(VAR_4))
    return VAR_4;
  return ((void*)0);
}
