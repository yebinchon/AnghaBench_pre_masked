
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int aux; } ;
struct TYPE_19__ {TYPE_1__ s; } ;
struct TYPE_22__ {scalar_t__ k; TYPE_2__ u; } ;
struct TYPE_21__ {int flags; int nactvar; int pc; } ;
struct TYPE_20__ {char tok; TYPE_4__* fs; } ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ FuncState ;
typedef TYPE_5__ ExpDesc ;
typedef int BCReg ;
typedef int BCIns ;


 int FUNC_0 (scalar_t__,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int * FUNC_6 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (char) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void FUNC_13(LexState *VAR_11)
{
  BCIns VAR_12;
  FuncState *VAR_13 = VAR_11->fs;
  FUNC_10(VAR_11);
  VAR_13->flags |= VAR_9;
  if (FUNC_11(VAR_11->tok) || VAR_11->tok == ';') {
    VAR_12 = FUNC_0(VAR_3, 0, 1);
  } else {
    ExpDesc VAR_14;
    BCReg VAR_15 = FUNC_7(VAR_11, &VAR_14);
    if (VAR_15 == 1) {
      if (VAR_14.k == VAR_10) {
 BCIns *VAR_16 = FUNC_6(VAR_13, &VAR_14);

 if (FUNC_3(*VAR_16) == VAR_7) goto notailcall;
 VAR_13->pc--;
 VAR_12 = FUNC_0(FUNC_3(*VAR_16)-VAR_0+VAR_1, FUNC_1(*VAR_16), FUNC_2(*VAR_16));
      } else {
 VAR_12 = FUNC_0(VAR_4, FUNC_8(VAR_13, &VAR_14), 2);
      }
    } else {
      if (VAR_14.k == VAR_10) {
      notailcall:
 FUNC_12(FUNC_6(VAR_13, &VAR_14), 0);
 VAR_12 = FUNC_0(VAR_5, VAR_13->nactvar, VAR_14.u.s.aux - VAR_13->nactvar);
      } else {
 FUNC_9(VAR_13, &VAR_14);
 VAR_12 = FUNC_0(VAR_2, VAR_13->nactvar, VAR_15+1);
      }
    }
  }
  if (VAR_13->flags & VAR_8)
    FUNC_4(VAR_13, VAR_6, 0, 0);
  FUNC_5(VAR_13, VAR_12);
}
