
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_15__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int int32_t ;
struct TYPE_16__ {int info; int size; } ;
struct TYPE_14__ {int ctypeid; } ;
typedef int TValue ;
typedef int CTypeID ;
typedef TYPE_2__ CType ;
typedef int CTState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 TYPE_12__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_12__*) ;
 TYPE_2__* FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (TYPE_1__*) ;
 TYPE_2__* FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 TYPE_2__* FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_2__*,TYPE_2__*,int *,int *,int ) ;
 int FUNC_14 (TYPE_1__*,int,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;

uint64_t FUNC_24(lua_State *VAR_9, int VAR_10, CTypeID *VAR_11)
{
  TValue *VAR_12 = VAR_9->base + VAR_10-1;
  if (VAR_12 >= VAR_9->top) {
  err:
    FUNC_14(VAR_9, VAR_10, VAR_8);
  } else if (FUNC_2(FUNC_22(VAR_12))) {

  } else if (FUNC_20(VAR_12)) {
    CTState *VAR_13 = FUNC_7(VAR_9);
    uint8_t *VAR_14 = (uint8_t *)FUNC_4(FUNC_3(VAR_12));
    CTypeID VAR_15 = FUNC_3(VAR_12)->ctypeid;
    CType *VAR_16 = FUNC_8(VAR_13, VAR_15);
    uint64_t VAR_17;
    if (FUNC_10(VAR_16->info)) {
      VAR_14 = *(void **)VAR_14;
      VAR_15 = FUNC_6(VAR_16->info);
    }
    VAR_16 = FUNC_11(VAR_13, VAR_15);
    if (FUNC_9(VAR_16->info)) VAR_16 = FUNC_5(VAR_13, VAR_16);
    if ((VAR_16->info & (VAR_5|VAR_0|VAR_1|VAR_2)) ==
 FUNC_1(VAR_6, VAR_2) && VAR_16->size == 8)
      *VAR_11 = VAR_4;
    else if (!*VAR_11)
      *VAR_11 = VAR_3;
    FUNC_13(VAR_13, FUNC_8(VAR_13, *VAR_11), VAR_16,
     (uint8_t *)&VAR_17, VAR_14, FUNC_0(VAR_10));
    return VAR_17;
  } else if (!(FUNC_23(VAR_12) && FUNC_16(FUNC_19(VAR_12), VAR_12))) {
    goto err;
  }
  if (FUNC_2(FUNC_21(VAR_12))) {
    return (uint32_t)FUNC_12(VAR_12);
  } else {
    int32_t VAR_18 = FUNC_15(FUNC_17(VAR_12));
    if (VAR_7) FUNC_18(VAR_12, VAR_18);
    return (uint32_t)VAR_18;
  }
}
