
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int info; int size; } ;
typedef int CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef int CTSize ;
typedef int CTInfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;

CTInfo FUNC_9(CTState *VAR_6, CTypeID VAR_7, CTSize *VAR_8)
{
  CTInfo VAR_9 = 0;
  CType *VAR_10 = FUNC_2(VAR_6, VAR_7);
  for (;;) {
    CTInfo VAR_11 = VAR_10->info;
    if (FUNC_5(VAR_11)) {

    } else if (FUNC_4(VAR_11)) {
      if (FUNC_7(VAR_11, VAR_1))
 VAR_9 |= VAR_10->size;
      else if (FUNC_7(VAR_11, VAR_0) && !(VAR_9 & VAR_2))
 VAR_9 |= VAR_2 + FUNC_0(VAR_10->size);
    } else {
      if (!(VAR_9 & VAR_2)) VAR_9 |= (VAR_11 & VAR_3);
      VAR_9 |= (VAR_11 & ~(VAR_3|VAR_4));
      FUNC_8(FUNC_3(VAR_11) || FUNC_6(VAR_11));
      *VAR_8 = FUNC_6(VAR_11) ? VAR_5 : VAR_10->size;
      break;
    }
    VAR_10 = FUNC_2(VAR_6, FUNC_1(VAR_11));
  }
  return VAR_9;
}
