
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ size; int info; } ;
typedef int TValue ;
typedef int CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_11 (int *,TYPE_1__*,int ,int *,int *) ;
 int FUNC_12 (int) ;

int FUNC_13(CTState *VAR_1, CType *VAR_2, TValue *VAR_3, uint8_t *VAR_4)
{
  CTypeID VAR_5;

  if (FUNC_6(VAR_2->info)) {
    FUNC_0(VAR_1, VAR_3, VAR_2);
    return 0;
  } else if (FUNC_5(VAR_2->info)) {
    return FUNC_10(VAR_1, VAR_2, VAR_3, VAR_4);
  }


  FUNC_12(FUNC_8(VAR_2->info) || FUNC_7(VAR_2->info));
  VAR_5 = FUNC_2(VAR_2->info);
  VAR_2 = FUNC_3(VAR_1, VAR_5);


  if (FUNC_9(VAR_2->info)) {
    FUNC_12(VAR_2->size == VAR_0);
    VAR_4 = *(uint8_t **)VAR_4;
    VAR_5 = FUNC_2(VAR_2->info);
    VAR_2 = FUNC_3(VAR_1, VAR_5);
  }


  while (FUNC_4(VAR_2->info))
    VAR_2 = FUNC_1(VAR_1, VAR_2);

  return FUNC_11(VAR_1, VAR_2, VAR_5, VAR_3, VAR_4);
}
