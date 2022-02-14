
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ lua_Number ;
typedef scalar_t__ int32_t ;
typedef int cTValue ;
struct TYPE_21__ {scalar_t__ info; } ;
struct TYPE_22__ {TYPE_1__ s; int nval; } ;
struct TYPE_24__ {scalar_t__ k; TYPE_2__ u; } ;
struct TYPE_23__ {int flags; } ;
typedef TYPE_3__ FuncState ;
typedef TYPE_4__ ExpDesc ;
typedef scalar_t__ BCReg ;
typedef int BCIns ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 int * FUNC_12 (TYPE_4__*) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,scalar_t__) ;
 scalar_t__ FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(FuncState *VAR_17, ExpDesc *VAR_18, BCReg VAR_19)
{
  BCIns VAR_20;
  FUNC_10(VAR_17, VAR_18);
  if (VAR_18->k == VAR_12) {
    VAR_20 = FUNC_0(VAR_4, VAR_19, FUNC_9(VAR_17, VAR_18));
  } else if (VAR_18->k == VAR_11) {






    lua_Number VAR_21 = FUNC_11(VAR_18);
    int32_t VAR_22 = FUNC_14(VAR_21);
    if (FUNC_5(VAR_22) && VAR_21 == (lua_Number)VAR_22)
      VAR_20 = FUNC_0(VAR_3, VAR_19, (BCReg)(uint16_t)VAR_22);
    else

      VAR_20 = FUNC_0(VAR_1, VAR_19, FUNC_7(VAR_17, VAR_18));






  } else if (VAR_18->k == VAR_15) {
    FUNC_17(FUNC_3(VAR_17, VAR_18), VAR_19);
    goto noins;
  } else if (VAR_18->k == VAR_14) {
    if (VAR_19 == VAR_18->u.s.info)
      goto noins;
    VAR_20 = FUNC_0(VAR_5, VAR_19, VAR_18->u.s.info);
  } else if (VAR_18->k == VAR_10) {
    FUNC_2(VAR_17, VAR_19, 1);
    goto noins;
  } else if (VAR_18->k <= VAR_13) {
    VAR_20 = FUNC_0(VAR_2, VAR_19, FUNC_8(VAR_18));
  } else {
    FUNC_15(VAR_18->k == VAR_16 || VAR_18->k == VAR_8);
    return;
  }
  FUNC_1(VAR_17, VAR_20);
noins:
  VAR_18->u.s.info = VAR_19;
  VAR_18->k = VAR_14;
}
