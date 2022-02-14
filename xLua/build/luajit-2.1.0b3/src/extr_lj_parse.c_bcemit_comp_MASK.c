
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_20__ {scalar_t__ info; } ;
struct TYPE_21__ {TYPE_1__ s; } ;
struct TYPE_23__ {int k; TYPE_2__ u; } ;
struct TYPE_22__ {scalar_t__ nactvar; int freereg; } ;
typedef TYPE_3__ FuncState ;
typedef TYPE_4__ ExpDesc ;
typedef scalar_t__ BinOpr ;
typedef int BCReg ;
typedef scalar_t__ BCOp ;
typedef int BCIns ;


 int FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;





 int VAR_10 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_9(FuncState *VAR_11, BinOpr VAR_12, ExpDesc *VAR_13, ExpDesc *VAR_14)
{
  ExpDesc *VAR_15 = VAR_13;
  BCIns VAR_16;
  FUNC_8(VAR_11, VAR_13);
  if (VAR_12 == VAR_6 || VAR_12 == VAR_8) {
    BCOp VAR_17 = VAR_12 == VAR_6 ? VAR_3 : VAR_5;
    BCReg VAR_18;
    if (FUNC_6(VAR_13)) { VAR_13 = VAR_14; VAR_14 = VAR_15; }
    VAR_18 = FUNC_7(VAR_11, VAR_13);
    FUNC_8(VAR_11, VAR_14);
    switch (VAR_14->k) {
    case 131: case 132: case 128:
      VAR_16 = FUNC_0(VAR_17+(VAR_1-VAR_3), VAR_18, FUNC_4(VAR_14));
      break;
    case 129:
      VAR_16 = FUNC_0(VAR_17+(VAR_2-VAR_3), VAR_18, FUNC_5(VAR_11, VAR_14));
      break;
    case 130:
      VAR_16 = FUNC_0(VAR_17+(VAR_0-VAR_3), VAR_18, FUNC_3(VAR_11, VAR_14));
      break;
    default:
      VAR_16 = FUNC_0(VAR_17, VAR_18, FUNC_7(VAR_11, VAR_14));
      break;
    }
  } else {
    uint32_t VAR_19 = VAR_12-VAR_7+VAR_4;
    BCReg VAR_20, VAR_21;
    if ((VAR_19-VAR_4) & 1) {
      VAR_13 = VAR_14; VAR_14 = VAR_15;
      VAR_19 = ((VAR_19-VAR_4)^3)+VAR_4;
      FUNC_8(VAR_11, VAR_13);
    }
    VAR_21 = FUNC_7(VAR_11, VAR_14);
    VAR_20 = FUNC_7(VAR_11, VAR_13);
    VAR_16 = FUNC_0(VAR_19, VAR_20, VAR_21);
  }

  if (VAR_13->k == VAR_10 && VAR_13->u.s.info >= VAR_11->nactvar) VAR_11->freereg--;
  if (VAR_14->k == VAR_10 && VAR_14->u.s.info >= VAR_11->nactvar) VAR_11->freereg--;
  FUNC_1(VAR_11, VAR_16);
  VAR_15->u.s.info = FUNC_2(VAR_11);
  VAR_15->k = VAR_9;
}
