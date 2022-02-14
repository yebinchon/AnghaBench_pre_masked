
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int size; int info; scalar_t__ sib; } ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef int CTSize ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int*,int) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(CTState *VAR_3, CType *VAR_4, int *VAR_5, CTSize VAR_6)
{
  if (VAR_4->size > 16) return VAR_1;
  while (VAR_4->sib) {
    CTSize VAR_7;
    VAR_4 = FUNC_1(VAR_3, VAR_4->sib);
    VAR_7 = VAR_6+VAR_4->size;
    if (FUNC_3(VAR_4->info))
      FUNC_0(VAR_3, FUNC_5(VAR_3, VAR_4), VAR_5, VAR_7);
    else if (FUNC_2(VAR_4->info))
      VAR_5[(VAR_7 >= 8)] |= VAR_0;
    else if (FUNC_4(VAR_4->info, VAR_2))
      FUNC_6(VAR_3, FUNC_5(VAR_3, VAR_4), VAR_5, VAR_7);
  }
  return ((VAR_5[0]|VAR_5[1]) & VAR_1);
}
