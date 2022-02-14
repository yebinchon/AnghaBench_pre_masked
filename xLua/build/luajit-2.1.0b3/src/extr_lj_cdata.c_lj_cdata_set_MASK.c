
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int L; } ;
struct TYPE_12__ {int info; int size; } ;
typedef int TValue ;
typedef TYPE_1__ CType ;
typedef TYPE_2__ CTState ;
typedef int CTInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,int *,int *) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*,int *,int *,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int) ;

void FUNC_14(CTState *VAR_4, CType *VAR_5, uint8_t *VAR_6, TValue *VAR_7, CTInfo VAR_8)
{
  if (FUNC_5(VAR_5->info)) {
    goto err_const;
  } else if (FUNC_4(VAR_5->info)) {
    if (((VAR_5->info|VAR_8) & VAR_1)) goto err_const;
    FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7);
    return;
  }


  FUNC_13(FUNC_7(VAR_5->info) || FUNC_6(VAR_5->info));
  VAR_5 = FUNC_1(VAR_4, VAR_5);


  if (FUNC_8(VAR_5->info)) {
    FUNC_13(VAR_5->size == VAR_2);
    VAR_6 = *(uint8_t **)VAR_6;
    VAR_5 = FUNC_1(VAR_4, VAR_5);
  }


  for (;;) {
    if (FUNC_3(VAR_5->info)) {
      if (FUNC_0(VAR_5->info) == VAR_0) VAR_8 |= VAR_5->size;
    } else {
      break;
    }
    VAR_5 = FUNC_1(VAR_4, VAR_5);
  }

  FUNC_13(FUNC_2(VAR_5->info) && !FUNC_9(VAR_5->info));

  if (((VAR_5->info|VAR_8) & VAR_1)) {
  err_const:
    FUNC_12(VAR_4->L, VAR_3);
  }

  FUNC_11(VAR_4, VAR_5, VAR_6, VAR_7, 0);
}
