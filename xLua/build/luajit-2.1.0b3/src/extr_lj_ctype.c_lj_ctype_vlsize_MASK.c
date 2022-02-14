
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int size; int info; scalar_t__ sib; } ;
typedef scalar_t__ CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef int CTSize ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *,scalar_t__) ;
 TYPE_1__* FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

CTSize FUNC_9(CTState *VAR_2, CType *VAR_3, CTSize VAR_4)
{
  uint64_t VAR_5 = 0;
  if (FUNC_3(VAR_3->info)) {
    CTypeID VAR_6 = 0, VAR_7 = VAR_3->sib;
    VAR_5 = VAR_3->size;
    while (VAR_7) {
      CType *VAR_8 = FUNC_1(VAR_2, VAR_7);
      if (FUNC_7(VAR_8->info) == VAR_1)
 VAR_6 = FUNC_0(VAR_8->info);
      VAR_7 = VAR_8->sib;
    }
    VAR_3 = FUNC_5(VAR_2, VAR_6);
  }
  FUNC_8(FUNC_4(VAR_3->info));
  VAR_3 = FUNC_6(VAR_2, VAR_3);
  FUNC_8(FUNC_2(VAR_3->info));

  VAR_5 += (uint64_t)VAR_3->size * VAR_4;
  return VAR_5 < 0x80000000u ? (CTSize)VAR_5 : VAR_0;
}
