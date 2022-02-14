
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_18__ {scalar_t__ info; } ;
struct TYPE_19__ {TYPE_1__ s; } ;
struct TYPE_21__ {scalar_t__ k; TYPE_2__ u; } ;
struct TYPE_20__ {scalar_t__ nactvar; int freereg; } ;
typedef TYPE_3__ FuncState ;
typedef TYPE_4__ ExpDesc ;
typedef scalar_t__ BinOpr ;
typedef int BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_3__*,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (scalar_t__,TYPE_4__*,TYPE_4__*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(FuncState *VAR_10, BinOpr VAR_11, ExpDesc *VAR_12, ExpDesc *VAR_13)
{
  BCReg VAR_14, VAR_15, VAR_16;
  uint32_t VAR_17;
  if (FUNC_5(VAR_11, VAR_12, VAR_13))
    return;
  if (VAR_11 == VAR_7) {
    VAR_17 = VAR_5;
    VAR_15 = FUNC_3(VAR_10, VAR_13);
    VAR_14 = FUNC_3(VAR_10, VAR_12);
  } else {
    VAR_17 = VAR_11-VAR_6+VAR_4;

    FUNC_4(VAR_10, VAR_13);
    if (FUNC_2(VAR_13) && (VAR_15 = FUNC_1(VAR_10, VAR_13)) <= VAR_1)
      VAR_17 -= VAR_4-VAR_3;
    else
      VAR_15 = FUNC_3(VAR_10, VAR_13);

    FUNC_6(FUNC_2(VAR_12) || VAR_12->k == VAR_8);
    FUNC_4(VAR_10, VAR_12);

    if (FUNC_2(VAR_12) && !FUNC_2(VAR_13) &&
 (VAR_16 = FUNC_1(VAR_10, VAR_12)) <= VAR_0) {
      VAR_14 = VAR_15; VAR_15 = VAR_16; VAR_17 -= VAR_4-VAR_2;
    } else {
      VAR_14 = FUNC_3(VAR_10, VAR_12);
    }
  }

  if (VAR_12->k == VAR_8 && VAR_12->u.s.info >= VAR_10->nactvar) VAR_10->freereg--;
  if (VAR_13->k == VAR_8 && VAR_13->u.s.info >= VAR_10->nactvar) VAR_10->freereg--;
  VAR_12->u.s.info = FUNC_0(VAR_10, VAR_17, 0, VAR_14, VAR_15);
  VAR_12->k = VAR_9;
}
