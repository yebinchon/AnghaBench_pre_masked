
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ info; } ;
struct TYPE_19__ {TYPE_1__ s; } ;
struct TYPE_21__ {int k; TYPE_2__ u; } ;
struct TYPE_20__ {scalar_t__ freereg; } ;
typedef TYPE_3__ FuncState ;
typedef TYPE_4__ ExpDesc ;
typedef scalar_t__ BCReg ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(FuncState *VAR_7, ExpDesc *VAR_8, ExpDesc *VAR_9)
{
  BCReg VAR_10, VAR_11, VAR_12 = FUNC_6(VAR_7, VAR_8);
  FUNC_4(VAR_7, VAR_8);
  VAR_11 = VAR_7->freereg;
  FUNC_1(VAR_7, VAR_2, VAR_11+1+VAR_5, VAR_12);
  FUNC_7(FUNC_5(VAR_9));
  VAR_10 = FUNC_3(VAR_7, VAR_9);
  if (VAR_10 <= VAR_0) {
    FUNC_2(VAR_7, 2+VAR_5);
    FUNC_0(VAR_7, VAR_3, VAR_11, VAR_12, VAR_10);
  } else {
    FUNC_2(VAR_7, 3+VAR_5);
    FUNC_1(VAR_7, VAR_1, VAR_11+2+VAR_5, VAR_10);
    FUNC_0(VAR_7, VAR_4, VAR_11, VAR_12, VAR_11+2+VAR_5);
    VAR_7->freereg--;
  }
  VAR_8->u.s.info = VAR_11;
  VAR_8->k = VAR_6;
}
