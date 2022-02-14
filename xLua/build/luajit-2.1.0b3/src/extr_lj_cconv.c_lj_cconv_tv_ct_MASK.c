
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int lua_Number ;
typedef scalar_t__ int32_t ;
struct TYPE_23__ {int L; TYPE_1__* g; } ;
struct TYPE_22__ {int info; int size; } ;
struct TYPE_21__ {int n; } ;
struct TYPE_20__ {TYPE_2__ tmptv2; } ;
typedef TYPE_2__ TValue ;
typedef int GCcdata ;
typedef int CTypeID ;
typedef TYPE_3__ CType ;
typedef TYPE_4__ CTState ;
typedef int CTSize ;
typedef int CTInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,int ,TYPE_3__*,scalar_t__*,scalar_t__*,int ) ;
 int * FUNC_9 (TYPE_4__*,int ,int) ;
 int * FUNC_10 (TYPE_4__*,scalar_t__*,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,scalar_t__*,int) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (int ,TYPE_2__*,int *) ;
 int FUNC_15 (TYPE_2__*,scalar_t__) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (TYPE_2__*) ;

int FUNC_18(CTState *VAR_5, CType *VAR_6, CTypeID VAR_7,
     TValue *VAR_8, uint8_t *VAR_9)
{
  CTInfo VAR_10 = VAR_6->info;
  if (FUNC_4(VAR_10)) {
    if (!FUNC_2(VAR_10)) {
      if (FUNC_3(VAR_10) && VAR_6->size > 4) goto copyval;
      if (VAR_4 && FUNC_3(VAR_10)) {
 int32_t VAR_11;
 FUNC_8(VAR_5, FUNC_1(VAR_5, VAR_2), VAR_6,
         (uint8_t *)&VAR_11, VAR_9, 0);
 if ((VAR_10 & VAR_0) && VAR_11 < 0)
   FUNC_16(VAR_8, (lua_Number)(uint32_t)VAR_11);
 else
   FUNC_15(VAR_8, VAR_11);
      } else {
 FUNC_8(VAR_5, FUNC_1(VAR_5, VAR_1), VAR_6,
         (uint8_t *)&VAR_8->n, VAR_9, 0);

 FUNC_11(FUNC_17(VAR_8));
      }
    } else {
      uint32_t VAR_12 = VAR_6->size == 1 ? (*VAR_9 != 0) : (*(int *)VAR_9 != 0);
      FUNC_13(VAR_8, VAR_12);
      FUNC_13(&VAR_5->g->tmptv2, VAR_12);
    }
    return 0;
  } else if (FUNC_5(VAR_10) || FUNC_6(VAR_10)) {

    FUNC_14(VAR_5->L, VAR_8, FUNC_10(VAR_5, VAR_9, VAR_7));
    return 1;
  } else {
    GCcdata *VAR_13;
    CTSize VAR_14;
  copyval:
    VAR_14 = VAR_6->size;
    FUNC_11(VAR_14 != VAR_3);

    VAR_13 = FUNC_9(VAR_5, FUNC_7(VAR_5, VAR_6), VAR_14);
    FUNC_14(VAR_5->L, VAR_8, VAR_13);
    FUNC_12(FUNC_0(VAR_13), VAR_9, VAR_14);
    return 1;
  }
}
