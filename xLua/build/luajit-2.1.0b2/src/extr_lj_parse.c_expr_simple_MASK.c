
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int aux; } ;
struct TYPE_20__ {TYPE_1__ s; int sval; int nval; } ;
struct TYPE_23__ {TYPE_2__ u; } ;
struct TYPE_22__ {int flags; int numparams; int freereg; } ;
struct TYPE_21__ {int tok; int linenumber; TYPE_4__* fs; int tokval; int L; } ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ FuncState ;
typedef TYPE_5__ ExpDesc ;
typedef int BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (TYPE_5__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_5__*,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(LexState *VAR_11, ExpDesc *VAR_12)
{
  switch (VAR_11->tok) {
  case 130:
    FUNC_4(VAR_12, (VAR_2 && FUNC_10(&VAR_11->tokval)) ? VAR_5 : VAR_8, 0);
    FUNC_3(VAR_11->L, &VAR_12->u.nval, &VAR_11->tokval);
    break;
  case 129:
    FUNC_4(VAR_12, VAR_9, 0);
    VAR_12->u.sval = FUNC_9(&VAR_11->tokval);
    break;
  case 131:
    FUNC_4(VAR_12, VAR_7, 0);
    break;
  case 128:
    FUNC_4(VAR_12, VAR_10, 0);
    break;
  case 133:
    FUNC_4(VAR_12, VAR_6, 0);
    break;
  case 134: {
    FuncState *VAR_13 = VAR_11->fs;
    BCReg VAR_14;
    FUNC_2(VAR_11, VAR_13->flags & VAR_3, VAR_1);
    FUNC_1(VAR_13, 1);
    VAR_14 = VAR_13->freereg-1;
    FUNC_4(VAR_12, VAR_4, FUNC_0(VAR_13, VAR_0, VAR_14, 2, VAR_13->numparams));
    VAR_12->u.s.aux = VAR_14;
    break;
  }
  case '{':
    FUNC_6(VAR_11, VAR_12);
    return;
  case 132:
    FUNC_7(VAR_11);
    FUNC_8(VAR_11, VAR_12, 0, VAR_11->linenumber);
    return;
  default:
    FUNC_5(VAR_11, VAR_12);
    return;
  }
  FUNC_7(VAR_11);
}
