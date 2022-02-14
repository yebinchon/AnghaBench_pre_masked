
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_12__ {scalar_t__* base; int L; } ;
typedef TYPE_1__ jit_State ;
typedef int int32_t ;
struct TYPE_13__ {int * argv; } ;
typedef scalar_t__ TRef ;
typedef int SFormat ;
typedef TYPE_2__ RecordFFData ;
typedef scalar_t__ CTypeID ;
typedef int CTState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ,scalar_t__,int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ,int,scalar_t__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*,scalar_t__) ;

TRef FUNC_16(jit_State *VAR_10, RecordFFData *VAR_11, TRef VAR_12)
{
  CTState *VAR_13 = FUNC_6(FUNC_3(VAR_10));
  CTypeID VAR_14 = FUNC_4(VAR_13, &VAR_11->argv[0]);
  TRef VAR_15, VAR_16 = VAR_10->base[1];
  SFormat VAR_17 = (VAR_9|VAR_8);
  int32_t VAR_18;
  if (VAR_16) {
    CTypeID VAR_19 = 0;
    VAR_18 = (int32_t)FUNC_10(VAR_10->L, 2, &VAR_19);
    if (VAR_19)
      VAR_16 = FUNC_5(VAR_10, FUNC_7(VAR_13, VAR_0), 0, VAR_16, &VAR_11->argv[1]);
    else
      VAR_16 = FUNC_15(VAR_10, VAR_16);
    FUNC_9(FUNC_1(VAR_5), VAR_16, FUNC_12(VAR_10, VAR_18));
  } else {
    VAR_18 = VAR_14 ? 16 : 8;
  }
  if (VAR_18 < 0) { VAR_18 = -VAR_18; VAR_17 |= VAR_6; }
  VAR_17 |= ((SFormat)((VAR_18+1)&255) << VAR_7);
  if (VAR_14) {
    VAR_15 = FUNC_5(VAR_10, FUNC_7(VAR_13, VAR_14), 0, VAR_10->base[0], &VAR_11->argv[0]);
    if (VAR_18 < 16)
      VAR_15 = FUNC_9(FUNC_0(VAR_4, VAR_3), VAR_15,
    FUNC_13(VAR_10, ((uint64_t)1 << 4*VAR_18)-1));
  } else {
    VAR_15 = FUNC_15(VAR_10, VAR_10->base[0]);
    if (VAR_18 < 8)
      VAR_15 = FUNC_9(FUNC_2(VAR_4), VAR_15, FUNC_12(VAR_10, (int32_t)((1u << 4*VAR_18)-1)));
    VAR_15 = FUNC_8(VAR_15, VAR_3, VAR_2, 0);
    FUNC_14(VAR_10);
  }
  return FUNC_11(VAR_10, VAR_1, VAR_12, FUNC_12(VAR_10, VAR_17), VAR_15);
}
