
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int L; int * miscmap; } ;
typedef scalar_t__ MSize ;
typedef int GCtab ;
typedef int GCfunc ;
typedef int CType ;
typedef TYPE_1__ CTState ;


 int * FUNC_0 (TYPE_1__*,int *) ;
 void* FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int ,int *) ;

void *FUNC_6(CTState *VAR_0, CType *VAR_1, GCfunc *VAR_2)
{
  VAR_1 = FUNC_0(VAR_0, VAR_1);
  if (VAR_1) {
    MSize VAR_3 = FUNC_2(VAR_0, VAR_1);
    GCtab *VAR_4 = VAR_0->miscmap;
    FUNC_5(VAR_0->L, FUNC_4(VAR_0->L, VAR_4, (int32_t)VAR_3), VAR_2);
    FUNC_3(VAR_0->L, VAR_4);
    return FUNC_1(VAR_0, VAR_3);
  }
  return ((void*)0);
}
