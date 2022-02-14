
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int info; } ;
typedef int TValue ;
typedef int MSize ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef int CTSize ;


 int FUNC_0 (int *,TYPE_1__*,int ,int *,int *,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int *,int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_1__*,int *,int *,int ) ;
 int FUNC_6 (int *,TYPE_1__*,int *) ;
 int FUNC_7 (int *,int ,int ) ;

void FUNC_8(CTState *VAR_0, CType *VAR_1, CTSize VAR_2,
        uint8_t *VAR_3, TValue *VAR_4, MSize VAR_5)
{
  if (VAR_5 == 0)
    FUNC_7(VAR_3, 0, VAR_2);
  else if (VAR_5 == 1 && !FUNC_6(VAR_0, VAR_1, VAR_4))
    FUNC_5(VAR_0, VAR_1, VAR_3, VAR_4, 0);
  else if (FUNC_3(VAR_1->info))
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  else if (FUNC_4(VAR_1->info))
    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  else
    FUNC_1(VAR_0, VAR_1);
}
