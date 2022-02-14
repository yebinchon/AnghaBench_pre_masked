
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int info; } ;
struct TYPE_17__ {TYPE_1__ s; } ;
struct TYPE_19__ {scalar_t__ k; TYPE_2__ u; } ;
struct TYPE_18__ {scalar_t__ freereg; } ;
typedef TYPE_3__ FuncState ;
typedef TYPE_4__ ExpDesc ;
typedef int BCPos ;
typedef int BCIns ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int * FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*,scalar_t__) ;

__attribute__((used)) static BCPos FUNC_9(FuncState *VAR_8, ExpDesc *VAR_9, int VAR_10)
{
  BCPos VAR_11;
  if (VAR_9->k == VAR_7) {
    BCIns *VAR_12 = FUNC_5(VAR_8, VAR_9);
    if (FUNC_2(*VAR_12) == VAR_4) {
      *VAR_12 = FUNC_0(VAR_10 ? VAR_0 : VAR_2, 0, FUNC_1(*VAR_12));
      return FUNC_4(VAR_8);
    }
  }
  if (VAR_9->k != VAR_6) {
    FUNC_6(VAR_8, 1);
    FUNC_8(VAR_8, VAR_9, VAR_8->freereg-1);
  }
  FUNC_3(VAR_8, VAR_10 ? VAR_3 : VAR_1, VAR_5, VAR_9->u.s.info);
  VAR_11 = FUNC_4(VAR_8);
  FUNC_7(VAR_8, VAR_9);
  return VAR_11;
}
