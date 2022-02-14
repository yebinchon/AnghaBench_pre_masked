
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; int info; } ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef scalar_t__ CTSize ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int*,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(CTState *VAR_3, CType *VAR_4, int *VAR_5, CTSize VAR_6)
{
  if (FUNC_2(VAR_4->info)) {
    CType *VAR_7 = FUNC_5(VAR_3, VAR_4);
    CTSize VAR_8, VAR_9 = VAR_7->size, VAR_10 = VAR_4->size;
    for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8 += VAR_9)
      FUNC_7(VAR_3, VAR_7, VAR_5, VAR_6+VAR_8);
  } else if (FUNC_4(VAR_4->info)) {
    FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
  } else {
    int VAR_11 = FUNC_3(VAR_4->info) ? VAR_2 : VAR_0;
    FUNC_6(FUNC_1(VAR_4->info));
    if ((VAR_6 & (VAR_4->size-1))) VAR_11 = VAR_1;
    VAR_5[(VAR_6 >= 8)] |= VAR_11;
  }
}
